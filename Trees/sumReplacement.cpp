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

int treeHeight(node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  int lTree = treeHeight(root->left);
  int rTree = treeHeight(root->right);

  return max(lTree, rTree) + 1;
}

int sumReplacement(node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  if (root->left == NULL and root->right == NULL)
  {
    return root->data;
  }
  int lSum = sumReplacement(root->left);
  int rSum = sumReplacement(root->right);

  int temp = root->data;

  root->data = lSum + rSum;

  return root->data + temp;
}

int main()
{
  node *root = createTree();
  cout << sumReplacement(root);
  return 0;
}

//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1