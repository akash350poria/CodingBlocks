#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(a) / sizeof(a[0]);

  //rotate() rotates the container about an element
  //rotate()  takes 3 arguments
  //1. Start of container
  //2. Index to rotate about
  //3. End of container
  //find() returns address of the key
  rotate(a, a + 3, a + n);
  for (auto x : a)
  {
    cout << x << " ";
  }
  return 0;
}