#include<iostream>
using namespace std;

class Incrementer{
	public:
		int x;
//Defaul Constructor
		Incrementer() {	}

//Parameterized Constructor	
		Incrementer(int x) {
			this->x = x;
		}
		
//This function takes Incrementer object as parameter and returns an Incrementer object by updating its value 
		Incrementer increByTen(Incrementer object) {
			object.x += 10;
			return object;
		}
};


int main() {
	int x;
	cout<< "Enter the value of X:  ";
	cin>> x;

//	EXAMPLE-1:  Updating and Assigning to self/same object of class Incrementer	
	Incrementer obj(x);
	cout << "Initial value of X in object-1:  "<< obj.x << endl;
	obj = obj.increByTen(obj);
	cout<< "Updated value of X in object-1:  "<< obj.x << endl;
	
//	EXAMPLE-2:  Updating and Assigning to different object of class Incrementer		
	Incrementer obj2;
	obj2 = obj.increByTen(obj);
	cout<< "\nThe value of X in object-1 is updated and assigned to object-2." << endl;
	cout<< "The value of X in object-2:  "<< obj2.x <<endl;
			
	return 0;
}
