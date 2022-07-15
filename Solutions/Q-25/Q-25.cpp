#include<iostream>
#include<ctype.h>
using namespace std;

int main() {
    string str;
    cout<< "Enter the String:  ";
    getline(cin,str);
	
	for(int i=0; str[i] != '\0'; i++){
		str[i] = toupper(str[i]);
	}
	
	cout<< str;
	return 0;
}
