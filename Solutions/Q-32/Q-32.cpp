#include<iostream>
using namespace std;

int main() {
int size, element;
cout<< "Enter the size of the Array:  ";
cin>> size;
int arr[size];
cout<< "Enter "<< size << " Elements: "<< endl;
for(int i=0; i<size; i++) {
	cin>> arr[i];
}
system("cls");

//Displaying Array
cout<< "Given Array:  ";
for(int i=0; i<size; i++) {
	cout<< arr[i]<< "  ";
}

cout<< "\n\nEnter the element to be searched:  ";
cin>> element;

for(int i=0; i<size; i++) {
	if(arr[i] == element) {
		cout<< element<< " found at position:  "<< i+1<< endl;
		return 1;
	}
}
	cout<< element<< " not found in this Array!"<< endl;
	return 0;
}
