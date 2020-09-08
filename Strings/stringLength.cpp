#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1, s2("Zephyr");
  cout << "s1 is: " << s1 << endl;
  cout << "s2 is: " << s2 << endl;
  // length() method returns number of characters
  cout<<"Length of s1 is: "<<s1.length()<<endl;
  cout<<"Length of s2 is: "<<s2.length()<<endl;
  return 0;
}