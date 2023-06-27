#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : sorting an array from 0s 1s ans 2s 

   Algorithm  : Array

   problem Description : 

    => 

    input  a[]  = {0,1,2,0,1,2,1,2,0,0,0,1} ;

    //----------------------------brute fource solution ----------------------//

    apply marge sort -->

    time complexity :  0 (nlog n)
    space complexity : o(n)

    // ----------------------- calculate frequency of the array --------------//

    for(int i = 0 ;i< n ;i++)
    {
	    if(a[i ] == 0 ) count ++ ;
	    else if(a[i] == 1 ) count1++ ;
	    else count2++ ;
    }


     int k  = 0 ;
    for(int i = 0 ;i< count ;i++) a[k++] = 0 ;
    for(int i = 0 ;i< count1 ;i++) a[k++] = 1 ;
    for(int i = 0 ;i< count2 ;i++) a[k++] = 2 ;

    Time : 0(n)  + o(N) = O(2N)

    Space : O(1)


    //------------------------------- optimal soluton -------------------------------//


    0 -------low -1  low -----mid-1 mid -----------high high+1 -----n 

    000000000000000  11111111111111 101100202010102020  22222222222222


    algo [mid  to high woking]

    Time Complexity : O(N) 

    Space Complesity : O(1)



*/

int32_t main()
{


   int a[]  = {0,1,2,0,1,2,1,2,0,0,0,1} ;
   int n = 12 ;
   int low = 0 , high = n-1  , mid = 0 ;
   while(mid <= high)
   {

        if(a[mid] == 0 )
        {
            swap(a[mid ], a[low]);
            mid ++ ;
            low++ ;
        }
        else if(a[mid] == 1) mid ++ ;
        else 
        {
             swap(a[mid] , a[high]);
             high -- ;
        }

   }


   for(auto x: a )
   {
      cout<<x <<" "; 
   }


   return 0 ;
}