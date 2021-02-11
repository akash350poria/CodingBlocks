/*
PRE ORDER TRAVERSAL=> Root Left Right
IN ORDER TRAVERSAL=> Left Root Right
POST ORDER TRAVERSAL=> left Right Root

                8
              /   \
            10     3
          /  \      \
        1     6       14
            /   \    /
          9     7   13

Pre order = 8 10 1 6 9 7 3 14 13
In order  = 1 10 9 6 7 8 3 13 14
Post order= 1 9 7 6 10 13 14 3 8

For creating the above tree input = 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
*/

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

void preOrderTraversal(node *root)
{
  if (root == NULL)
  {
    return;
  }

  cout << root->data << " ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}

void inOrderTraversal(node *root)
{
  if (!root)
  {
    return;
  }
  inOrderTraversal(root->left);
  cout << root->data << " ";
  inOrderTraversal(root->right);
}

void postOrderTraversal(node *root)
{
  if (!root)
  {
    return;
  }
  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  cout << root->data << " ";
}

int main()
{
  node *root = createTree();
  cout << "Pre order: ";
  preOrderTraversal(root);
  cout << endl;
  cout << "In order: ";
  inOrderTraversal(root);
  cout << endl;
  cout << "Post order: ";
  postOrderTraversal(root);
  return 0;
}