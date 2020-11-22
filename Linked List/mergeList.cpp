#include <iostream>
using namespace std;

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

int lengthOfList(node *head)
{
  int count = 0;
  while (head)
  {
    count++;
    head = head->next;
  }
  return count;
}

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

/*
To merge two sorted list we would have a new head
Everytime we would pick the smallest element fromo the both the list and connect it to new head
The list from which element is picked its head would be updated
Then the same steps is repeated until both lists are merged

1->3->4 + 2-5->6 = 1->2->3->4->5->6
*/

node *mergeList(node *head1, node *head2)
{
  //BASE CASE
  if (head1 == NULL)
  {
    return head2;
  }
  if (head2 == NULL)
  {
    return head1;
  }

  //RECURSIVE CASE
  node *head;
  if (head1->data < head2->data)
  {
    head = head1;
    head->next = mergeList(head1->next, head2);
  }
  else
  {
    head = head2;
    head->next = mergeList(head1, head2->next);
  }
  return head;
}

int main()
{
  node *head1 = NULL;
  node *head2 = NULL;
  cin >> head1 >> head2;
  cout << head1 << head2;
  node *head = mergeList(head1, head2);
  cout << head;
  return 0;
}