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
  if (head == NULL)
  {
    head = new node(d);
    return;
  }
  node *n = new node(d);
  n->next = head;
  head = n;
}

void deleteAtHead(node *&head)
{
  //If linked list empty then return
  if (head == NULL)
  {
    return;
  }

  //Delete at head
  //To delete at head, make a temporary pointer that points to next node after head node
  //Delete head node
  //Make head point to temp node
  node *temp = head->next;
  delete head;
  head = temp;
}

void deleteAtTail(node *&head)
{
  //If empty list
  if (head == NULL)
  {
    return;
  }
  if (head->next == NULL)
  {
    delete head;
  }
  node *secondLast = head;
  while (secondLast->next->next != NULL)
  {
    secondLast = secondLast->next;
  }
  delete secondLast->next;
  secondLast->next = NULL;
}

void deleteInMiddle(node *&head, int pos)
{
  //If linked list empty then return
  if (head == NULL)
  {
    return;
  }
  //If pos=0 then delete node from the starting
  else if (pos == 0)
  {
    deleteAtHead(head);
  }
  //If pos is greater than length of linked list then delete from the end
  else if (pos > lengthOfList(head))
  {
    return;
  }
  else if (pos == lengthOfList(head))
  {
    deleteAtTail(head);
  }
  //Delete the node after the given position
  else
  {
    node *l = head;
    node *temp;
    for (int i = 0; i < pos - 1; i++)
    {
      l = l->next;
    }
    temp = l->next;
    l->next = temp->next;
    delete temp;
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
  insertAtHead(head, 7);
  insertAtHead(head, 6);
  insertAtHead(head, 5);
  insertAtHead(head, 4);
  insertAtHead(head, 3);
  insertAtHead(head, 2);
  insertAtHead(head, 1);
  insertAtHead(head, 0);
  insertAtHead(head, -1);
  printList(head);
  deleteAtHead(head);
  printList(head);
  deleteAtTail(head);
  printList(head);
  deleteInMiddle(head, 2);
  printList(head);
  deleteInMiddle(head, 0);
  printList(head);
  return 0;
}