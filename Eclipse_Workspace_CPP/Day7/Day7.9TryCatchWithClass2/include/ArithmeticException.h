
#ifndef INCLUDE_ARITHMETICEXCEPTION_H_
#define INCLUDE_ARITHMETICEXCEPTION_H_
#include<string>
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



#endif /* INCLUDE_ARITHMETICEXCEPTION_H_ */
