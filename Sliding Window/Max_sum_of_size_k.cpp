  #include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Max sub array sum  of window size k 

   Algorithm : Slideing  Window  ( fixed size window )

   problem Description : 

    => input a[] = {2,3,5,2,9,7,1}; k = 3 

        find max sum of window size k

        {2,3,5} = sum 
        {3,5,2} = sum 
        {5,2,9} = sum 
        {2,9,7} = sum 
        {9,7,1} = sum 
        mx = max(sum) ;

   worst case time complexity : 

   Time :  O( 3 * n)

   Space : O(1)


  //--------------------------- sliding window --------------------//
   

   step 1 :

       Get starting point  i 
       Get ending point  j 

       window size  : j - i +1

   Time complexity : O(n)
   Space : O(1)

*/


int32_t main()
{

    int  a[] = {2,3,5,2,9,7,1}; int  k = 3 ;
    int n = 7 ;

   //-------------------------------------------------------------------- brute forch ----------------------------------- //


    // int mx = 0 ;
    // for(int i = 0 ;i< n -k;i++)
    // {
    //     int sum = 0 ;
    //     for(int j = i ;j<i+k  ;j++)
    //     {
    //         sum += a[j] ;
    //     }
    //     mx = max(sum ,  mx);
    // } 
   

   // ----------------------------------------------  Slideing Window ----------------------------------------------------//
    int i = 0 ;
    int j = 0 ;
    int mx = 0 ;
    int sum = 0 ;
    while(j<n)
    {
      
        sum += a[j] ;

        if(j-i+1 < k)
        {
             j++ ;
        }
        else if(j-i +1 == k)
        {
            mx = max(mx , sum) ;
            sum -= a[i] ;
            i++;
            j++;
        }
    }


    cout<<mx <<endl ;

   return 0 ;
}