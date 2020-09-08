#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1("I want to have apple juice");
  cout << "s1 is: " << s1 << endl;
  // find() method returns starting index of substring
  int subIndex = s1.find("apple");
  cout << "Index of apple is: " << subIndex;
  return 0;
}