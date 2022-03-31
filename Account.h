#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <numeric>
#include "Money.h"

using namespace std;

class Account{

	vector<Money> withdrawals;
	vector<Money> deposits;
	vector<bool> ismoney;
	
	Money total, sum_deposits, sum_withdrawals, M;
	//stringstream ss;
	
public:	
	Account(Money m);
	void makeDeposit (Money m);
	void makeWithdrawals (Money m);
	void changeTotal(Money m);

	friend std::ostream &operator<<(std::ostream &ss, const Account & account){		
		if(account.ismoney.size()<=0){
		
			ss << "Account Details" << endl;
			ss << "--------------------------" << endl;
			ss << "Current Balance: " << endl;
			ss << account.total << endl;
		}
	
		else if(account.ismoney.size()>0){
			ss << "Account Details" << endl;
			ss << "--------------------------" << endl;
			ss << "Current Balance: " << endl;
			ss << account.sum_deposits << " + " << account.sum_withdrawals << " + " << account.total << " = ";
			ss << (account.sum_deposits + account.sum_withdrawals + account.total) << endl;
			ss << "--------------------------" << endl;
			ss << "Number of Deposits: ";
			ss << account.deposits.size()-1 << endl;
			ss << "--------------------" << endl;

			for (int i=1; i < account.deposits.size(); i++){
				ss << "(" << (i) <<") "<< account.deposits[i] << endl;	
			}

			ss << "--------------------------" << endl;
			ss << "Number of Withdrawals: ";
			ss << account.withdrawals.size() << endl;
			ss << "--------------------------" << endl;

			for (int j=0; j < account.withdrawals.size(); j++){
				ss << "(" << (j+1) <<") "<< account.withdrawals[j] << endl;
			} 
		}

		return ss;
	}

	
};






#endif //Account
