#include <iostream>
using namespace std ;
struct node
{
  int data;
  node *left;
  node *right;
};
class Btree
{
public :
    node *create();
    void postorder(node *t);
    void inorder(node *t);
    void preorder(node *t);

};
node *Btree :: create()
{
    Btree B;
    node *p;
    int x;
    cout<<"Enter data(-1 for no node):";
    cin>>x;

    if(x==-1)
	return NULL;

    p=new node;
    p->data=x;
    cout<<"Enter left child of "<<x<<":\n";
    p->left=B.create();
    cout<<"Enter right child of "<<x<<":\n";
    p->right=B.create();
    return p;
}

void Btree :: preorder(node *t)
{
  if(t!=NULL)
  {
    cout<<" "<<t->data;
    preorder(t->left);
    preorder(t->right);
  }
}
void Btree :: inorder(node *t)
{
  if(t!=NULL)
  {
    inorder(t->left);
    cout<<" "<<t->data;
    inorder(t->right);
  }
}
void Btree :: postorder(node *t)
{
  if(t!=NULL)
  {
    postorder(t->left);
    postorder(t->right);
    cout<<" "<<t->data;
  }
}
int main()
{
  node *root;
  Btree B;
  root=B.create();
  cout<<"\nThe preorder traversal of tree is: ";
  B.preorder(root);
  cout<<"\nThe inorder traversal of tree is: ";
  B.inorder(root);
  cout<<"\nThe postorder traversal of tree is: ";
  B.postorder(root);
  return 0;
}

