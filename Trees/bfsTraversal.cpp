#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
  int data;
  node *left;
  node *right;
  node(int d)
  {
    data = d;
    left = right = NULL;
  }
};

node *createTree()
{
  int d;
  cin >> d;
  if (d == -1)
  {
    return NULL;
  }
  node *root = new node(d);
  root->left = createTree();
  root->right = createTree();
  return root;
}

void bfsTraversal(node *root)
{
  queue<node *> q;
  q.push(root);
  while (q.empty() != true)
  {
    node *current = q.front();
    cout << current->data << " ";
    q.pop();
    if (current->left)
    {
      q.push(current->left);
    }
    if (current->right)
    {
      q.push(current->right);
    }
  }
}

void bfs(node *root)
{
  queue<node *> q;
  q.push(root);
  q.push(NULL);
  while (q.empty() != true)
  {
    node *f = q.front();
    if (f == NULL)
    {
      q.pop();
      cout << endl;
      if (!q.empty())
      {
        q.push(NULL);
      }
    }
    else
    {
      cout << f->data << " ";
      q.pop();
      if (f->left)
      {
        q.push(f->left);
      }
      if (f->right)
      {
        q.push(f->right);
      }
    }
  }
}

int main()
{
  node *root = createTree();
  //bfsTraversal(root);
  //cout << endl;
  bfs(root);
  return 0;
}

//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1