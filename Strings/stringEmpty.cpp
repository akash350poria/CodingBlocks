#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1, s2("Zephyr");
  cout << "s1 is: " << s1 << endl;
  cout << "s2 is: " << s2 << endl;
  // empty() method returns bool value
  if (s1.empty())
  {
    cout << "s1 is empty" << endl;
  }
  else
  {
    cout << "se not empty" << endl;
  }
  if (s2.empty())
  {
    cout << "s2 empty" << endl;
  }
  else
  {
    cout << "s2 not empty" << endl;
  }
  return 0;
}