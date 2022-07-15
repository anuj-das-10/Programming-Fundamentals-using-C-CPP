#include<iostream>
#include<fstream>			// Combination of  ofstream  &  ifstream
using namespace std;
int main() {
  char fileName[1024], input_str[1024];
  cout<< "Provide Path(C:\\..) or Enter File Name with Extension(if present in the same directory):  ";
  cin.getline(fileName,1024);
    
  ofstream MyFile(fileName);


	cout<< "Enter Strings to Write into File: ";
	cin.getline(input_str,1024);
	MyFile << input_str;


	MyFile.close();
	cout<< "\nSuccessfully written to "<< fileName;
		
	return 0;
}
