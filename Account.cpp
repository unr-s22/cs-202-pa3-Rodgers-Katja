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

void Account::printDetails(Money m){
	
	ss << "Account Details" << endl;
	ss << "--------------------------" << endl;
	ss << "Current Balance: " << endl;
	ss << m << endl;

if(ismoney.size()>0){	
	ss << "--------------------------" << endl;
	ss << "Number of Deposits: ";
	ss << deposits.size()-1 << endl;
	ss << "--------------------" << endl;
	for (int i=1; i < deposits.size(); i++){
		ss << "(" << (i) <<") "<< deposits[i] << endl;
		
	}
	ss << "--------------------------" << endl;
	ss << "Number of Withdrawals: ";
	ss << withdrawals.size() << endl;
	ss << "--------------------------" << endl;
	for (int j=0; j < withdrawals.size(); j++){
		ss << "(" << (j+1) <<") "<< withdrawals[j] << endl;
	} 
}
	cout << ss.str() << endl;
}


