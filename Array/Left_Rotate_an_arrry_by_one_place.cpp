#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Left Rotate an array by one place 

   Algorithm : Array

   problem Description : 

    => intput : a[] = {1,2,3,4,5} ; 

    left rotate : {2,3,4,5,1};

    tamp = arr[0] ;

    arr[1] ____________ + tamp
 
   worst case time complexity : 

   Time :  O(n)

   Space : O(n)


*/

int32_t main()
{
    int n = 5 ; 
    int a[] = {1,2,3,4,5} ; 

    int tamp = a[0] ;
    for(int i = 1 ;i<n; i++)
    {
        a[i-1] = a[i] ;
    }
    a[n-1] = tamp ;



    for(int i = 0 ;i< n ;i++)
    {
      cout<<a[i] ;
    }

   return 0 ;
}