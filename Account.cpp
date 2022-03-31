#include "Account.h"
#include "Money.h"

Account::Account(Money m){
	deposits.push_back(m);
	total = m;
}

void Account::makeDeposit(Money m){
	deposits.push_back(m);
	ismoney.push_back(true);
	auto sum_deposits = accumulate(deposits.begin(), deposits.end(), M);
	cout << "sum_deposits = " << sum_deposits << " M: " << M << endl;
}

void Account::makeWithdrawals(Money m){
	withdrawals.push_back(m);
	ismoney.push_back(true);
	auto sum_withdrawals = accumulate(withdrawals.begin(), withdrawals.end(), M, minus<Money>());
	cout << "sum_withdrawals = " << sum_withdrawals << " M: " << M << endl;
}


