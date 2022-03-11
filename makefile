pa3: Money.o Account.o main.cpp
	g++ -std=c++11 -o pa3 Money.o Account.o main.cpp

Money.o: Money.cpp Money.h
	g++ -c -std=c++11 Money.cpp

Account.o: Account.cpp Account.h
	g++ -c -std=c++11 Account.cpp

clean:
	rm *.o pa3