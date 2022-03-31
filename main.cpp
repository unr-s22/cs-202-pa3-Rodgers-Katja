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

	cout << "==================================" << endl;
	cout << "Proving relational operations work" << endl;
	cout << "==================================" << endl << endl;

	if(d1 < d2){cout << "d1(" << d1 << ") is less than d2(" << d2 << ")." << endl;}
	if(d3 > d2){cout << "d3(" << d3 << ") is greater than d2(" << d2 << ")." << endl;}
	if(d1 <= d2){cout << "d1(" << d3 << ") is less than or equal to d2(" << d2 << ")." << endl;}
	if(d2 >= d2){cout << "d2(" << d2 << ") is greater than or equal to d2(" << d2 << ")." << endl;}
	if(d1 != d3){cout << "d1(" << d1 << ") does not equal to d3(" << d3 << ")." << endl;}
	if(d2 == d2){cout << "d2(" << d2 << ") is equal to d2(" << d2 << ")." << endl << endl;}

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