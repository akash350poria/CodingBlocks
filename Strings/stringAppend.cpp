#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1, s2("Zephyr");
  cout << "s1 is: " << s1 << endl;
  cout << "s2 is: " << s2 << endl;
  // append() method adds new characters to the end of the strinf
  s1.append("Foxyyy");
  //Update with assignment also works
  s2 = s2 + " Naut"; //s2+=" Naut" is same
  cout << "Updated values of s1 and s2" << endl;
  cout << "s1 is: " << s1 << endl;
  cout << "s2 is: " << s2;
  return 0;
}