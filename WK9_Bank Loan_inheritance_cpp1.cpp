#include <iostream>
#include <string>

using namespace std;

class customer{
	protected:
		string name;
	
	public:
		//set the name 
		void setName(string n){
			name = n;
		}
		//get the name 
		string getName(){
			return name;
		}
		
};
class loan: public customer{
	private:
		double loanAmount,interestRate;
	//contructor  that initializes name,loan,interestRate
	public:
		loan(string n,double Amount,double Rate){
		setName (n);
		loanAmount = Amount;
		interestRate = Rate;
	
					
	}
	public:
		//return loan amount
		double getloanAmount(){
			return loanAmount;
		}	
		//return Interest Rate
		double getinterestRate(){
			return interestRate;
		}
					
};
class HomeLoan : public loan{
	private:
	double propertyValue;
	public:
	HomeLoan(string n,double Amount,double Rate,double Value): loan(n,Amount,Rate)
	{
		propertyValue = Value;
	}
	
	public:
		double getpropertyValue(){
		return propertyValue;}	
};
int main (){
	HomeLoan myHomeLoan("Clinton",10000,0.2,20000);
	
	cout << "--- Bank Loan Management System ---" << endl;
    cout << "Customer Name: " << myHomeLoan.getName() << endl;
    cout << "Loan Amount: ksh." << myHomeLoan.getloanAmount() << endl;
    cout << "Interest Rate: " << myHomeLoan.getinterestRate() << "%" << endl;
    cout << "Property Value: ksh." << myHomeLoan.getpropertyValue() << endl;

    return 0;
};
