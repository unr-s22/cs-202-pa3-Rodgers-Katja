#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include "Money.h"

using namespace std;

class Account{
	vector<Money> withdrawals;
	vector<Money> deposits;
	vector<bool> ismoney;

	stringstream ss;
	
public:
	Account(Money m);
	void makeDeposit (Money m);
	void makeWithdrawals (Money m);

	void printDetails(Money m);

};

#endif //Account
