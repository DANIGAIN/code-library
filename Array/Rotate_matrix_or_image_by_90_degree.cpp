#include <bits/stdc++.h>
using namespace std ;

/*
    problem name : Rotate Matrix by 90 degree 

    Algorithm :Array 

    problem discurtion : 

        =>

        Matrix: 

        1 2 3
        4 5 6
        7 8 9

        after : 

        7 4 1
        8 5 2
        9 6 3 

*/


int a[10][10] ={
      {1,2,3},
      {4,5,6},
      {7,8,9},
      {10,11,12}
  };

int  n = 4 ,m = 3 ;

int32_t main()
{


	//------------------------- brute forse solution --------------//

	// vector<vector<int>> ans(m, vector<int>(n,0));

	// for(int i = 0 ;i< n ;i++)
	// {
	// 	for(int j = 0 ; j < m ;j++)
	// 	{
    //         ans[j][n-i-1] = a[i][j];
	// 	}
	// }


	//------------------------------- optimal solution -----------------//


	//step 1 :  Transpose the matrix   ------>



	for(int i = 0 ;i< n-1 ;i++)
	{
		for(int j = i+1; j< n ;j++)
		{
			swap(a[i][j] , a[j][i]);
		}
	}


	for(int i = 0 ; i< m ;i++)
	{
		reverse(a[i] , a[i] + n);
	}




	//------------------------ print matrix -----------------------//


	for(int i = 0 ;i< m ;i++)
	{
		for(int j = 0 ;j< n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl ;
	}
	

 
	return 0 ;
}