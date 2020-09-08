#include <iostream>
#include <string>

using namespace std;

int main()
{
  //STRING CLASS (C++ STL)
  //DECLARATION AND INITILISATION
  string s0;                 //empty string
  string s1("Zephyr Naut");  //passing to constructor
  string s2 = "Zephyr Naut"; //assignment
  string s3(s2);             //passing another string object to constructor
  string s4 = s3;            //assignment using anther object

  char a[] = {'Z', 'e', 'p', 'h', 'y', 'r', '\0'};
  string s5(a); //using another character array contents

  cout << s0 << endl; //empty string
  cout << s1 << endl;
  cout << s2 << endl;
  cout << s3 << endl;
  cout << s4 << endl;
  cout << s5 << endl;

  return 0;
}