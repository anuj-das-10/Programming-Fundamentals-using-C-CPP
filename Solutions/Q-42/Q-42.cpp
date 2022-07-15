#include<iostream>
using namespace std;

class Base {
public:
	virtual void print() {
		cout << "virtual print() of Base class"<< endl;
	}

	void show() {
		cout << "show() of Base class"<< endl;
	}
};

class Derived : public Base {
public:
	void print() {
		cout << "print() of Derived class"<< endl;
	}

	void show() {
		cout << "show() of Derived class"<< endl;
	}
};

int main() {
	Base *bptr;
	Derived d;
	bptr = &d;

// Virtual function, binded at runtime
	bptr->print();

// Non-virtual function, binded at compile time
	bptr->show();
	
	return 0;
}

