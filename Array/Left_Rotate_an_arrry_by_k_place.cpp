#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Left Rotate an array by one place 

   Algorithm : Array

   problem Description : 


    => intput : a[] = {1,2,3,4,5} ;  n = 5; k = 10 ;

    but problem is k is more then large . 

     k = k % n ;
     then solve it

 
   worst case time complexity : 

   Time :  O(n)

   Space : O(n)


*/

int32_t main()
{
    int n = 5 ; int k = 100 ;
    int arr[] = {1,2,3,4,5} ; 

      k = k % n ;
         
         
         int tamp[k+1] ;
         
         for(int i = 0 ;i< k ;i++)
         {
             tamp[i] = arr[i] ;
         }
         for(int i = k ;i<n ;i++)
         {
             arr[i-k] = arr[i] ;
         }
         int x = 0 ;
         for(int i = n-k ; i< n ;i++)
         {
             arr[i] = tamp[x++];
         }



         //--------------------- out put -----------------//


         for(int i = 0 ;i< n;i++)cout<<arr[i] ;


   return 0 ;
}