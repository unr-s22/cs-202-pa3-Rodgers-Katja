#include "Money.h"

Money::Money(int dollars, int cents){
	all_cents = dollars*100 + cents;
}

Money::Money(){all_cents = 0;}