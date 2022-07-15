#include<iostream>
using namespace std;

class Super_A {
	public:
		int x;
		void getX() {
			cout<<"Enter the value of X : ";
			cin>> x;
		}	
};

class Super_B {
	public:
		int y;
		void getY() {
			cout<<"Enter the value of Y : ";
			cin>> y;
		}	
};

// Inheriting from Class Super_A and Super_B
class Derived_C : public Super_A, public Super_B {
	public:
		int z;
		void showSum() {
			cout<<"The sum of "<< x <<" & "<< y <<" is : "<< x+y;
		}	
};

int main() {
	Derived_C obj;
	obj.getX();
	obj.getY();
	obj.showSum();
	return 0;
}
