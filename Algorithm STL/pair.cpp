#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
  //pair is used to combine two values into one single entitiy
  //pair value are accessed using ".first" and ".second"
  pair<int, char> p1;
  p1.first = 9;
  p1.second = 'a';
  cout << "Pair is: " << p1.first << " " << p1.second;

  //pair can be initilialisec using other pairs also
  pair<int, char> p2(p1); //method 1
  pair<int, char> p3 = p2;

  //You could also use make_pair() to create a pair
  int x;
  char y;
  cout << endl;
  cout << "Enter a number and a character: ";
  cin >> x >> y;
  pair<int, char> p4 = make_pair(x, y);
  cout << "Pair is: " << p4.first << " " << p4.second << endl;

  //You could also create array of pairs
  pair<int, int> p5[10];

  //You could also create nested pair
  pair<pair<int, int>, string> p6;
  p6.first.first = 3;
  p6.first.second = 9;
  p6.second = "Zephyr";
  cout << "Nested pair is: (";
  cout << p6.first.first << ',' << p6.first.second;
  cout << ") " << p6.second;
  return 0;
}