

#include <QtGlobal>

// Automatically generated by extract_strings_qt.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *democoin_strings[] = {
QT_TRANSLATE_NOOP("democoin-core", "Democoin Core"),
QT_TRANSLATE_NOOP("democoin-core", "The %s developers"),
QT_TRANSLATE_NOOP("democoin-core", ""
"-maxtxfee is set very high! Fees this large could be paid on a single "
"transaction."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Can't generate a change-address key. Private keys are disabled for this "
"wallet."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Cannot obtain a lock on data directory %s. %s is probably already running."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Cannot provide specific connections and have addrman find outgoing "
"connections at the same."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Cannot upgrade a non HD split wallet without upgrading to support pre split "
"keypool. Please use -upgradewallet=169900 or -upgradewallet with no version "
"specified."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Distributed under the MIT software license, see the accompanying file %s or "
"%s"),
QT_TRANSLATE_NOOP("democoin-core", ""
"Error loading %s: You can't enable HD on an already existing non-HD wallet"),
QT_TRANSLATE_NOOP("democoin-core", ""
"Error reading %s! All keys read correctly, but transaction data or address "
"book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("democoin-core", ""
"Fee estimation failed. Fallbackfee is disabled. Wait a few blocks or enable -"
"fallbackfee."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Group outputs by address, selecting all or none, instead of selecting on a "
"per-output basis. Privacy is improved as an address is only used once "
"(unless someone sends to it after spending from it), but may result in "
"slightly higher fees as suboptimal coin selection may result due to the "
"added limitation (default: %u)"),
QT_TRANSLATE_NOOP("democoin-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("democoin-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong, %s will not work properly."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Please contribute if you find %s useful. Visit %s for further information "
"about the software."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Prune configured below the minimum of %d MiB.  Please use a higher number."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Prune: last wallet synchronisation goes beyond pruned data. You need to -"
"reindex (download the whole blockchain again in case of pruned node)"),
QT_TRANSLATE_NOOP("democoin-core", ""
"Rescans are not possible in pruned mode. You will need to use -reindex which "
"will download the whole blockchain again."),
QT_TRANSLATE_NOOP("democoin-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("democoin-core", ""
"The transaction amount is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("democoin-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("democoin-core", ""
"This is the transaction fee you may discard if change is smaller than dust "
"at this level"),
QT_TRANSLATE_NOOP("democoin-core", ""
"This is the transaction fee you may pay when fee estimates are not available."),
QT_TRANSLATE_NOOP("democoin-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit %s and cryptographic software written by Eric Young and "
"UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Unable to replay blocks. You will need to rebuild the database using -"
"reindex-chainstate."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Unable to rewind the database to a pre-fork state. You will need to "
"redownload the blockchain"),
QT_TRANSLATE_NOOP("democoin-core", ""
"Unsupported argument -socks found. Setting SOCKS version isn't possible "
"anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Unsupported argument -whitelistalwaysrelay ignored, use -whitelistrelay and/"
"or -whitelistforcerelay."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Warning: Private keys detected in wallet {%s} with disabled private keys"),
QT_TRANSLATE_NOOP("democoin-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Warning: Unknown block versions being mined! It's possible unknown rules are "
"in effect"),
QT_TRANSLATE_NOOP("democoin-core", ""
"Warning: Wallet file corrupt, data salvaged! Original %s saved as %s in %s; "
"if your balance or transactions are incorrect you should restore from a "
"backup."),
QT_TRANSLATE_NOOP("democoin-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("democoin-core", ""
"You need to rebuild the database using -reindex to go back to unpruned "
"mode.  This will redownload the entire blockchain"),
QT_TRANSLATE_NOOP("democoin-core", "%d of last 100 blocks have unexpected version"),
QT_TRANSLATE_NOOP("democoin-core", "%s corrupt, salvage failed"),
QT_TRANSLATE_NOOP("democoin-core", "%s is set very high!"),
QT_TRANSLATE_NOOP("democoin-core", "-maxmempool must be at least %d MB"),
QT_TRANSLATE_NOOP("democoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("democoin-core", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("democoin-core", "Cannot write to data directory '%s'; check permissions."),
QT_TRANSLATE_NOOP("democoin-core", "Change index out of range"),
QT_TRANSLATE_NOOP("democoin-core", "Copyright (C) %i-%i"),
QT_TRANSLATE_NOOP("democoin-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("democoin-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("democoin-core", "Done loading"),
QT_TRANSLATE_NOOP("democoin-core", "Error creating %s: You can't create non-HD wallets with this version."),
QT_TRANSLATE_NOOP("democoin-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("democoin-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("democoin-core", "Error loading %s"),
QT_TRANSLATE_NOOP("democoin-core", "Error loading %s: Private keys can only be disabled during creation"),
QT_TRANSLATE_NOOP("democoin-core", "Error loading %s: Wallet corrupted"),
QT_TRANSLATE_NOOP("democoin-core", "Error loading %s: Wallet requires newer version of %s"),
QT_TRANSLATE_NOOP("democoin-core", "Error loading %s: You can't disable HD on an already existing HD wallet"),
QT_TRANSLATE_NOOP("democoin-core", "Error loading block database"),
QT_TRANSLATE_NOOP("democoin-core", "Error loading wallet %s. Duplicate -wallet filename specified."),
QT_TRANSLATE_NOOP("democoin-core", "Error opening block database"),
QT_TRANSLATE_NOOP("democoin-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("democoin-core", "Error upgrading chainstate database"),
QT_TRANSLATE_NOOP("democoin-core", "Error"),
QT_TRANSLATE_NOOP("democoin-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("democoin-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("democoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("democoin-core", "Failed to rescan the wallet during initialization"),
QT_TRANSLATE_NOOP("democoin-core", "Importing..."),
QT_TRANSLATE_NOOP("democoin-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("democoin-core", "Information"),
QT_TRANSLATE_NOOP("democoin-core", "Initialization sanity check failed. %s is shutting down."),
QT_TRANSLATE_NOOP("democoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("democoin-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("democoin-core", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("democoin-core", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("democoin-core", "Invalid amount for -discardfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("democoin-core", "Invalid amount for -fallbackfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("democoin-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("democoin-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("democoin-core", "Keypool ran out, please call keypoolrefill first"),
QT_TRANSLATE_NOOP("democoin-core", "Loading P2P addresses..."),
QT_TRANSLATE_NOOP("democoin-core", "Loading banlist..."),
QT_TRANSLATE_NOOP("democoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("democoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("democoin-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("democoin-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("democoin-core", "Prune cannot be configured with a negative value."),
QT_TRANSLATE_NOOP("democoin-core", "Prune mode is incompatible with -txindex."),
QT_TRANSLATE_NOOP("democoin-core", "Pruning blockstore..."),
QT_TRANSLATE_NOOP("democoin-core", "Reducing -maxconnections from %d to %d, because of system limitations."),
QT_TRANSLATE_NOOP("democoin-core", "Replaying blocks..."),
QT_TRANSLATE_NOOP("democoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("democoin-core", "Rewinding blocks..."),
QT_TRANSLATE_NOOP("democoin-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("democoin-core", "Specified -walletdir \"%s\" does not exist"),
QT_TRANSLATE_NOOP("democoin-core", "Specified -walletdir \"%s\" is a relative path"),
QT_TRANSLATE_NOOP("democoin-core", "Specified -walletdir \"%s\" is not a directory"),
QT_TRANSLATE_NOOP("democoin-core", "Specified blocks directory \"%s\" does not exist."),
QT_TRANSLATE_NOOP("democoin-core", "Starting network threads..."),
QT_TRANSLATE_NOOP("democoin-core", "The source code is available from %s."),
QT_TRANSLATE_NOOP("democoin-core", "The transaction amount is too small to pay the fee"),
QT_TRANSLATE_NOOP("democoin-core", "The wallet will avoid paying less than the minimum relay fee."),
QT_TRANSLATE_NOOP("democoin-core", "This is experimental software."),
QT_TRANSLATE_NOOP("democoin-core", "This is the minimum transaction fee you pay on every transaction."),
QT_TRANSLATE_NOOP("democoin-core", "This is the transaction fee you will pay if you send a transaction."),
QT_TRANSLATE_NOOP("democoin-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("democoin-core", "Transaction amounts must not be negative"),
QT_TRANSLATE_NOOP("democoin-core", "Transaction fee and change calculation failed"),
QT_TRANSLATE_NOOP("democoin-core", "Transaction has too long of a mempool chain"),
QT_TRANSLATE_NOOP("democoin-core", "Transaction must have at least one recipient"),
QT_TRANSLATE_NOOP("democoin-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("democoin-core", "Transaction too large"),
QT_TRANSLATE_NOOP("democoin-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("democoin-core", "Unable to bind to %s on this computer. %s is probably already running."),
QT_TRANSLATE_NOOP("democoin-core", "Unable to generate initial keys"),
QT_TRANSLATE_NOOP("democoin-core", "Unable to generate keys"),
QT_TRANSLATE_NOOP("democoin-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("democoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("democoin-core", "Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("democoin-core", "Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("democoin-core", "Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("democoin-core", "Unsupported logging category %s=%s."),
QT_TRANSLATE_NOOP("democoin-core", "Upgrading UTXO database"),
QT_TRANSLATE_NOOP("democoin-core", "Upgrading txindex database"),
QT_TRANSLATE_NOOP("democoin-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("democoin-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("democoin-core", "Verifying wallet(s)..."),
QT_TRANSLATE_NOOP("democoin-core", "Wallet %s resides outside wallet directory %s"),
QT_TRANSLATE_NOOP("democoin-core", "Wallet needed to be rewritten: restart %s to complete"),
QT_TRANSLATE_NOOP("democoin-core", "Warning"),
QT_TRANSLATE_NOOP("democoin-core", "Warning: unknown new rules activated (versionbit %i)"),
QT_TRANSLATE_NOOP("democoin-core", "Zapping all transactions from wallet..."),
};
