#include<iostream>
#include<string>
using namespace std;
class Product{
protected:
	string name;
	int price;
public:
	Product(){
		this->name="Product Name";
		this->price=0;
	}
	virtual void acceptRecord(){

	}
	virtual void printRecord(){

	}
	virtual ~Product(){};

};
class Book:public Product{
private:
	int pagecount;
public:
	Book(){
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
class Tape:public Product{
private:
	string name;
	int price;
	int tapeTime;
public:
	Tape(){
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
	Product *ptr = nullptr;
		switch(choice){
		case 1:
			ptr=new Book();

			break;
		case 2:
			ptr = new Tape();

			break;
		}
		if(ptr!=nullptr){
			ptr->acceptRecord();
			ptr->printRecord();
			delete ptr;
		}
	}
	return 0;
}



