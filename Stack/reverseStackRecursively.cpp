#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int t)
{
  //BASE CASE
  if (s.empty())
  {
    s.push(t);
    return;
  }

  //RECURSIVE CASE
  int d = s.top();
  s.pop();
  insertAtBottom(s, t);
  s.push(d);
}

void recursiveRevStack(stack<int> &s)
{
  //BASE CASE
  if (s.empty())
  {
    return;
  }

  //RECURSIVE CASE
  int t = s.top();
  s.pop();
  recursiveRevStack(s);
  insertAtBottom(s, t);
}

int main()
{
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  recursiveRevStack(s);
  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  return 0;
}