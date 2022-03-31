#include <iostream>
#include "Account.h"
#include "Money.h"

int main(){
//	===========
//	Actual Main
//	===========

	Money money(300, 23);
	Account account(money);
	//D means deposit and W means withdrawal
	Money d1(200, 0), d2(300, 24), d3(501, 22), w1(300, 10), w2(201, 34);

	cout << account << endl;

	account.makeDeposit(d1);
	account.makeDeposit(d2);
	account.makeDeposit(d3);

	cout << account << endl;
	//Should display $1301.69 as current balance

	account.makeWithdrawals(w1);
	account.makeWithdrawals(w2);

	cout << account << endl;
	//Should display $800.25 as current balance

	return 0;
}

/*
	================
	Old testing code
	================
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

	//test for me

	Account account(m1);
	Money d1(200, 0), d2(300, 24);

	account.makeDeposit(d1);
	account.makeDeposit(d2);
	account.printDetails(m1);
*/