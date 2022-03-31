#include "Account.h"
#include "Money.h"

Account::Account(Money m){
	deposits.push_back(m);
	total = m;
}

void Account::makeDeposit(Money m){
	deposits.push_back(m);
	ischanged = true;
}

void Account::makeWithdrawals(Money m){
	withdrawals.push_back(m);
	ischanged = true;
}
void Account::update(){
	auto sum_deposits = accumulate(deposits.begin(), deposits.end(), M);
	auto sum_withdrawals = accumulate(withdrawals.begin(), withdrawals.end(), M);
	//Warns if account is below or at zero and nothing if it isn't
	if(sum_deposits <= sum_withdrawals){
		cout << "*************" << endl;
		cout << "***WARNING***" << endl;
		cout << "*************" << endl << endl;
		cout << "This account is at or past zero." << endl << endl;
	}
	newtotal = sum_deposits - sum_withdrawals;
}