#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
int main()
{
  int num = 0;
  string x("003");
  num = stoi(x);
  cout << num << endl;
  //cout << typeid(num).name();
  return 0;
}