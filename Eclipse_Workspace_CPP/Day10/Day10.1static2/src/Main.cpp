#include<iostream>
using namespace std;
// We can declare static data member as a constatnt but
//We can not declare static member function as constant
//cause:- static member function are called on object
// where as static member function are designed fopr classes
class Test{
private:
	double static const num1;
public:
     double static pow(int base,int index){
    	 double result =1;
    	 for (int var = 1; var <= index; ++var) {
    		 result =  base * result;
		}
    	 return result;
     }

};
int main(){
double result = Test::pow(2, 3);
cout<<result;
	return  0;
}

