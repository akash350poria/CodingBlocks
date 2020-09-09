#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char s[] = "Zephyr plays csgo and his rank is MG1";
  char *ptr = strtok(s, " ");
  cout << ptr << endl;
  while (ptr != NULL)
  {
    ptr = strtok(NULL, " ");
    cout << ptr << endl;
  }
  return 0;
}