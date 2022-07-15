#include<iostream>
using namespace std;

//	Parent/Base class Super_A
class Super_A {
	public: 
	void methodSuper_A() {
		cout<< "I'm a function() of class Super_A"<< endl;
	}
};

//	class Derived_B is derived from parent class Super_A		(Single-Level Inheritence)
class Derived_B : public Super_A {
	public: 
	void methodDerived_B() {
		cout<< "I'm a function() of class Derived_B"<< endl;
	}
};

//	class Derived_C is derived from parent class Derived_B		(Multi-Level Inheritence)
class Derived_C : public Derived_B {
	public: 
	void methodDerived_C() {
		cout<< "I'm a function() of class Derived_C"<< endl;
	}
};

//	class Derived_C and Derived_D  is derived from parent class Derived_B		(Hierarchical Inheritence)
class Derived_D : public Derived_B  {
	public: 
	void methodDerived_D() {
		cout<< "I'm a function() of class Derived_D"<< endl;
	}
};

//	class Derived_E is derived from class Derived_C and Derived_D				(Multiple Inheritence)
class Derived_E : public Derived_C, public  Derived_D {
	public: 
	void methodDerived_E() {
		cout<< "I'm a function() of class Derived_E"<< endl;
	}
};


int main() {
	Super_A obj_A;
	obj_A.methodSuper_A();
	
	Derived_B obj_B;
	obj_B.methodSuper_A();
	obj_B.methodDerived_B();
	
	Derived_E obj;
//	obj.methodSuper_A();		//  Ambiguous Super_A::methodSuper_A() because of classes Derived_C  &  Derived_D	
//	obj.methodDerived_B();		//  Ambiguous Derived_B::methodDerived_B() because of classes Derived_C  &  Derived_D

	obj.methodDerived_C();
	obj.methodDerived_D();
	obj.methodDerived_E();
	
	return 0;
}
