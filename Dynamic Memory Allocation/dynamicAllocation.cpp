#include <iostream>
using namespace std;

int main()
{
  //static allocation
  //compiler does allocation and deallocation
  int b[10] = {0};
  cout << "Size of b: " << sizeof(b) << endl;

  //Dynamic allocation is done in heap memory
  //new is used for memory allocation
  //new returns address
  //delete used to free memory
  int *a = new int[10]{0};
  cout << "Size of a: " << sizeof(a) << endl;

  for (int i = 0; i < 10; i++)
  {
    a[i] = i + 1;
  }
  cout << "Elements of a are: ";
  for (int i = 0; i < 10; i++)
  {
    cout << a[i] << ',';
  }
  //free a
  delete[] a;
  return 0;
}