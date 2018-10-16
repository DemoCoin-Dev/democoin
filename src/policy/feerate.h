// Copyright (c) 2009-2010 Vote Nakamoto
// Copyright (c) 2009-2018 The Democoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_POLICY_FEERATE_H
#define BITCOIN_POLICY_FEERATE_H

#include <amount.h>
#include <serialize.h>

#include <string>

extern const std::string CURRENCY_UNIT;

/**
 * Fee rate in votes per kilobyte: CAmount / kB
 */
class CFeeRate
{
private:
    CAmount nVotesPerK; // unit is votes-per-1,000-bytes

public:
    /** Fee rate of 0 votes per kB */
    CFeeRate() : nVotesPerK(0) { }
    template<typename I>
    CFeeRate(const I _nVotesPerK): nVotesPerK(_nVotesPerK) {
        // We've previously had bugs creep in from silent double->int conversion...
        static_assert(std::is_integral<I>::value, "CFeeRate should be used without floats");
    }
    /** Constructor for a fee rate in votes per kB. The size in bytes must not exceed (2^63 - 1)*/
    CFeeRate(const CAmount& nFeePaid, size_t nBytes);
    /**
     * Return the fee in votes for the given size in bytes.
     */
    CAmount GetFee(size_t nBytes) const;
    /**
     * Return the fee in votes for a size of 1000 bytes
     */
    CAmount GetFeePerK() const { return GetFee(1000); }
    friend bool operator<(const CFeeRate& a, const CFeeRate& b) { return a.nVotesPerK < b.nVotesPerK; }
    friend bool operator>(const CFeeRate& a, const CFeeRate& b) { return a.nVotesPerK > b.nVotesPerK; }
    friend bool operator==(const CFeeRate& a, const CFeeRate& b) { return a.nVotesPerK == b.nVotesPerK; }
    friend bool operator<=(const CFeeRate& a, const CFeeRate& b) { return a.nVotesPerK <= b.nVotesPerK; }
    friend bool operator>=(const CFeeRate& a, const CFeeRate& b) { return a.nVotesPerK >= b.nVotesPerK; }
    friend bool operator!=(const CFeeRate& a, const CFeeRate& b) { return a.nVotesPerK != b.nVotesPerK; }
    CFeeRate& operator+=(const CFeeRate& a) { nVotesPerK += a.nVotesPerK; return *this; }
    std::string ToString() const;

    ADD_SERIALIZE_METHODS;

    template <typename Stream, typename Operation>
    inline void SerializationOp(Stream& s, Operation ser_action) {
        READWRITE(nVotesPerK);
    }
};

#endif //  BITCOIN_POLICY_FEERATE_H
