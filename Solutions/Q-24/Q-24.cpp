#include<iostream>
#include<string.h>
using namespace std;

int main() {
	string str1, str2;
	cout<< "Enter String-1:  ";
	getline(cin,str1);
	cout<< "Enter String-2:  ";
	getline(cin,str2);

 	if(str1.compare(str2) == 0) {
 		cout<< "Strings are equal!";
	 }
	 else if(str1.compare(str2) < 0){
	 	cout<< "First non-matching character in string-1 is lower (in ASCII) than that of string-2 !";
	 }
	 else {
	 	cout<< "First non-matching character in string-1 is greater (in ASCII) than that of string-2 !";
	 }

	return 0;
}
