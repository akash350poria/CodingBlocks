#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int n;
  char currentString[100];
  char maxString[100];
  int currentLen = 0, maxLen = 0;
  cout << "Enter number of strings: ";
  cin >> n;
  cin.get(); //to  consume extra charcter, i.e, '\n'
  cout << "Enter " << n << " strings: " << endl;
  while (n--)
  {
    gets(currentString);
    currentLen = strlen(currentString);
    if (currentLen > maxLen)
    {
      maxLen = currentLen;
      strcpy(maxString, currentString);
    }
  }
  cout << "Max length string is: " << maxString << " and its length is: " << maxLen;
  return 0;
}