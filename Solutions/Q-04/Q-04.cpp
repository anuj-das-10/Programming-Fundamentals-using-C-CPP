#include<iostream>
using namespace std;
int main() {
int n, sum=0;
	cout<<"Enter the number of terms: ";
	cin>> n;
	
		for(int i=1; i<=n; i++){
			if(i%2==0)
				sum -= i;
			else
				sum += i;
		}	
		cout<<"Sum of the Series: "<< sum;
		
	return 0;
}
