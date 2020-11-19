#include <iostream>
using namespace std;

class node
{
public:
  int data;   //data
  node *next; //pointer to next node

  //Constructor
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

bool findElementList(node *head, int key)
{
  while (head)
  {
    if (head->data == key)
    {
      return true;
    }
    head = head->next;
  }
  return false;
}

bool recursiveFindElement(node *head, int key)
{
  //BASE CASE
  if (head == NULL)
  {
    return false;
  }

  //RECURSIVE CASE
  if (head->data == key)
  {
    return true;
  }
  return recursiveFindElement(head->next, key);
}

int main()
{
  node *head = NULL;
  if (findElementList(head, 3))
  {
    cout << "Element found" << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }
  insertAtHead(head, 5);
  insertAtHead(head, 4);
  insertAtHead(head, 3);
  insertAtHead(head, 2);
  insertAtHead(head, 1);
  printList(head);
  if (findElementList(head, 3))
  {
    cout << "Element found" << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }
  if (recursiveFindElement(head, 3))
  {
    cout << "Element found" << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }
  return 0;
}