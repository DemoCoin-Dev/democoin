// Copyright (c) 2011-2014 The Democoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
#define BITCOIN_QT_BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class DemocoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit DemocoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Democoin address widget validator, checks for a valid democoin address.
 */
class DemocoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit DemocoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
