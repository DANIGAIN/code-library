#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Remove Duplicates in-place from Sorted Array

   Algorithm : Array

   problem Description : 

    => 
     Input: arr[1,1,2,2,2,3,3]

     Output: arr[1,2,3,_,_,_,_]

     //------------------------------------------ brute force solution ---------------------//

     use set 

     worst case time complexity : 

    Time complexity: O(n*log(n))+O(n)

    Space Complexity: O(n) 

  

*/

int32_t main()
{
    int  a[] = {1,1,2,2,2,3,3} ;

     // -------------------------------------------- optimal ---------------------------------//

    int n = 7 ;
    int j = 0;
    for(int i = 1 ;i<n ;i++)
    {
    	if(a[i] != a[j])
    	{
    		j++ ;
    	}
    	a[j] = a[i] ;
    }

    for(int i = 0 ;i< j+1 ;i++)cout<<a[i]<<" ";


   /*
        Time complexity: O(n)

       Space Complexity: O(1)

   */





   return 0 ;
}