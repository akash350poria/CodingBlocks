#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack<int> s;
  if (s.empty())
  {
    cout << "Stack empty";
  }
  else
  {
    cout << "Stack not empty";
  }
  for (int i = 1; i <= 5; i++)
  {
    s.push(i);
  }
  cout << endl;
  cout << "Contents of stack are: ";
  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  return 0;
}