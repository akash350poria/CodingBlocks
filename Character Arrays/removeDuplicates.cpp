#include <iostream>
#include <cstring>
using namespace std;

void removeDuplicates(char s[])
{
  int strLen = strlen(s);
  if (strLen == 1 or strLen == 0)
    return;
  else
  {
    int currentIndex = 0;
    for (int nextIndex = 1; nextIndex < strLen; nextIndex++)
    {
      if (s[currentIndex] != s[nextIndex])
      {
        currentIndex++;
        s[currentIndex] = s[nextIndex];
      }
    }
    s[currentIndex + 1] = '\0';
  }
  return;
}

int main()
{
  char s[100];
  cout << "Enter a string: ";
  gets(s);
  removeDuplicates(s);
  cout << "Removing dupliactes, final string is: " << s;
  return 0;
}