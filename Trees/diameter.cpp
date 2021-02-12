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

int treeDiameter(node *root)
{
  if (root == NULL)
  {
    return 0;
  }

  int lHeight = treeHeight(root->left);
  int rHeight = treeHeight(root->right);

  int op1 = lHeight + rHeight;
  int op2 = treeDiameter(root->left);
  int op3 = treeDiameter(root->right);

  return max(op1, max(op2, op3));
}

pair<int, int> fastTreeDiameter(node *root)
{
  pair<int, int> p;
  if (root == NULL)
  {
    p.first = p.second = 0;
    return p;
  }
  pair<int, int> lTree = fastTreeDiameter(root->left);
  pair<int, int> rTree = fastTreeDiameter(root->right);

  p.first = max(lTree.first, rTree.first) + 1;
  p.second = max(lTree.first + rTree.first, max(lTree.second, rTree.second));
  return p;
}

int main()
{
  node *root = createTree();
  //cout << treeDiameter(root);
  cout << fastTreeDiameter(root).second;
  return 0;
}

//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1