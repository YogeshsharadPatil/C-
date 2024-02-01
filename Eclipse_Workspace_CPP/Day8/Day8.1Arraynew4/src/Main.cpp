#include<iostream>
using namespace std;
class Array {
private:
	int size;
	int *arr;
public:
	Array() {
		this->size = 0;
		this->arr = nullptr;
	}
	Array(int size) {
		this->size = size;
		this->arr = new int[this->size];
	}
	void acceptRecord() {
		for (int i = 0; i < this->size; ++i) {
			cout << "Number" << endl;
			cin >> this->arr[i];
		}
	}
	void printRecord() {
		for (int i = 0; i < this->size; ++i) {
			cout << this->arr[i] << " ";
		}
	}
	~Array() {
		if (this->arr != nullptr)
			delete[] this->arr;
		this->arr = nullptr;
	}
};
int main() {

	Array a1(2);
	a1.acceptRecord();
	a1.printRecord();

	return 0;
}
