#include <bits/exception.h>
#include <iostream>
#include <string>
#include "../include/ArithmeticException.h"
#include "../include/calculator.h"
using namespace std;

void accept(int &number) {
	cout << "Number " << endl;
	cin >> number;
}

int main() {
	try {
		int n1;
		accept(n1);
		int n2;
		accept(n2);
		int result;
		result = calculate(n1, n2);
		cout << result << endl;
	} catch (ArithmeticException &ex) {
		cout << ex.getmessage();
	} catch (exception &e) {
		cout << e.what() << '\n';
	}


	return 0;
}
