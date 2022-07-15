#include<iostream>
using namespace std;
int main() {
    int n;
	cout<< "Enter the number of lines(rows):  ";
	cin>> n;
	
	for(int i=1; i <= n*2; i+=2){
		for(int j=1; j <= i; j++){
			cout<<"* ";
		}
	cout<<endl;
	}
		
return 0;
}
