# include <iostream>
# include <string>

using namespace std;

//Base class
class vehicle {
	public: 
		string brand;
		int year_of_manufacture;
		
	void displayVehicle() {
		cout<<"Brand name: "<<brand<<endl;
		cout<<"Year of manufacture: "<<year_of_manufacture<<endl;
		
	}		
};
class car: public vehicle {
	public:
		int number_of_doors;
		int engine_capacity;
		
	void displaycar()	{
		displayVehicle();
		cout<<"Number of doors: "<<number_of_doors<<endl;
		cout<<"Engine Capacity: "<<engine_capacity<<endl;
		
	}
};
int main() {
	car p;
 
    cout<<"Enter Brand name: ";
    cin>>p.brand;
    
    cout<<"Enter Year of Manufacture: ";
    cin>>p.year_of_manufacture;
    
    cout<<"Enter Number of doors: ";
    cin>>p.number_of_doors;
    
    cout<<"Enter Engine Capacity: ";
    cin>>p.engine_capacity;
    
    cout<<"========CAR DETAILS========="<<endl;
    p.displaycar();
    
    cout<<"============================="<<endl;
    
    return 0;
}