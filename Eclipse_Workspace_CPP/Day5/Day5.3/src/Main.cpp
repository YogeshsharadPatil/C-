#include<iostream>
using namespace std;

int sum(int num1,int num2){
   return num1 + num2;
}
int sub(int num1,int num2){
       return num1 - num2;
}
int multiplication(int num1,int num2){
	return num1 * num2;
}
int Division(int num1,int num2){
	 return num1/num2;
}
int menu_List(){

	cout<<"1.Summation : "<<endl;
	cout<<"2.Subtraction:"<<endl;
	cout<<"3.Multiplication.: "<<endl;
	cout<<"4.Division : "<<endl;
	cout<<"0.Exit : "<<endl;
	int choice;
   cout<<"Enter your choice: "<<endl;
   cin>>choice;
   return choice;
   }
int main(){
  int n1;
  int n2;
  cout<<"Enter number1: "<<endl;
  cin>>n1;
  cout<<"Enter Number2: "<<endl;
  cin>>n2;

int rchoice;
  while( (rchoice=::menu_List() )!=0){
	  int rs;
  switch(rchoice){
  case 1:
	   rs = sum(n1,n2);
	  break;
  case 2:
 	   rs = sub(n1,n2);
 	  break;
  case 3:
 	   rs = multiplication(n1,n2);
 	  break;
  case 4:
 	   rs = Division(n1,n2);
 	  break;

  }
cout<<rs<<endl;
  }
  clog<<"Thank You";
}
