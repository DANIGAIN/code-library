#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Count Subarray sum Equals K 

   Algorithm :Array

   problem Description : 

    =>

*/

int32_t main()
{
    int a[] = {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3 ; 
    int n = 10 ;

    int count = 0 ;


    //-------------------------------------- brute forse solution -----------------//
 
   //  for(int i = 0 ;i< n ;i++)
   //  {
   //  	for(int j = i ;j< n ;j++)
   //  	{
   //  		int sum = 0 ;

   //  		for(int k = i; k<=j ;k++) sum += a[k];
    		

   //  		if(sum == k)
   //  		{
   //  			count ++ ;
   //  		}
   //  	}
   //  }

   //  cout<<count<<endl ;


   //Time : O(n^ 3 );
   //space : O(1) ; 


    //--------------------------------------------- better solution -----------------------------------------------//


    // for(int i = 0 ;i< n ;i++)
    // {
    // 	int sum = 0 ;
    // 	for(int j = i ;j< n ;j++)
    // 	{
    // 		sum += a[j];
    // 		if(sum == k)
    // 		{
    // 			count ++ ;
    // 		}
    // 	}
    // }

    // cout<<count<<endl ;


    // time :0(n ^ 2)
    // space  : O(1)


     //----------------  optimal soluiton negative and positive number of input perfix sum is better Using Hashing--------------------//

     map<int ,int > mp ;
     int sum = 0 ;
     mp[0] = 1 ;

     for(int i = 0 ;i< n ;i++)
     {
         sum +=a[i];

         int r = sum - k ;
         count += mp[r];
         mp[sum] ++;
     }


     cout<<count <<endl;


   return 0 ;
}