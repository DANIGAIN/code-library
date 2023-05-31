/*
     BFS -> Breadth-First Search  .

           Name : 1.Level Order Traversal 
                  2.Depth-First Search 



*/


#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data ;
	Node *left ;
	Node *right ;
};


Node *newnode(int data)
{
     Node *tamp = new Node();
     tamp->data = data;
     tamp->left = NULL;
     tamp->right = NULL;
     return tamp ;
}

int minimamDefth(Node *root)
{
	int defth = 0 ;
	queue <Node *> q ;
	if(root == NULL)
	{
		return 0 ;
	}
	q.push(root);
	while(!q.empty())
	{
		defth++ ;
		int size = q.size();
		for(int i = 0;i<size ;i++)
		{
			Node *cur = q.front();
			q.pop();
			if(cur->left == NULL && cur->right == NULL)
			{
				return defth;
			}
			if(cur->left != NULL)
			{
				q.push(cur->left);
			}
			if(cur->right != NULL)
			{
				q.push(cur->right);
			}
		}
	}
	return defth ;

}

void preorder(Node *root)
{
	if( root == NULL)
	{
		return ;

	}
	cout<<root->data <<' ';
	preorder(root->left);
    preorder(root->right); 
}
int main()
{

    Node *root = newnode(1);
    root->left = newnode(2);
    root->right =newnode(3);
    root->left->left = newnode(4);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    root->right->right->left = newnode(8);
	//preorder(root);
    cout<<'\n';


    //-------------------------- minimam defth of tree ---------------------//

    cout<<"\nBFS : "<<'\n';

    int x = minimamDefth(root);
    cout<<x<<'\n';

}


