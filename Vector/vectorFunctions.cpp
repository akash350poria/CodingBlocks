#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << "Vector: ";
  for (auto x : v)
  {
    cout << x << " ";
  }
  cout << endl;

  //size() returns number of elements in the vector
  cout << "Size: " << v.size() << endl;

  //front() returns the first element in the vector
  cout << "Front: " << v.front() << endl;

  //back() returns the last element in the vector
  cout << "Back: " << v.back() << endl;

  //max_size() returns the max elements a vector can hold in worst case according to available memory in the system
  cout << "Max size: " << v.max_size() << endl;

  //capacity() returns the underlying size of the vector
  cout << "Capacity: " << v.capacity() << endl;

  //push_back() inserts an element at the end of the vector
  //If the capacity is full then vector doubles its capacity
  //To inc capacity it internally creates a new vector of double capacity and copies previous elements to it
  v.push_back(11);

  cout << "Vector after pushing 11: ";
  for (auto x : v)
  {
    cout << x << " ";
  }
  cout << endl;
  cout << "New capacity: " << v.capacity() << endl;

  //pop_back() removes an element from the end
  v.pop_back();
  cout << "Popped last element" << endl;
  cout << "Vector after popping last element: ";
  for (auto x : v)
  {
    cout << x << " ";
  }
  cout << endl;

  //insert() inserts an element at the index or after position specified
  v.insert(v.begin() + 2, 30);
  cout << "Vector after inserting 30: ";
  for (auto x : v)
  {
    cout << x << " ";
  }
  cout << endl;

  //You could also n number at once
  //Inserting two 40 from 4th index
  v.insert(v.begin() + 3, 2, 40);
  cout << "Vector after inserting two 40: ";
  for (auto x : v)
  {
    cout << x << " ";
  }
  cout << endl;

  //erase() removes element from the given index
  //Erasing element at 3rd index
  v.erase(v.begin() + 2);
  cout << "Vector after erasing element at 3rd index: ";
  for (auto x : v)
  {
    cout << x << " ";
  }
  cout << endl;
  //Erase element in the specified range
  v.erase(v.begin() + 2, v.begin() + 4);
  cout << "Vector after removing elements in range [2,4): ";
  for (auto x : v)
  {
    cout << x << " ";
  }
  cout << endl;

  //resize() used to resize a vector. Capacity doesn't change if new size in less than current capacity
  //If new size is greater than current capacity then capacity also increases
  //When size is increased new elements are added as zero
  cout << "Current size: " << v.size() << endl;
  cout << "Current capacity: " << v.capacity() << endl;
  cout << "Increase size to 25" << endl;
  v.resize(25);
  cout << "New size: " << v.size() << endl;
  cout << "New capacity: " << v.capacity() << endl;
  cout << "Vector after inc size: ";
  for (auto x : v)
  {
    cout << x << " ";
  }
  cout << endl;

  //clear() removed all the elements from the vector, however it doesn't delete the memory occupied by the vector
  v.clear();
  cout << "Vector after clearing it: ";
  for (auto x : v)
  {
    cout << x << " ";
  }
  cout << endl;
  cout << "Capacity after clearing vector: " << v.capacity() << endl;

  //empty() returns a boolean whether vector is empty or not
  if (v.empty())
  {
    cout << "Vector v empty" << endl;
  }
  else
  {
    cout << "Vecor v not empty" << endl;
  }

  vector<int> a{1, 2, 3, 3};
  cout << "Vector a: ";
  for (auto x : a)
  {
    cout << x << " ";
  }
  cout << endl;
  if (a.empty())
  {
    cout << "Vector a empty" << endl;
  }
  else
  {
    cout << "Vecor a not empty" << endl;
  }
  return 0;
}