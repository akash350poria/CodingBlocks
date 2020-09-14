#include <iostream>
#include <cstring>

using namespace std;

char *myStrTok(char *s, char delm)
{
  //static pointer to maintain state of the string
  //initially set to input
  static char *input = NULL;

  //set input to start of the string if string is passed
  if (s != NULL)
  {
    input = s;
  }

  //check if input is null or not, to stop calling the function again
  if (input == NULL)
  {
    return NULL;
  }

  //create new array everytime to store token
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
      //set null to the end of the output
      output[i] = '\0';
      //input points to next token
      input = input + i + 1;
      return output;
    }
  }

  //corner case
  //in case of last token, input would point to null
  //you won't encounter delimiter
  //add '\0' to output
  //set input to null
  output[i] = '\0';
  input = NULL;
  return output;
}

int main()
{
  char s[] = "Zephyr plays csgo and his rank is MG1";
  char *ptr = myStrTok(s, ' ');
  cout << ptr << endl;
  while (ptr != NULL)
  {
    ptr = myStrTok(NULL, ' ');
    cout << ptr << endl;
  }
  return 0;
}