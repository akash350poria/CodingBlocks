#include <iostream>
#include <cstring>

char *myStrTok(char *s, char delm)
{
  static char *input = NULL;
  if (s != NULL)
  {
    input = s;
  }
  if (input == NULL)
  {
    rt NULL;
  }
  char *output = new char[strlen(input + 1)];
  int i = 0;
  for (; input[i] != '\0'; i++)
  {
    if (input[i] != delm)
    {
      output[i] = input[i];
    }
    else
    {
      output[i] = '\0';
      input = input + i + 1;
    }
  }
}

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