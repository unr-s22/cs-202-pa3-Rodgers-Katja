#include <iostream>
#include "Account.h"
#include "Money.h"

int main(){
	cout << "hello world!" << endl;
	Money m(100, 10);
	cout << m << endl;

	Money m1(120, 10);

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

	return 0;
}