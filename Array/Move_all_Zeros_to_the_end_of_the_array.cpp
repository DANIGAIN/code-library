#include <bits/stdc++.h>
using namespace std ;
/*
   problem name :  Move all Zeros to the end of the array

   Algorithm : Array

   problem Description : 

    => 
    Example 1:
         Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
         Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0

       //------------------------------------ brute force soluton ---------------------------//
           stap 1 : 
              tamp [] = {1,2,3,4,1}
           stap 2:
              a[] = {1,2,3,4,1,0,0,0}


   worst case time complexity : 

   Time :  O(2n)

   Space : O(n)

      //------------------------------------ optimal solution ----------------------------------//

      Input: 
      1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
      1 ,2 ,0 ,3 ,0 ,4 ,0 ,1
      1 ,2 ,3 ,0 ,0 ,4 ,0 ,1
      1 ,2 ,3 ,4 ,0 ,0 ,0 ,1
      1 ,2 ,3 ,4 ,1 ,0 ,0 ,0

   worst case time complexity : 

   Time :  O(n)

   Space : O(1)

*/

int32_t main()
{

	int a[] = {1,2};
	int n = 2 ;

	//bruteforce solution --
    // std::vector<int> v;

    // int i  = 0,j = 0;
	// for(int i = 0 ;i< n;i++)
	// {
	// 	if(a[i] != 0)
	// 	{
    //        v.push_back(a[i]);
	// 	}		
	// }

    // for(int i = v.size() ;i<n ;i++) v.push_back(0); 
    
	// for(auto x : v) cout<<x<<" ";

	//-------------------------------------------  optimal solution -----------------------//

    int j = -1 ;

    for(int i = 0 ;i< n ;i++)
    {
    	if(a[i] == 0)
    	{
    		j = i ;
    		break ;
    	}
    }

    for(int i = j+1 ;i<n ;i++)
    {
    	if(a[i] != 0)
    	{
    		swap(a[i],a[j]) ;
    		j++ ;
    	}
    }

    for(int i = 0 ;i< n ;i++)cout<<a[i] <<" ";
	


   return 0 ;
}