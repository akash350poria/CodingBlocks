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
To sort a list do the following three steps:
1. Divide list using middleNode()
2. Recursively sort using mergeSortList()
3. Merge list using mergeList()
*/

node *middleNode(node *head)
{
  if (head->next == NULL or head == NULL)
  {
    return head;
  }
  node *slow = head;
  node *fast = head->next;
  while (fast and fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}

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

node *mergeSortList(node *head)
{
  //BASE CASE
  if (head == NULL or head->next == NULL)
  {
    return head;
  }

  //RECURSIVE CASE
  //Divide list
  node *mid = middleNode(head);
  node *a = head;
  node *b = mid->next;
  mid->next = NULL;

  //Recursively sort
  a = mergeSortList(a);
  b = mergeSortList(b);

  //Merge list
  node *c = mergeList(a, b);
  return c;
}

int main()
{
  node *head = NULL;
  cin >> head;
  cout << head;
  head = mergeSortList(head);
  cout << head;
  return 0;
}