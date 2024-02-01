#include<iostream>
using namespace std;

int main8( void ){
	int num1 = 10;

	int &num2 = num1;   // Refernce is automatically dereferenced constant pointer variable
	//internally happens like below
	//int *const num2 = &num1;

	cout << num2 <<endl;
	//internally happens like below
	//cout << *num2 <<endl;
	return 0;
}
int main7( void ){
	int num1 = 10;
	int &num2 = num1;
	int &num3 = num2;

	++ num1;	//11
	++ num2;	//12
	++ num3;	//13

	cout<<"Num1	:	"<< num1<<endl;
	cout<<"Num2	:	"<< num2<<endl;
	cout<<"Num3	:	"<< num3<<endl;
	return 0;
}
int main6(){

	 int n1 = 10;
	 int n2 = 20;
	 int &n3 = n1;  // u can initialise Refernce variable to only one referant if u truy to it for second time it gets intitalised //changeds happen to all
	  n3=n2;        // this is assignment

	 ++n1; //11
	 ++n2; //12
	// ++n3; //error: increment of read-only reference 'n3'
	 cout<<"n1: "<<n1<<endl; //13
	 cout<<"n2: "<<n2<<endl;  //13
	 cout<<"n3: "<<n3<<endl;  //13
	return 0;
}
int main5(){

	 int n1 = 10;
	 int &n2 = n1;         // by n2 we can read and modify
	 const int &n3 = n2;    // we only read not modiffy

	 ++n1; //11
	 ++n2; //12
	// ++n3; //error: increment of read-only reference 'n3'
	 cout<<"n1: "<<n1<<endl; //13
	 cout<<"n2: "<<n2<<endl;  //13
	 cout<<"n3: "<<n3<<endl;  //13
	return 0;
}
int main4(){

	 int n1 = 10;
	 int &n2 = n1;
	 int &n3 = n2;

	 ++n1; //11
	 ++n2; //12
	 ++n3;  //13
	 cout<<"n1: "<<n1<<endl; //13
	 cout<<"n2: "<<n2<<endl;  //13
	 cout<<"n3: "<<n3<<endl;  //13
	return 0;
}
int main3(){

	 int n1 = 10;
	 int &n2 = n1;
	 cout<<"n1: "<<n1<<endl;  // n1 is called referent variable
	 cout<<"n2: "<<n2<<endl;   //n2 is called Reference variable  // n2 is reference variable of n1

	 ++n1;
	 cout<<"n1 is increamented"<<endl; //11
	 cout<<"n1: "<<n1<<endl;           //11
	  cout<<"n2: "<<n2<<endl;

	  ++n2;
	  cout<<"n2 is increamented"<<endl;
	  cout<<"n1: "<<n1<<endl;         //12
	   cout<<"n2: "<<n2<<endl;         //12
	 return 0;

}
int main2(){

	 int n1 = 10;
	 int *n2 = &n1;
	 cout<<"n1: "<<n1<<endl;
	 cout<<"n2: "<<n2<<endl;
	return 0;
}
int main1(){

	 int n1 = 10;
	 int n2 = 20;
	 cout<<"n1: "<<n1<<endl;
	 cout<<"n2: "<<n2<<endl;
	return 0;
}

// how to check of reference variable
class Test{
private:
	char &ch;
public:
	Test( char &ch2 ) : ch( ch2 ){

	}
};
int main( void ){
	char ch1 = 'A';
	Test t( ch1 );
	size_t size = sizeof( t );
	cout << "Size	:	" << size << endl;
	return 0;
}




