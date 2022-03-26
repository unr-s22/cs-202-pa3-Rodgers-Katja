#include <iostream>
#include "Account.h"
#include "Money.h"

int main(){
	cout << "hello world!" << endl;
	Money m(100, 10);
	cout << m << endl;

	Money m1(120, 10);
	//
	//Tests
	if(m < m1){
		cout << "m < m1" << endl;
	}
	if(m > m1){
		cout << "m > m1" << endl;
	}
	if(m <= m1){
		cout << "m <= m1" << endl;
	}
	if(m >= m1){
		cout << "m >= m1" << endl;
	}
	if(m != m1){
		cout << "m != m1" << endl;
	}
	if(m == m1){
		cout << "m == m1" << endl;
	}

	cout << (m + m1) << endl;
	cout << (m - m1) << endl;

	/*
	===========
	Actual Main
	===========
	Money money(300, 23);
	Account account(money);
	//D means deposit, W means withdrawl, C means check
	Money d1(200, 0), d2(300, 24), d3(501, 22), w1(300, 10), w2(201, 34), c1(1301, 69), c2(800, 25);

	cout << account << endl;
	//numbers will probably change when I see account class
	account.makeDeposit(d1);
	account.makeDeposit(d2);
	account.makeDeposit(d3);

	cout << account << endl;

	if(account.Money == c1){
		cout << ***Check 1 was successful*** << endl;
	} else {
		cout << ***Check 1 failed*** << endl;
	}

	account.makeWithdrawals(w1);
	account.makeWithdrawals(w2);

	cout << account << endl;

	if(account.Money == c2){
		cout << ***Check 2 was successful*** << endl;
	} else {
		cout << ***Check 2 failed*** << endl;
	}
	*/
	
	return 0;
}