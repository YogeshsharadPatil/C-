#include <iostream>
using namespace std;

const int month_days[]={31,28,31,30,31,30,31,31,30,31,30,31};

class Date {
  private:
	int day;
    int month;
    int year;

  public:

  void acceptRecord(){
	  cout << "Enter day	:	 ";
	  cin >> day;
	  cout << "Enter month	:	";
	  cin >> month;
	  cout << "Enter year	:	";
	  cin >> year;
  }

  bool isLeapYear(int year)
  {
  	if (year%400 == 0)
  		return true;
  	if (year%100 ==0)
  		return false;
  	if(year%4 == 0)
  		return true;
  	return false;
  }


  void validate(){
	  if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
	  {
		  cout<< "INVALID DAY";
		    exit(0);
	  }
	  if ((month == 1 || month == 3 || month == 5 || month == 7 || month ==8 || month==10 || month ==12) && day > 31)
	 	  {
	 		  cout<< "INVALID DAY";
	 		    exit(0);
	 	  }

  	  if(month < 1 || month > 12)
  		{
  			cout<< "INVALID MONTH";
  			exit(0);
  		}

  		bool leapYear= isLeapYear(year);

  		if (leapYear && month ==2 && day>29)
  		{
  			cout<< "INVALID DAY";
  			exit(0);
  		}
  		else if(day<1 || day>month_days[month-1])
  		{
  			cout<< "INVALID DAY";
  			exit(0);
  		}
  	}


  void addDays(int count)
  	{
  		bool leapYear= isLeapYear(year);
  		day+=count;
  		while(day>month_days[month-1])
  		{
  			if(leapYear && month==2)
  				day-=29;
  			else
  				day-=month_days[month-1];
  			month++;
  			if(month>12)
  			{
  				month%=12;
  				year++;
  				leapYear=isLeapYear(year);
  			}
  		}
  		cout<<"Add:"<<count<<" "<<"days"<<endl;
  	}

  void printRecord(){

	  cout << "Date "<<day << "/" <<month<< "/"<<year <<endl;
  }


};

int main() {
   Date d;

   d.acceptRecord();

   d.validate();

   d.addDays(20);

  d.printRecord();

  return 0;
}
