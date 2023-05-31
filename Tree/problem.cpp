/*  
   solve -> 
 1. per-order/post-order/in-order  traverse 
 2. Count Node in BST 
 3. Count non leaf node in BST 
 4. count Leaf node  in BST 
 5. count Full node 
 6. count not FULL node 
 
 */


#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *left ;
	Node *right;
	
};

Node *newNode(int data)
{
	Node *tamp = new Node(); 
	tamp->data = data;
	tamp->left = NULL;
	tamp->right = NULL;
	return tamp ;
}
void preOrder(Node *root)
{
	if(root == NULL)
	{
	   return ;
	}
	cout<<root->data <<' ';
	preOrder(root->left);
	preOrder(root->right);
}
int CountNode(Node *root)
{
	if(root == NULL)
	{
	 	return  0;
	}
    return 1 + CountNode(root->left) + CountNode(root->right);
}
  
int CountNonLeafNode(Node *root)
{
	if(root == NULL)
	{
		return 0 ;
	}
	else if(root->left == NULL && root->right == NULL) return 0 ;
	else
    return 1+ CountNonLeafNode(root->left)  + CountNonLeafNode(root->right);
}

 
int CountLeafNode(Node *root)
{
	if(root == NULL)
	{
		return 0 ;
	}
	else if(root->left == NULL && root->right == NULL)
	{
		return 1 ;
	}
	else return CountLeafNode(root->left) + CountLeafNode(root->right);
}



int FullNode(Node *root)
{
	if(root == NULL)
	{
		return 0 ;
	}
	else if(root->left == NULL && root->right == NULL)
	{
		return 0 ;
	}
	else return  FullNode(root->left) + FullNode(root->right) + ((root->left != NULL && root->right != NULL)? 1 :0 );
}



int main()
{
	Node *root = newNode(10);
	root->left = newNode(11);
	root->right = newNode(12);
	root->left->left = newNode(1);
	root->left->right = newNode(2);
	preOrder(root);

	//___________ count all node _________ //

	int c = CountNode(root);
	cout<<"\n\nCount total Node : "<<c<<'\n';

    //___________ count non leaf node _____//

    int c1 = CountNonLeafNode(root);
    cout<<"\nNon leaf node : "<<c1<<'\n';


    //_______ count leaf node ____________//

    int c2 = CountLeafNode(root);
    cout<<"\nLeaf node : "<<c2<<'\n';


    //___  number of full Node  _______//

    int c3  = FullNode(root);
    cout<<"\nNumber of full node : "<<c3<<'\n';
    


    // time complexity : o(n)
    // space complexity wast cose : o(n) bast case : o(log n)



	
	return 0 ;

}