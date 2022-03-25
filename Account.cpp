#include "Account.h"
#include "Money.h"

Account::Account(Money m){
	deposits.push_back(m);
}
