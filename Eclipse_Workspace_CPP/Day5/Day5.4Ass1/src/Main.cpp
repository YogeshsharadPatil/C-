#include<iostream>
using namespace std;
#include<cstring>
class Student{
		string name;
		int rollNumber;
		int marks;
		char grade;
public:
		Student(){
			this->name = "";
			this->rollNumber = 1;
			this->marks = 100;
			this->grade = 'A';
		}

		void setName( string name){   //if u write other than name as paramter there is no need of this pointer
		     this->name = name;
		}

		void setrollNumber(int rollnumber){ //paramter name different so no need of this pointer
				this->rollNumber=rollnumber;
			}
		void setMarks(int marks){
			this->marks = marks;
		}
		void setGrade(int grade){
				this->grade = grade ;
		}
		string getName(){
			return this->name;
		}
		int getrollNumber(){
			return this->rollNumber;
		}
		int getMarks(){
			return this->marks;
		}
		char getGrade(){
			return this->grade;
		}
		char calculateGrade();
		void acceptRecord(Student *ptr);
		void displayRecord();
};
void Student :: acceptRecord(Student *ptr){
   cout<<"Enter Your name:  "<<endl;
    string name;
    cin>>name;
    ptr->setName(name);
    cout<<"Enter Your RollNumber:  "<<endl;
       int rnm;
       cin>>rnm;
    ptr->setrollNumber(rnm);
      cout<<"Enter Your Marks:  "<<endl;
       int marks;
       cin>>marks;
      ptr->setMarks(marks);

}

char Student::calculateGrade(){
	 cout<<"Enter Your Marks"<<endl;
	 int marks ;
	cin>>marks;
      if(marks>=90 && marks<=100){
    	  return 'A';
      }
      else if(marks>=80 && marks<90){
    	  return 'B';
      }
      else if(marks>=70 && marks<80){
        	  return 'C';
          }
      else if(marks>=60 && marks<70){
        	  return 'D';
          }
      else if(marks>=35 && marks<60){
        	  return 'E';
          }
      else{
    	  cout<<"You are Failed"<<endl;
      }

}

void Student::displayRecord()
{
	cout<<"Name:  "<<this->getName()<<endl;
	cout<<"RollNumber:  "<<this->rollNumber<<endl;;
	cout<<"Marks:  "<<this->getMarks()<<endl;
	cout<<"Grade:  "<<this->getGrade()<<endl;

}
int menu_List(){

	cout<<"1.Accept Information : "<<endl;
	cout<<"2.Display Information:"<<endl;
	cout<<"3.Calculate Grade: "<<endl;
	cout<<"0.Exit : "<<endl;
	int choice;
   cout<<"Enter your choice: "<<endl;
   cin>>choice;
   return choice;
   }
int main(){
	Student s1;
	int rchoice;
     while((rchoice=::menu_List())!=0){
    	 switch(rchoice){
    	 case 1:
    		 s1.acceptRecord(&s1);
    		 break;
    	 case 2:
    		 s1.displayRecord();
    		 break;
    	 case 3:
    		 cout<<s1.calculateGrade()<<endl;
    		 break;
    	 default:
    		 clog<<"Have a great day!";
    	 }
     }

  return 0;
  }


