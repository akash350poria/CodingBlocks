#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(a) / sizeof(a[0]);

  int key;
  cout << "Enter key: ";
  cin >> key;

  //find()  takes 3 arguments
  //1. Start of container
  //2. End of container
  //3. Key to search for
  //find() returns address of the key
  auto it = find(a, a + n, key);

  //Subtract base address of container to get index
  int index = it - a;

  //if index=length, element not present
  if (index == n)
  {
    cout << "Element not present";
  }
  else
  {
    cout << "Element present at: " << index;
  }
  return 0;
}