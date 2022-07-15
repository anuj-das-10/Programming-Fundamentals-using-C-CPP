#include<iostream>
using namespace std;

class Swapper {
  public:
    void Swap(int *a, int *b);
};

void Swapper::Swap(int *a, int *b) {
int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
int a, b;
Swapper object;
  cout<< "Enter the value of a:  ";
  cin>> a;
  cout<< "Enter the value of b:  ";
  cin>> b;
  system("cls");

  cout<< "Before Swapping:  a = "<< a<< "  &  b = "<< b<< endl;
  object.Swap(&a,&b);
  cout<< "After Swapping :  a = "<< a<< "  &  b = "<< b<< endl;

  return 0;
}
