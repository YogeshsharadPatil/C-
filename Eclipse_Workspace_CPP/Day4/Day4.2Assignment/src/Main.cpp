#include<iostream>
#include<string>
using namespace std;
class Date{
	int day;
	int month;
	int year;

public:
	void acceptRecord(){
		cout<<"Enter date:  ";
		cin>>day;
		cout<<"Enter month:  ";
		cin>>month;
		cout<<"Enter year:  ";
		cin>>year;
	}
	void printRecord(){
	  cout<<"Day:  "<<day<<"/"<<month<<"/"<<year<<endl;
	}
	bool isleapyear(int y){
	   bool isLeapYear = false;
	   if (y % 4 == 0) {
	      if (y % 100 == 0) {
	         if (y % 400 == 0) {
	            isLeapYear = true;
	         }else{
	        	 return false;
	         }
	      }
	      else isLeapYear = true;
	   }
	   return isLeapYear;
	}



	bool validatedate(){
		if(isleapyear(year) && (month==2 && day>29)){
			return false;
		}
		else if( day<1 || day>31 || month<0 || month>12 || year < 0){
			return false;
		}
		else{
			return true;
		}
	}

	void addDays( int ndays ){
		day = day+ndays;
		if(day>31){
			day = day-31;
			month++;
		}
		if(month>12){
			month=1;
			year++;
		}
	}


};

int main(){
	Date d1;
	d1.acceptRecord();
	d1.printRecord();
	int daysToAdd;
	int fine = d1.validatedate();
	if(fine==0){
		cerr<<"Invalid Date"<<endl;;
	}else{
	cout<<"Do you want to Add the days:  "<<endl;
	cout<<"Your Responce Please...:  Yes OR No";
	string choice;
	cin>>choice;
	if(choice == "Yes"){
		cout<<"Enter Number of days You want to add: ";
		cin>>daysToAdd;
		d1.addDays(daysToAdd);
		d1.printRecord();
	}else{
		cout<<"Have a great Day..!";
	}

	}
  return 0;

}



