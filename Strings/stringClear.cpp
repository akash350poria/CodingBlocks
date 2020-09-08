#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1("Zephyr");
  cout << "s1 is: " << s1 << endl;
  // clear() method removes all characters
  cout << "Length of s1 is: " << s1.length() << endl;
  cout << "Cleared s1" << endl;
  s1.clear();
  cout << "s1 is: " << s1 << endl;
  cout << "Length of s1 is: " << s1.length();
  return 0;
}