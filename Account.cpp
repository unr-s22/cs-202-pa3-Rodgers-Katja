#include "Account.h"
#include "Money.h"

Account::Account(Money m){
	deposits.push_back(m);
}

void Account::makeDeposit(Money m){
	deposits.push_back(m);
	ismoney.push_back(true);
	
}

void Account::makeWithdrawals(Money m){
	withdrawals.push_back(m);
	ismoney.push_back(true);
}