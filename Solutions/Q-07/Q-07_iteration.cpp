#include<iostream>
using namespace std;

void fibonacci(int n);

int main() { 
	int n; 
	cout<< "Enter the number of terms:  "; 
	cin>> n;
	cout<< "\nFIBONACCI SERIES:"<< endl;
	fibonacci(n);

return 0;
}
 
void fibonacci(int n) { 
	int num1=0, num2=1, num3;
	if(n==0 || n==1)
		cout<< num1<< "   ";
	else {
		cout<< num1<< "   "<< num2<< "   ";
		for(int i=2; i<n; i++){
			num3 =  num1 + num2;
			cout<< num3<<"   ";
			num1 = num2;
			num2 = num3;
		}	
	}
	
} 
