#include<iostream>
using namespace std;
int main() {

	int *ptr = new int[3];
	for (int var = 0; var < 3; ++var) {
		cout<<"Number"<<endl;
		cin>>ptr[var];
	}
	for (int var = 0; var < 3; ++var) {
		cout<<ptr[var]<<" ";
	}

	delete[] ptr;

	return 0;
}

