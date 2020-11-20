#include <iostream>
using namespace std;

/*
To reverse a linked list instead of swapping the links or pointers are changed
1->2->3->4 ==> 4->3->2->1

We need three pointer to do reverse the linked list
1. current (c) would point to current node
2. next (n) woudld point to node after current node
3. previous (p) would point to node before the current node and initially NULL as we want the first node to last node, hence it would point to NULL

Now we want to make current node point to previous node, i.e, "c->next=p"
However we would lose the address of next node, hence "n=c->next" is done first
Now with links changef for one node, same needs to be done for all the nodes
Hence we move out current node "c=n"
And current node now becomes previous node "p=c"

The above steps have to be repeated till current node is not NULL
In the end update head, pointed by previous node "head=p"
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

void reverseList(node *&head)
{
  node *p = NULL; //previous node
  node *c = head; //current node
  node *n;        //next node
  while (c)
  {
    n = c->next;
    c->next = p;
    p = c;
    c = n;
  }
  head = p;
}

int main()
{
  node *head;
  cin >> head;
  cout << head;
  reverseList(head);
  cout << head;
  return 0;
}