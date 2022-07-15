#include<iostream>
using namespace std;

class Marks {
	int internal_marks;
	int external_marks;
	
	public:
		Marks() {
			internal_marks = 0;
			external_marks = 0;
		}	
		Marks(int internal_marks, int external_marks) {
			this->internal_marks = internal_marks;
			this->external_marks = external_marks;
		}
		void show() {
			cout << internal_marks << endl << external_marks << endl;
		}

//	Overloading Binary Operator +		
		Marks operator+(Marks m) {
			Marks temp;
			temp.internal_marks = internal_marks + m.internal_marks;
			temp.external_marks = external_marks + m.external_marks;
			return temp;
		}	
};

int main() {
	Marks m1(10,20), m2(5,15);
	Marks m3 = m1 + m2;
	
	m3.show();
	return 0;
}
