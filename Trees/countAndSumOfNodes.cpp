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

int countNodes(node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  int leftCount = countNodes(root->left);
  int rightCount = countNodes(root->right);

  return leftCount + rightCount + 1;
}

int sumNodes(node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  int leftSum = sumNodes(root->left);
  int rightSum = sumNodes(root->right);

  return leftSum + rightSum + root->data;
}

int main()
{
  node *root = createTree();
  cout << "Count of nodes: " << countNodes(root);
  cout << endl;
  cout << "Sum of nodes: " << sumNodes(root);
  return 0;
}

//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1