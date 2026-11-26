#include <iostream>
#include <string>

using namespace std;

//Base class
class person {
	public:
		string name;
		int age;
		 
	void displayPerson()	{
		cout<<"Enter name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
	
	}
		 
};
//Derived class
class student : public person {
	public:
		int admission_number;
		string student_class;
	
	void displayStudent() {
		displayPerson();
		cout<<"ADM NO.: "<<admission_number<<endl;
		cout<<"Student Class: "<<student_class<<endl;
		
	}	
		
};
int main(){
	student s;
    
    cout<<"Enter name: ";
    cin>>s.name;
    
    cout<<"Enter Age: ";
    cin>>s.age;
    
    cout<<"Enter Admission Number: ";
    cin>>s.admission_number;
    
    cout<<"Enter Class: ";
    cin>>s.student_class;
    
    cout<<"\n=====STUDENT DETAILS=====\n";
    s.displayStudent();
    
    cout<<"========================="<<endl;
	return 0;
}