#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int a[] = {1, 2, 3, 3, 3, 4, 5, 6, 7, 9, 9};
  int n = sizeof(a) / sizeof(int);

  int key;
  cout << "Enter key: ";
  cin >> key;

  //lower_bound() returns address of 1st element that is greater or equal to key
  //upper_bound() returns address of 1st element that is greater than key
  //Both takes 3 arguments
  //1. Start of container
  //2. End of container
  //3. Key to search for
  //Time complexity for both in O(log(n))

  auto lb = lower_bound(a, a + n, key);
  cout << "Lower bound of key is: " << lb - a << endl;

  auto ub = upper_bound(a, a + n, key);
  cout << "upper bound of key is: " << ub - a << endl;

  cout << "Occurence of key is: " << ub - lb;
  return 0;
}