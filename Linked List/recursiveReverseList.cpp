#include <iostream>
using namespace std;

/*
To reverse a linked list you assume that the recursive function would reverse the sub list and return the head say 'smallHead'
Now you have to link the head with the reversed linked list
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

ostream &operator<<(ostream &os, node *head)
{
  printList(head);
  return os;
}

istream &operator>>(istream &is, node *&head)
{
  head = takeInput();
  return is;
}

node *recursiveReverseList(node *head)
{
  //BASE CASE
  if (head->next == NULL or head == NULL)
  {
    return head;
  }

  //RECURSIVE CASE
  node *smallHead = recursiveReverseList(head->next);
  head->next->next = head;
  head->next = NULL;
  return smallHead;
}

int main()
{
  node *head;
  cin >> head;
  cout << head;
  head = recursiveReverseList(head);
  cout << head;
  return 0;
}