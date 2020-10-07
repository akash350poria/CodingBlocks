#include <iostream>
#include <cstring>

using namespace std;

char charType(char c)
{
  if (islower(c))
  {
    return 'L';
  }
  else if (isupper(c))
  {
    return 'U';
  }
  else
  {
    return 'I';
  }
}

int main()
{
  char c;
  cin >> c;
  char result = charType(c);
  cout << result;
  return 0;
}