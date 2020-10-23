#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // vector<data_type> name;
  vector<int> a;

  //Vector of size 5 with all values 10
  vector<int> b(5, 10);

  //Create a vector and initialise with another vector
  vector<int> c(b.begin(), b.end());

  //Vector initialised at declaration
  vector<int> d{1, 2, 3, 4, 5};

  //Vector of size 10
  vector<int> e(10);

  //Vector initilaised using another vector
  vector<int> f(b);

  //Initialise a vector using an array
  vector<int> g = {9, 8, 7, 6, 5};
  int arr[] = {1, 2, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  vector<int> h(arr, arr + n);

  cout << "Vector a: ";
  for (auto x : a)
  {
    cout << x << " ";
  }
  cout << endl;
  cout << "Vector b: ";
  for (auto x : b)
  {
    cout << x << " ";
  }
  cout << endl;
  cout << "Vector c: ";
  for (auto x : c)
  {
    cout << x << " ";
  }
  cout << endl;
  cout << "Vector d: ";
  for (auto x : d)
  {
    cout << x << " ";
  }
  cout << endl;
  cout << "Vector e: ";
  for (auto x : e)
  {
    cout << x << " ";
  }
  cout << endl;
  cout << "Vector f: ";
  for (auto x : f)
  {
    cout << x << " ";
  }
  cout << endl;
  cout << "Vector g: ";
  for (auto x : g)
  {
    cout << x << " ";
  }
  cout << endl;
  cout << "Vector h: ";
  for (auto x : h)
  {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}