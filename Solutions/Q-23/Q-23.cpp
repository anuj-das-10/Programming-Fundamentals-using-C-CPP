#include<iostream>
using namespace std;

int main() {
	string str1, str2, concat_result;
	cout<< "Enter String-1:  ";
	getline(cin,str1);
	cout<< "Enter String-2:  ";
	getline(cin,str2);

	concat_result = str1 + str2;

	cout<< "After Concatenation:  "<< concat_result;

	return 0;
}
