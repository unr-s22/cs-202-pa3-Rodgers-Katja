#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include <iomanip>

using namespace std;

class Money{
public:
	Money();
	Money(int dollars, int cents);

	int all_cents;

	friend std::ostream &operator<<(std::ostream &os, const Money & money){
		os << "$" << fixed << setprecision(2) << money.all_cents * 0.01;
		return os;
	}

	bool operator<(const Money &rhs) const {
		return all_cents < rhs.all_cents;
	}
	bool operator>(const Money &rhs) const {
		return all_cents > rhs.all_cents;
	}
	bool operator>=(const Money &rhs) const {
		return all_cents >= rhs.all_cents;
	}
	bool operator<=(const Money &rhs) const {
		return all_cents <= rhs.all_cents;
	}
	bool operator!=(const Money &rhs) const {
		return all_cents != rhs.all_cents;
	}
	bool operator==(const Money &rhs) const {
		return all_cents == rhs.all_cents;
	}
	Money operator+(const Money &rhs) const {
		int t = all_cents + rhs.all_cents;
		Money m(t/100, t%100);
		return m;
	}
	Money operator-(const Money &rhs) const {
		int t = all_cents - rhs.all_cents;
		Money m(t/100, t%100);
		return m;
	}
};

#endif //Money