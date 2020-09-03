#include <iostream>
using namespace std;

void readLine(char a[], int maxLen, char delm = '\n')
{
  int i = 0;
  char ch = cin.get();
  while (ch != delm)
  {
    a[i] = ch;
    i++;
    if (i == maxLen - 1)
    {
      break;
    }
    ch = cin.get();
  }
  a[i] = '\0';
  return;
}

int main()
{
  char a[1000];
  cout << "Enter your text: ";
  readLine(a, 1000, '.');
  cout << "OUTPUT: " << a;
  return 0;
}