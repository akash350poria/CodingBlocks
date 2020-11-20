#include <iostream>
using namespace std;

/*
OPERATOR OVERLOADING '<<' and '>>'

cout<<head would print linked list
cin>>head would take input to generate a linked list

This is done by defining a function using 'operator'  keyword 
*/

class node
{
public:
  int data;
  node *next;

  node(int d)
  {
    data = d;
    next = NULL;
  }
};

void insertAtHead(node *&head, int d)
{
  if (head == NULL)
  {
    head = new node(d);
    return;
  }

  node *n = new node(d);
  n->next = head;
  head = n;
}

void printList(node *head)
{
  while (head)
  {
    cout << head->data << "->";
    head = head->next;
  }
  cout << "NULL" << endl;
}

node *takeInput()
{
  int d;
  node *head = NULL;
  cin >> d;
  while (d != -1)
  {
    insertAtHead(head, d);
    cin >> d;
  }
  return head;
}

/*
When you define operator function outside the class it takes both the parameters
That is, in 'cout<<head' both 'cout' and 'head' objects has to be passed as parameters
cin or cout are returned so cascading is possible
With void as return type in the statement "cout<<head1<<head2"
"cout<<head1" would return void, then "void<<head2" would be invalid
Therefore we return the object so as to cascade
"cout<<head1" woudl now return cout, hence "cout<<head2" would be a valid statement
"cout<<head2" would return cout and "cout;" is a valid statement 
*/

ostream &operator<<(ostream &os, node *head)
{
  //cout is oject of ostream class
  //cout is passed and returned by reference
  printList(head);
  return os;
}

istream &operator>>(istream &is, node *&head)
{
  //cin is oject of istream class
  //cin is passed and returned by reference
  head = takeInput();
  return is;
}

int main()
{
  node *head1, *head2;
  cin >> head1 >> head2;
  cout << head1 << head2;
  cout;
  return 0;
}