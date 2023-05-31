/*
    problem :


    Given a bianry tree and a node , find the level order successor of the given node in the tree .
    the level order successor is the node that appears right after the given node in the level order traversal .

*
    Output: 6


*/


#include <bits/stdc++.h>
using namespace std ;

struct Node
{
	int data ;
    Node *left ;
    Node *right ;
	
};

Node* newNode(int data)
{
    Node *tamp = new Node();
    tamp->data = data;
    tamp->right = NULL ;
    tamp->left = NULL ;
    return tamp ;
}

Node* level_Order_Successor(Node* root,int x)
{
    queue <Node *> q ;
	if(root == NULL)
	{
		return NULL ;
	}
	q.push(root);
	while(!q.empty())
	{
		    Node*  currnt = q.front();
		    q.pop();
		    if(currnt->left != NULL)
		    {
		    	q.push(currnt->left);
		    }
		    if(currnt->right != NULL)
		    {
		    	q.push(currnt->right);
		    }
		    if(currnt->data == x)
		    {
		    	break ;
		    }
	}
	return q.front();
} 
int main()
{
	Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->right->left = newNode(8);
    Node *ans = level_Order_Successor(root, 4);
    cout<<ans->data <<'\n';

	return 0 ;
}