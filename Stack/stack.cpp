#include <iostream>
#include <vector>

using namespace std;

class stack
{
private:
  vector<int> v;

public:
  void push(int data)
  {
    v.push_back(data);
  }
  void pop()
  {
    v.pop_back();
  }
  int top()
  {
    return v.back();
  }
};

int main()
{
  stack s;
  for (int i = 1; i <= 5; i++)
  {
    s.push(i);
  }
  for (int i = 1; i <= 5; i++)
  {
    cout << s.top() << " ";
    s.pop();
  }
  return 0;
}