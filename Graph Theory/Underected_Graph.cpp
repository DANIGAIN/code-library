/*
by  the looking of the algotithm bfs & dfs -- >

n = node 
e = eage 

bast case complexity : 

Time :  O(e)

Space : O(n)


*/


#include <bits/stdc++.h>
using namespace std ;
int32_t main()
{
	char  edges[5][2] = {{'i','j'},{'k','i'},{'n','k'},{'k', 'l'},{'o','n'}};


    for(int i = 0;i< 5 ;i++)
    { 
	     for(int j = 0 ;j<2 ;j++)
	     {
		      cout<<edges[i][j]<<" ";
	     } 
	     cout<<endl ;
    }
	return 0 ;
}