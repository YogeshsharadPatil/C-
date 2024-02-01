#include<iostream>
using namespace std;
int main() {

	int **ptr = new int*[2];
	for (int var = 0; var < 2; ++var) {
		ptr[var] = new int[3];
	}
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << "Number" << " " << endl;
			cin >> ptr[i][j];
		}
	}

	for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < 3; ++j) {
				cout<< ptr[i][j]<<" ";
			}
			cout<<endl;
		}

	for (int d = 0; d < 2; ++d) {
		delete[] ptr[d];
	}
	delete[] ptr;
	return 0;
}

