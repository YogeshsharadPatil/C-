#include<iostream>
using namespace std;
class Product {
protected:
	string name;
	int price;
public:
	Product() {
		this->name = "ProductName";
		this->price = 1;
	}
	void acceptRecord(){
			cout<<"product accept"<<endl;
	}
	void printRecord(){
		cout<<"product printrecord"<<endl;
			}
	}
	 virtual~Product(){

	}
};
class Book: public Product {
private:
	int pagescount;
public:
	Book() {
		this->name = "BookName";
		this->price = 1;
		this->pagescount = 0;
	}

	void acceptRecord() {
		cout << "Enter Book name: ";
		cin >> this->name;
		cout << "Price: ";
		cin >> this->price;
		cout << "Page count: ";
		cin >> this->pagescount;
	}
	void printRecord() {
		cout << "Book Name" << this->name << endl;
		cout << "Book price " << this->price << endl;
		cout << "Book pagecount" << this->pagescount << endl;
	}
};
class Tape: public Product {
private:
	int playTime;

public:
	Tape() {
		this->name = "TapeName";
		this->price = 1;
		this->playTime = 0;
	}

	void acceptRecord() {
		cout << "Enter Tape name: ";
		cin >> this->name;
		cout << "Price: ";
		cin >> this->price;
		cout << "Play Time : ";
		cin >> this->playTime;
	}
	void printRecord() {
		cout << "Tape Name" << this->name << endl;
		cout << " price " << this->price << endl;
		cout << "PlayTime" << this->playTime << endl;
	}

};
int menulist() {
	cout << "0.Exit" << endl;
	cout << "1.Book" << endl;
	cout << "2.Tape" << endl;
	cout << "Enter choice" << endl;
	int choice;
	cin >> choice;
	return choice;
}
int main() {
	int choice;
	while ((choice = ::menulist()) != 0) {
		Product *ptr = nullptr;
		switch (choice) {
		case 1:
			ptr = new Book();
			ptr->acceptRecord();
			ptr->printRecord();
			delete ptr;
			break;

		case 2:
			ptr = new Tape();
			ptr->acceptRecord();
			ptr->printRecord();
			delete ptr;
			break;
		}
	}

	return 0;
}
