///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 

#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	 virtual void name(){
		cout << "Animal" << endl;
	}
	virtual void does(){
		cout << "Nothing" << endl;
	}

};

class Bird : public Animal
{
public:
	void name(){
		cout << "Bird" << endl;
	}

		void does(){
			cout << "Sing"<<endl;
		}
};
class Dog : public Animal
{
public:
	void name(){
		cout << "Dog" << endl;
	}
	void does(){
		cout << "Buck" << endl;
	}

};
int main(){

	Animal *myA;
	myA = &Animal();
	myA->does();
	myA->name();
	myA = &Bird();
	myA->does();
	myA->name();
	myA = &Dog();
    myA->does();
	myA->name();

	system("PAUSE");
}