#include<iostream>
using namespace std;

class Array{
private:
	int size;
	int *arr;
public:
	Array(){
		this->size = 0;
		this->arr = nullptr;
	}
	Array(int size){
		this->size = size;
		this->arr = new int[this->size];
	}
	//other = &a1
	//Array *this  = &a2
	Array(Array &other){
		this->size = other.size;
		this->arr = new int[this->size];
		for (int i = 0; i < this->size; ++i) {
			this->arr[i] = other.arr[i] + 1 ;
		}
	}
	void acceptRecord(){
		for (int i = 0; i < this->size; ++i) {
			cout<<"Number: ";
			cin>>this->arr[i];
		}
	}
	void printRecord(){
		for (int i = 0; i < this->size; ++i) {
			cout<<this->arr[i]<<" ";
		}
	}
	~Array(){
		if (this->arr != nullptr) {
			delete[] this->arr;
				this->arr = nullptr;
		}

	}
};
int main(){

	Array a1(3);
	a1.acceptRecord();
	a1.printRecord();
	cout<<endl;
	Array a2(a1);
	a2.printRecord();
}
