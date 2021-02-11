#include <iostream>
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

void treeTraversal(node *root)
{
  if (root == NULL)
  {
    return;
  }

  cout << root->data << " ";
  treeTraversal(root->left);
  treeTraversal(root->right);
}

int main()
{
  node *root = createTree();
  treeTraversal(root);
  return 0;
}