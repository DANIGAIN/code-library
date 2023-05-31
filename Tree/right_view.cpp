/*

     problem : right view of the binary tree .


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
	Node * tamp = new Node();
	tamp->data = data ;
	tamp->left = NULL ;
	tamp->right = NULL ;

}

void preOrder(Node *root)
{
	if(root == NULL)
	{
		return ;
	}

	cout<<root->data<<' ';
	preOrder(root->left);
	preOrder(root->right);
}


vector<int> rightView(Node* root)
{
	vector<int> v ;
	if(root == NULL)
	{
		return v ;
	}
	queue<Node *>q ;
	q.push(root);
	while(!q.empty())
	{
		int size = q.size();
		for(int i = 0 ;i<size;i++)
		{
			Node *currnt = q.front();
		    q.pop();
		    if(i == size - 1)
		    {
		    	v.push_back(currnt->data);
		    }
		    if(currnt->left != NULL)
		    {
		    	q.push(currnt->left);
		    }
		    if(currnt->right != NULL)
		    {
		    	q.push(currnt->right);
		    }
		}

	}

	return v ;


 }
int main()
{
	Node *root = newNode(100);
	root->right = newNode(12);
	root->left = newNode(11);
	root->left->left = newNode(123);
	root->left->right = newNode(10);

	//preOrder(root);

	 vector<int> ans = rightView(root);

	for(auto value : ans)
	{
		cout<<value <<' ';
	}

	return 0 ;
}

