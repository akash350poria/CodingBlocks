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

int main()
{
  node *head = takeInput();
  printList(head);
  return 0;
}