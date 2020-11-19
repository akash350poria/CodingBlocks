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
  //Linked list empty
  if (head == NULL)
  {
    head = new node(d);
    return;
  }

  //Linked list not empty
  node *n = new node(d); //Created a new node
  n->next = head;        //Point new node to other nodes
  head = n;              //Make head point to newly created node
}

void insertAtTail(node *&head, int d)
{
  //If linked list emepty
  if (head == NULL)
  {
    head = new node(d);
    return;
  }

  //Insert at tail
  //To insert at the tail, iterate till the last node
  node *tail = head;
  while (tail->next)
  {
    tail = tail->next;
  }
  tail->next = new node(d);
}

void insertInMiddle(node *&head, int d, int pos)
{
  //Insert new node after p nodes

  //If pos=0 or linked is empty then insert at head
  if (pos == 0 or head == NULL)
  {
    insertAtHead(head, d);
    return;
  }
  //If pos is greater than length of the linked list then insert at end of the linked list
  else if (pos > lengthOfList(head))
  {
    insertAtTail(head, d);
  }
  //Insert after p nodes
  else
  {
    //To insert after p nodes, iterate till p-1
    node *temp = head;
    node *n = new node(d);
    for (int i = 0; i < pos - 1; i++)
    {
      temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
  }
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

int main()
{
  node *head = NULL;
  insertAtHead(head, 5);
  insertAtHead(head, 4);
  insertAtHead(head, 2);
  insertAtHead(head, 1);
  printList(head);
  insertInMiddle(head, 0, 0);
  insertInMiddle(head, 3, 3);
  printList(head);
  insertAtTail(head, 6);
  insertAtTail(head, 7);
  printList(head);
  return 0;
}