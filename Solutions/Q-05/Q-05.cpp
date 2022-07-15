#include<iostream>
#include<string.h>
using namespace std;

int checkPalindrome(string str);

int main() {
	string str;
	cout<< "Enter a string: ";
	getline(cin,str);
	
		if(checkPalindrome(str))
			cout<< "It is a palindrome string!";
		else	
			cout<< "It is not a palindrome string!";
	return 0;
}

int checkPalindrome(string str) {
	int length, i;
	length = str.length();
    
    for(i=0; i<length; i++) {
        
		if(str[i] != str[length-1-i]) {
            return 0;
        }
    }
    return 1;
}
