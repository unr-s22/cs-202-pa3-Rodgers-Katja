#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <vector>
#include "Money.h"

using namespace std;

class Account{
	vector<Money> withdrawals;
	vector<Money> deposits;
public:
	Account(Money m);
};

#endif //Account