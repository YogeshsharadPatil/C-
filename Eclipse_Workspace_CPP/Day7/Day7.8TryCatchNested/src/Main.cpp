#include <bits/exception.h>
#include <iostream>
#include <string>

using namespace std;
int main(){
try {
	string ex;
	throw ex;
	try {

	} catch (string &e) {
		cout<<"Inside Inner class"<<endl;
		throw ex;
	}
} catch (string &e) {
	cout<<"Nested outer catch block"<<endl;
}
catch(exception e){
	e.what();
}
return 0;
}
