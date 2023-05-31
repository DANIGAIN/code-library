/*

    problem : Path sum  calcualtion : -- .

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


int findPathSum(Node *root ,int pathSum)
{
	if(root == NULL)
	{
		return  0;
	}
	pathSum  =  10 * pathSum + root->data ;
	if(root->left == NULL && root->right == NULL)
	{
		return pathSum;
	}
	return (findPathSum(root->left , pathSum) + findPathSum(root->right ,pathSum));
}
int main()
{

    Node *root = newNode(3);
    root->left = newNode (7);
    root->right = newNode(1);
    root->left->left  = newNode(9);
    root->right->left = newNode(4);
    root->right->right = newNode(5);
	int ans = findPathSum(root, 0);

	cout<<ans <<'\n';



}