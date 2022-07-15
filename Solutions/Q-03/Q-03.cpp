#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n;
	float sum=0;
		cout<< "Enter the number of terms:  ";
		cin>> n;
		
		for(int i=1; i<=n; i++){
			sum += (float)1/i;
		}
	cout<<"Sum of the Series:  "<<setprecision(3)<<sum;
	return 0;
}
