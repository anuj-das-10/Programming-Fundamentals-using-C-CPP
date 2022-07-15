#include<iostream>
using namespace std;

int main() {
char ch;
int num1, num2;
input:
cout<< "Enter Expression:  ";
cin>> num1 >> ch >> num2;

switch(ch) 
{
	case '+': cout<< num1 << " + " << num2 << " = " << (num1 + num2) << endl;
			  break;
	case '-': cout<< num1 << " - " << num2 << " = " << (num1 - num2) << endl;
			  break;
	case '*': cout<< num1 << " X " << num2 << " = " << (num1 * num2) << endl;
			  break;
	case '/': cout<< num1 << " / " << num2 << " = " << (num1 / (float)num2) << endl;
			  break;
	default:  system("cls");
			  cout<< "Enter a valid expression! \n"<< endl;
			  goto input;
} 
		
	return 0;
}
