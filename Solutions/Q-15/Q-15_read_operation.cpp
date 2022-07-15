#include<iostream>
#include<fstream>				// Combination of  ofstream  &  ifstream

using namespace std;

int main() {
  char fileName[1024], output_str[1024];
  cout<< "Provide Path(C:\\..) or Enter File Name with Extension(if present in the same directory):  ";
  cin.getline(fileName,1024);

  ifstream MyFile(fileName);

  while(MyFile.eof()==0) {
  	MyFile.getline(output_str,1024);
  	cout<< endl<< output_str;
  }
  
  MyFile.close();

return 0;
}
