#include<iostream>
#include<iomanip>
int main( void ){
	using namespace std;
	int num1;
	cout << "Num1	:	";
	cin >> num1;
	clog << "Numerator is accepted" <<endl;

	int num2;
	cout << "Num1	:	";
	cin >> num2;
	clog << "Denominator is accepted" <<endl;

	if( num2 == 0 ){
		cerr << "Value of denominator is 0" <<endl;
		clog << "Can not calculate Result because value of denominator is 0." <<endl;
	}else{
		int result = num1 / num2;
		clog << "Result is calculated" <<endl;
		cout<< "Result	:	"<< result << endl;
		clog << "Result is printed" <<endl;
	}
	return 0;
}

int main6( void ){
	using namespace std;

	int num1;
	cout << "Num1	:	";
	cin >> num1;

	int num2;
	cout << "Num2	:	";
	cin >> num2;

	cout << "Num1	:	" << num1 << endl;
	cout << "Num2	:	" << num2 << endl;


	return 0;
}
int main5( void ){
	int num1, num2;

	using namespace std;
	cin >> num1 >> num2;
	cout << num1 << num2 << endl;

	return 0;
}
int main4( void ){
	int number;

	/* std::cout << "Number	:	";
	std::cin >> number;
	std::cout << "Number	:	" << number << std::endl; */


	using namespace std;
	cout << "Number	:	";
	cin >> number;
	cout << "Number	:	" << number << endl;


	return 0;
}
int main3( void ){
	int num1 = 10;
	int num2 = 20;
	using namespace std;
	//cout <<  num1 << num2 << endl;

	/* cout <<  num1 << endl;
	cout << num2 << endl; */

	cout <<  "Num1	:	" << num1 << endl;
	cout << "Num2	:	" << num2 << endl;

	//cout << num1 << setw(5)<< num2 << endl;
	return 0;
}
int main2( void ){
	int number = 10;
	//printf("%d", number);
	//std::cout <<  number << std::endl;

	using namespace std;
	cout <<  number << endl;
	return 0;
}
int main1( void ){
	//std::cout << "Hello World" << std::endl;

	using namespace std;
	cout << "Hello World" << endl;
	return 0;
}
