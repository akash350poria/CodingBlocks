#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1("Cosmic"), s2("Zephyr");
  //compare() methods returns integer value
  //comparing s1 with s2
  //Zero indicates strings are equal
  //Positive number indicates that s1 is greater
  //Negative number indicates that s1 is smaller
  //Lexical comparison is done
  cout << s1.compare(s1) << endl;
  cout << s1.compare(s2) << endl;
  cout << s1.compare("Cosmib") << endl;
  cout << s2.compare(s1) << endl;

  //Overloaded comparison operators
  if (s1 > s2)
    cout << s1 << " is greater";
  if (s1 < s2)
    cout << s2 << " is greater";
  return 0;
}