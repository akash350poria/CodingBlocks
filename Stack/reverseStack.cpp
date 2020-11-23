#include <iostream>
#include <stack>
using namespace std;

void stackReverseI(stack<int> &s)
{
  /*In this approach 2 additional stack are taken.
  Items from original stack are put into stack2 (which contains reversed order of elements)
  However for original stack to have reversed order we take another stack
  Now elements are shifted from stack1 to stack2, where stack2 has same order as that of original
  Finally elements from stack2 are transferred to original stack which now has reversed order of elements.
  */
  stack<int> s1, s2;
  while (!s.empty())
  {
    s1.push(s.top());
    s.pop();
  }
  while (!s1.empty())
  {
    s2.push(s1.top());
    s1.pop();
  }
  while (!s2.empty())
  {
    s.push(s2.top());
    s2.pop();
  }
}

void transferElements(stack<int> &s, stack<int> &s1, int n)
{
  for (int i = 0; i < n; i++)
  {
    s1.push(s.top());
    s.pop();
  }
}

void stackReverseII(stack<int> &s)
{
  /*
  s=1,2,3,4
  In this approach only one additional stack and one varibale is used
  Put the top element in variable x and transfer remaining elements to the other stack => x=4; s=empty; s1=3,2,1
  Now push x into original stack and elements of other stack back into original stack => s=4,1,2,3; x=empty; s1=empty
  Now repeat the above steps for top n-1-i elements 
  */
  stack<int> s1;
  int x;
  int n = s.size();
  for (int i = 0; i < n; i++)
  {
    x = s.top();
    s.pop();
    //Transfer n-1-i elements from stack to helper stack
    transferElements(s, s1, n - 1 - i);
    //Push x back into stack
    s.push(x);
    //Transfer elements back from helper to original stack
    transferElements(s1, s, n - 1 - i);
  }
}

int main()
{
  stack<int> s1, s2;
  s1.push(1);
  s1.push(2);
  s1.push(3);
  s1.push(4);
  s2.push(5);
  s2.push(6);
  s2.push(7);
  s2.push(8);
  stackReverseI(s1);
  cout << "S1: ";
  while (!s1.empty())
  {
    cout << s1.top() << " ";
    s1.pop();
  }
  stackReverseII(s2);
  cout << endl;
  cout << "S2: ";
  while (!s2.empty())
  {
    cout << s2.top() << " ";
    s2.pop();
  }
}