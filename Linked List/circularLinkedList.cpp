#include <iostream>
using namespace std;

/*
Circular linked list is one in which the last node points to first node
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

void insertCircular(node *&head, int d)
{
  if (head == NULL)
  {
    head = new node(d);
    head->next = head;
  }
  node *n = new node(d);
  node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  n->next = head;
  temp->next = n;
  head = n;
}

node *getNode(node *head, int d)
{
  node *temp = head;
  while (temp->next != head)
  {
    if (temp->data == d)
    {
      return temp;
    }
    temp = temp->next;
  }
  return NULL;
}

void deleteCircular(node *&head, int d)
{
  node *del = getNode(head, d);
  if (del == NULL)
  {
    return;
  }
  if (del == head)
  {
    head = head->next;
  }
  node *temp = head;
  while (temp->next != del)
  {
    temp = temp->next;
  }
  temp->next = del->next;
  delete del;
}

void printCircular(node *head)
{
  node *temp = head;
  while (temp->next != head)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  node *head = NULL;
  insertCircular(head, 6);
  insertCircular(head, 5);
  insertCircular(head, 4);
  insertCircular(head, 3);
  insertCircular(head, 2);
  insertCircular(head, 1);
  printCircular(head);
  deleteCircular(head, 3);
  printCircular(head);
  deleteCircular(head, 1);
  deleteCircular(head, 6);
  printCircular(head);
  // cout << head << endl;
  // node *temp = head;
  // while (temp->next != head)
  // {
  //   temp = temp->next;
  // }
  // cout << temp->next;
  return 0;
}