#include<iostream>
using namespace std;
//Base class
class Super_A {
	public:
		int x, y;
		void getData() {
			cout<< "Enter the value of X : ";
			cin>> x;
			cout<< "Enter the value of Y : ";
			cin>> y;
		}	
};

// class - Derived_B is derived from the base class Super_A
class Derived_B : public Super_A {
	public:
		void sum() {
			cout<<"\nThe sum of "<< x <<" and "<< y <<" is : "<< x + y << endl;
		}
};

// class - Derived_B is also derived from base class Super_A
class Derived_C : public Super_A {
	public:
		void product() {
			cout<<"\nThe product of "<< x <<" and "<< y <<" is : "<< x * y << endl;
		}
};

int main() {
	Derived_B obj1; 		// Object/Instance of class Derived_B
	Derived_C obj2; 		// Object/Instance of class Derived_C
	
	cout<< "Function() called using object of class Derived_B: "<< endl;
	obj1.getData();
	obj1.sum();
	
	cout<< "\n\nFunction() called using object of class Derived_C: "<< endl;
	obj2.getData();
	obj2.product();
	
	return 0;
}
