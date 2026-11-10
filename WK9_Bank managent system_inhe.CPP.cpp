#include <iostream>
#include <string>

using namespace std;

//Base Class
class AccountHolder {
	protected:
		string name;
		//constructor to initialize name 
	public:
		AccountHolder(string n){
			name = n;
		}
		//funtion to set name
	void setName(string n){
		name = n;
	} 
	//funtion to get name 
	string getName(){
		return name;
	} 		
};
//Derived Class
class BankAccount:public AccountHolder{
	private:
		int accountNumber;
		double balance ;
//initializing name account name and baance 
public:
	BankAccount(string n,int AccNo,double bal):
	AccountHolder(n){
		accountNumber = AccNo;
		balance = bal;
		}	
	int getAccountNumber(){
		return accountNumber;
	}	
	double getbalance(){
		return balance;
	}	
		
};
//Derived class
class SavingAccount:public BankAccount{
	private:
		double interestRate;
	
	public:		
        SavingAccount(double rate,string n,int AccNo,double bal):BankAccount(n ,AccNo,bal){
	interestRate = rate;
}
double getinterestRate() {
	return interestRate;
}

};

int main(){
	SavingAccount Acc1(12,"john",1234,10000);
	
	cout<<"Customer name:"<<Acc1.getName()<<endl;
	cout<<"Account Number:"<<Acc1.getAccountNumber()<<endl;
	cout<<"Account Balance:"<<Acc1.getbalance()<<endl;
	cout<<"Interest Rate:"<<Acc1.getinterestRate()<<"%"<<endl;
	
	
	return 0;
};		
