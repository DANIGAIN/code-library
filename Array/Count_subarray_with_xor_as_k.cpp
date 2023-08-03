#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Count Subarray with xor as k 

   Algorithm :Array

   problem Description : 

    => array[] = {4, 2,2,6,4} k = 6


    {4,2} = 2
    {6} = 1 
    {2,2,6} = 3
    {4,2,2,6,4}  = 4

    ans = 4 (count)


    optimal solution :

    4 2 2 6 
    - -----
    x   K  

    x ^ K  = xr 

    x = xr ^ K 



*/

int32_t main()
{
    int  a[] = {4, 2,2,6,4} ,  K = 6 ;
    int n = 5 ;

    int count = 0 ;

    //-------------------------------------------------------brute forse solution -----------------------//


    // for(int i = 0 ;i< n ;i++)
    // {
    // 	for(int j = i ;j <n ; j++)
    // 	{
    // 		int sum  = 0 ;
    // 		for(int k = i ;k<=j ;k++)
    // 		{
    // 			sum ^= a[k] ; 
    // 		}
    // 		if(sum == K) count ++ ;
    // 	}
    // }

    //time : O(n^3)
    //space : O(1)


   //----------------------------------------------------better solution ---------------------------------//


    // for(int i = 0 ;i< n ;i++)
    // {
    // 	int sum = 0 ;
    // 	for(int j = i ; j< n ;j++)
    // 	{
    // 		sum ^= a[j];
    // 		if(sum == K)count ++ ;
    // 	}
    // }

    // time : O(n^2 )

    //space : O(1)
    //---------------------------------------------- most optimal solution -------------------------------//


    int xr = 0 ;
    map<int , int> mp ;

    mp[xr]++;

    for(int i = 0 ;i< n  ; i++)
    {
       xr ^= a[i];
       int x = xr ^ K ; 

       count += mp[x];
       mp[x]++ ;
    }






    //------------------------------------------------------- print --------------------------------------//

    printf("%d\n", count);

   return 0 ;
}