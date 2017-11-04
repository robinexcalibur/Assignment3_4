/*
 * Reverse.cpp
 *
 *  Created on: Nov 1, 2017
 *      Author: Robin
 */


#include <iostream>
using namespace std;

void reverseDigit(int i) {
	if (i < 10) {
		cout << i;
	} else {
		cout << i%10;
		reverseDigit(i/10);
	}
}

int main () {
	int holder;
	cout << "Please enter a number: ";
	cin >> holder;
	reverseDigit(holder);
}




