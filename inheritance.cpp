//C++ Illustrating inheritance 
#include <iostream>

using namespace std;


class animal {
	
	public:
		void eat(){
		cout<<"I can eat"<<endl;
		}
	public:
		void sleep(){
		cout<<"I can sleep"<<endl;
	}
		
} ;
class Dog: public animal{
	public:
		void back (){
		cout<<"I can back woof! woof!"<<endl;
}
				
};
int main () {
 Dog dog1; 
//call the attributes for base class
dog1.eat();
dog1.sleep();
//call attributes for derived class
dog1.back();

return 0;
};
