#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1("I want to have apple juice");
  string subString = "apple";
  cout << "s1 is: " << s1 << endl;
  // erase() method removes a substring
  //1st paramter: Starting index
  //2nd parameter: Number of character to erase
  int subIndex = s1.find(subString);
  int subLen = subString.length();
  cout << "Removing apple" << endl;
  s1.erase(subIndex, subLen + 1); //+1 to remove extra space after apple
  cout << "s1 is: " << s1;
  return 0;
}