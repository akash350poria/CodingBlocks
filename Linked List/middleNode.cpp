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
To get the middle node we use 2 pointer approach
1. slow takes jump of 1
2. fast take jump of 2
We iterate till fast is not NULL
When fast is NULL slow would point at middle node

1->2->3->4->5 ; n=odd, middleNode=3
1->2->3->4->5->6 ; n=even, middleNode=3,4 but we would return the first middle node
For this fast would start one node ahead of slow
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

int main()
{
  node *head1 = NULL;
  node *head2 = NULL;
  cin >> head1;
  cout << head1;
  node *m1 = middleNode(head1);
  cout << m1->data << endl;
  cin >> head2;
  cout << head2;
  node *m2 = middleNode(head2);
  cout << m2->data;
  return 0;
}