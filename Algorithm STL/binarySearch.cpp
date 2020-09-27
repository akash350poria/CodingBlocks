#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 10, 11, 20};
  int n = sizeof(a) / sizeof(int);

  int key;
  cout << "Enter key: ";
  cin >> key;

  //binary_search() returns boolean
  //It retuns true if element is present
  //binary_search()  takes 3 arguments
  //1. Start of container
  //2. End of container
  //3. Key to search for

  bool elePresent = binary_search(a, a + n, key);
  if (elePresent)
  {
    cout << "Element present";
  }
  else
  {
    cout << "Element not present";
  }
  return 0;
}