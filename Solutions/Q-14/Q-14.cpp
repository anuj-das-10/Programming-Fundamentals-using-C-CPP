#include<iostream>
#include<string.h>
using namespace std;

typedef struct Student{
	int roll_no;
	string name;
	int std_class;
	int year;
	int total_marks;
}Student;

int main() {
	int no_of_students = 5;
	Student s[no_of_students];
	int roll_no, std_class,total_marks, year;
	string name;
		
	for(int i=0; i<no_of_students; i++){
		cout<< "Enter Roll Number: ";		
		cin>> roll_no;
		s[i].roll_no = roll_no;
		
		cout<< "Enter Student Name: ";		
		cin.ignore(); 
		getline(cin,name);
		s[i].name = name;
		
		cout<< "Enter Student Class: ";		
		cin>> std_class;
		s[i].std_class = std_class;
		
		cout<< "Enter Year: ";				
		cin>> year;
		s[i].year = year;
		
		cout<< "Enter Total Marks: ";		
		cin>> total_marks;	
		s[i].total_marks = total_marks;
		
		cout<< "\n"<< endl;
	}
	system("cls");
	
	cout<< "STUDENTS DETAILS:"<< endl;
	cout<< "-----------------"<< endl;
	for(int j=0; j<no_of_students; j++){
		cout<< "Roll Number: "<< s[j].roll_no<< endl;	
		cout<< "Student Name: "<< s[j].name<< endl;
		cout<< "Student Class: "<< s[j].std_class<< endl;
		cout<< "Year: "<< s[j].year<< endl;			
		cout<< "Total Marks: "<< s[j].total_marks<<endl;
		cout<< "\n"<< endl;
	}
	return 0;
}
