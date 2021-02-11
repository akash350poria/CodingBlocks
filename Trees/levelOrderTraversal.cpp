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

void printAtLevelK(node *root, int level)
{
  if (root == NULL)
  {
    return;
  }

  if (level == 1)
  {
    cout << root->data << " ";
    return;
  }
  printAtLevelK(root->left, level - 1);
  printAtLevelK(root->right, level - 1);
}

void levelTraversal(node *root)
{
  int height = treeHeight(root);
  for (int i = 1; i <= height; i++)
  {
    printAtLevelK(root, i);
    cout << endl;
  }
}

int main()
{
  node *root = createTree();
  levelTraversal(root);
  return 0;
}

//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1