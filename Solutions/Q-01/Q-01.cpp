#include<iostream>
using namespace std;
int main(){
	int num, revNum=0, remainder;
	
	cout<<"Enter a Number : ";
	cin>>num;
	
	while(num!=0){
		remainder = num % 10;
		revNum = revNum * 10 + remainder;
		num /= 10;
	}
	
	cout<<"Reversed Number: "<<revNum;
	return 0;
}
