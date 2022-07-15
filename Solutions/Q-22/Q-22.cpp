#include<iostream>
using namespace std;

int main() {
	string str;
	int i=0, length=0;
	cout<< "Enter the String:  ";
	getline(cin,str);
	
	while(str[i] != '\0') {
		length++;
		i++;
	}
	
	cout<< "Length of the given string:  "<< length;
		
	return 0;
}
