#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Left Rotate an array by k place 

   Algorithm : Array

   problem Description : 


    => intput : 
      a[] = {1,2,3,4,5,6,7} ;
      n = 7; k = 3  ;
       => {4 5 6 7 1 2 3 

    but problem is k is more then large . 

     k = k % n ;
     then solve it
    
     brute force =

     stap 1: 
        tamp[] = {1,2,3} ;

     stap 2: 

     for(int i = k ;i<n ;i++)
     {
         arr[i-k] = arr[i] ;
     }
     stap 3: 

     int j = 0 ;
     for(int i = n-k ; i< n ;i++)
     {
         arr[i] = tamp[j++];
     }




     clean up code : 

     stap 1 
     stap 2 
     stap 3 : 
    for(int i = n-k ;i< n ;i++)
    {
       arr[i] = tamp[i-(n-k)];
    }

   worst case time complexity : 

   Time :  O(n +k)  = O(k) +O(n+k) + o(k) 

   extra  : O(k)   Space : O(n)


   //------------------------------------  --- optimal solution --- ------------------//

     => intput : 
      a[] = {1,2,3,4,5,6,7} ;
      n = 7; k = 3  ;
       => stap 1 :
             reverse(arr,arr+k) ;
             {3,2 ,1}
           stap 2: 
             reverse(arr+k, arr+n);
             {7,6,5,4}
           stap 3: 
             reverse(arr,arr+n);
             {4,5,6,7,1,2,3}

    worst case time complexity : 

   Time :  O(2n)  = O(k) +O(n-k) + o(n) 

   Space : O(1)

*/

int32_t main()
{
    int n = 7 ; int k = 3 ;
    int arr[] = {1,2,3,4,5,6,7}; 

      k = k % n ;
         
         // brute force --> 
         // int tamp[k+1] ;
         
         // for(int i = 0 ;i< k ;i++)
         // {
         //     tamp[i] = arr[i] ;
         // }
         // for(int i = k ;i<n ;i++)
         // {
         //     arr[i-k] = arr[i] ;
         // }
         // for(int i = n-k ;i< n ;i++)
         // {
         //    arr[i] = tamp[i-(n-k)];
         // }

        // optimal --> 

        reverse(arr,arr+k) ;
        reverse(arr+k, arr+n);
        reverse(arr,arr+n);




         //--------------------- out put -----------------//


         for(int i = 0 ;i< n;i++)cout<<arr[i] ;


   return 0 ;
}