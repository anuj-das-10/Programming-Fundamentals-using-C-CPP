#include<iostream>
using namespace std;

class A {
	public:
		int x;
		void getData_A() {
			cout<<"Enter the value of X = ";
			cin>> x;
		}
};

//	Class-C derived from Class-A
class B : public A {
	public:
		int y;
		void getData_B() {
			cout<<"Enter the value of Y = ";
			cin>> y;
		}
};

//	Class-C derived from Class-B
class C : public B {
	public:
		int z;
		void getData_C() {
			cout<<"Enter the value of Z = ";
			cin>> z;
		}
		void showProduct() {
			cout<<"\nThe product of X, Y & Z is : "<< x * y * z;
		}
};

int main() {
	C obj;
	obj.getData_A();
	obj.getData_B();
	obj.getData_C();
	obj.showProduct();
	return 0;
}
