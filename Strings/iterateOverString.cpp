#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s("Zephyr");
  cout << "s is: " << s << endl;

  //Using for loop
  for (int i = 0; i < s.length(); i++)
    cout << s[i] << ",";

  cout << endl;

  //Using Iterator, iterator class is defined inside string class
  //s.begin() is a pointer pointing to first element of the string
  //s.end() is a pointer pointing to position after last element
  //Iterate from begin till end, where end is not included, i.e [begin,end)
  for (auto it = s.begin(); it != s.end(); it++)
    cout << *it << " ";
  //auto here is equal to string::iterator

  cout << endl;

  //Using for each
  //For each is available in C++11 and after verisons
  for (auto c : s)
    cout << c << " , ";

  //auto keyword automatically deduces type of variable based on valye initialised

  return 0;
}