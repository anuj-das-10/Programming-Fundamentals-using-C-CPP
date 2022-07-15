#include<iostream>
using namespace std;

class PrimeNumbers{
	public: 
	int checkPrime(int x);
	void printPrime(int range_start, int range_end);
};

int PrimeNumbers::checkPrime(int x){
		if(x==1 || x==0)			// So that Program won't crash
			return 0;
		else {
			for(int i=2; i <= x/2; i++) {
				if(x%i==0) {
				return 0;
				}
			}
		}
	return 1;	
}

void PrimeNumbers::printPrime(int range_start, int range_end){
	for(int i=range_start; i <= range_end; i++) {
		if(checkPrime(i)==1){
			cout<<i<<"   ";
		}
	}
}


int main(){
	int n;
	PrimeNumbers object;
	cout<< "Enter a number: ";
	cin>> n;
		
		if(object.checkPrime(n))
			cout<< n<< " is a prime number!"<<endl;
		else
			cout<< n<< " is not a prime number!"<<endl;
	
	cout<<"\nPrinting all Prime Numbers upto 100: "<<endl;		
	object.printPrime(1,100);
	return 0;
		
}
