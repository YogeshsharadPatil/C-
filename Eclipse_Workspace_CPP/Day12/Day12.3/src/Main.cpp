#include<iostream>
using namespace std;
class Book{
private:
	string name;
	int price;
	int pagecount;
public:
	Book(){
		this->name = "";
		this->price = 0;
		this->pagecount;
	}
	void acceptRecord(){
		cout<<"Enter name: ";
		cin>>this->name;
		cout<<"Enter price: ";
		cin>>this->price;
		cout<<"No. of Pages: ";
		cin>>this->pagecount;
	}
	void printRecord(){
		cout<<"Name: "<<this->name<<endl;
		cout<<"price: "<<this->price<<endl;
		cout<<"Pagecount: "<<this->pagecount<<endl;
	}
};
class Tape{
private:
	string name;
	int price;
	int tapeTime;
public:
	Tape(){
		this->name = "";
		this->price = 0;
		this->tapeTime;
	}
	void acceptRecord(){
		cout<<"Enter name: ";
		cin>>this->name;
		cout<<"Enter price: ";
		cin>>this->price;
		cout<<"No. of Pages: ";
		cin>>this->tapeTime;
	}
	void printRecord(){
		cout<<"Name: "<<this->name<<endl;
		cout<<"price: "<<this->price<<endl;
		cout<<"tapeTime: "<<this->tapeTime<<endl;
	}
};
int menulist(){
	cout<<"0.Exit"<<endl;
	cout<<"1.Book"<<endl;
	cout<<"2.Tape"<<endl;
	int choice;
	cout<<"Enter Choice: ";
	cin>>choice;
	return choice;
}
int main(){
	int choice;
	while((choice=::menulist())!=0){
		Book b1;
		Tape t1;
		switch(choice){
		case 1:
			b1.acceptRecord();
			b1.printRecord();
			break;
		case 2:
			t1.acceptRecord();
			t1.printRecord();
			break;
		}
	}
	return 0;
}



