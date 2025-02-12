#include <bits/exception.h>
#include <iostream>
#include <string>


using namespace std;
class ArithmeticException {
private:
	const string message;
	const string functionname;
	const string filename;
	int linenumber;

public:
	ArithmeticException(string message, string functionname, string filename,
			int linenumber) :
			message(message), functionname(functionname), filename(filename), linenumber(
					linenumber) {
	}

	string getmessage(void) const;
	string getfunctionname();
	string getfilename();
	int getlinenumber();


};
string ArithmeticException::getmessage(void) const {
	return this->message;
}
string ArithmeticException::getfunctionname() {
	return this->functionname;
}
string ArithmeticException::getfilename() {
	return this->functionname;
}
int ArithmeticException::getlinenumber() {
	return this->linenumber;
}
void accept(int &number) {
	cout << "Number " << endl;
	cin >> number;
}
int calculate(int num1, int num2) {
	if (num2 == 0) {
		throw ArithmeticException("DividebyZeroException", __FUNCTION__,
				__FILE__, __LINE__);
	}
	return num1 / num2;

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
