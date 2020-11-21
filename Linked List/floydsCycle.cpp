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

void makeCycle(node *&head, int k)
{
  if (k > lengthOfList(head))
  {
    return;
  }
  node *ref = head, *temp;
  for (int i = 0; i < k; i++)
  {
    ref = ref->next;
  }
  temp = ref;
  while (temp->next)
  {
    temp = temp->next;
  }
  temp->next = ref;
}

/*
To detect a cycle take two pointers:
1. slow: makes a jump of 1
2. fast: makes a jump of 2
If at any point slow==fast then loop exists
*/

bool isCycle(node *head)
{
  if (head == NULL or head->next == NULL)
  {
    return false;
  }
  node *slow = head;
  node *fast = head;
  while (fast and fast->next)
  {
    fast = fast->next->next;
    slow = slow->next;
    if (slow == fast)
    {
      return true;
    }
  }
  return false;
}

/*
To remove cycle as soon as slow==fast move slow to head
Now iterate slow and fast both with jump of 1
Next time they meet it will be node from where loop begins
Now move either of slow and fast till one of them points to each other
Point the iterated node to NULL
*/

void removeCycle(node *&head)
{
  node *slow = head;
  node *fast = head;
  while (fast and fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
    {
      break;
    }
  }
  slow = head;
  while (slow != fast)
  {
    slow = slow->next;
    fast = fast->next;
  }
  while (fast->next != slow)
  {
    fast = fast->next;
  }
  fast->next = NULL;
}

int main()
{
  node *head;
  cin >> head;
  cout << head;
  makeCycle(head, 3);
  isCycle(head) ? cout << "Yes" : cout << "No";
  removeCycle(head);
  cout << endl;
  isCycle(head) ? cout << "Yes" : cout << "No";
  cout << endl;
  cout << head;
  return 0;
}