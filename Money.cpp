#include "Money.h"

Money::Money(int dollars, int cents){
	all_cents = dollars*100 + cents;
}

Money::Money(){all_cents = 0;}

/*
CODE HE GAVE US:




Money m;
auto sum_deposits = std::accumulate(deposits.begin(), deposits.end(), m);
*/