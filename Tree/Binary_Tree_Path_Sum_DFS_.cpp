/*

    problem : Path sum .

*/

#include <bits/stdc++.h>
using namespace std ;
struct Node
{
	int data ;
	Node *left;
	Node *right;
};
Node *newNode(int data)
{
	Node* tamp  = new Node();
	tamp->data = data ;
	tamp->right= NULL ;
	tamp->left = NULL ;
	return tamp ;
}


bool hasPath(Node *root ,int sum)
{
	if(root == NULL)
	{
		return false ;
	}
	if(root->data == sum && root->left == NULL && root->right == NULL)
	{
		return true ;
	}
	return (hasPath(root->left , (sum -root->data)) || hasPath(root->right ,(sum - root->data)));
}
int main()
{

	Node *root = newNode(10);
	root->left = newNode(20);
	root->right = newNode(30);
	root->right->right = newNode(10);
	root->right->left= newNode(10);
	bool ans = hasPath(root, 50);

	cout<<ans <<'\n';



}