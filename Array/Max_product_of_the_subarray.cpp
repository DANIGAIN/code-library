#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Max product of the sub array 

   Algorithm :Array

   problem Description : 

    =>  arr[] = {2,3,-2,4}
    ans = 6 

*/

int32_t main()
{

   int a[] = {2,3,-2,4};
   int n = 4;

   int mx = 1 ;


   //--------------------------- brute forse solution ----------------------------------//


   // for(int i = 0 ;i< n;i++)
   // {
   // 	   for(int j = i ;j<n;j++)
   // 	   {
   // 	   	   int pro = 1 ;
   // 	   	   for(int k = i ;k<=j ;k++)
   // 	   	   {
   //            pro *= a[k];
   // 	   	   }
   // 	   	   mx = max(mx , pro);

   // 	   }
   // }
   // cout<<mx <<endl ;


   // time :  O(N^ 3)
   //space : O(1)


    //--------------------------- better solution -------....----------------------------//



   // for(int i = 0 ;i< n;i++)
   // {
   // 	   int pro = 1 ;
   // 	   for(int j = i ;j<n;j++)
   // 	   {
   // 	   	   pro *= a[j];
   // 	   	   mx = max(mx , pro);

   // 	   }
   // }
   // cout<<mx <<endl ;


   // time :  O(N^ 2)
   //space : O(1)


    //--------------------------- optimal  solution 1  obserbation base -------------------------------//

    // if 1 . all positive
    //    2.  even number of negetive  do all product
    //    3 . odd number of  negetive elemeninite  max nagegive
    //    4.  if 0 exist resete on   


    int pre = 1 ;
    int suff = 1 ;

    for(int i = 0 ;i< n ;i++)
    {
    	 if(pre == 0 ) pre =1 ;
    	 if(suff == 0) suff = 1 ;


    	 pre *= a[i] ;
    	 suff *= a[n-i-1] ;


    	 mx = max(mx , max(pre, suff));


    }  

    cout<<mx <<endl ;



    // time :  O(N)
    //space : O(1)

    //--------------------------- optimal  solution 2 using Kadane’s Algorithm  not check-------....----------------------//


  
   // for(int i = 0 ;i< n ;i++)
   // {
   	    
   // 	    pro *= a[i];
   // 	    mx = max(mx ,pro);
   // 	    if(pro < 0 ) pro = 0 ;
   	   
   // }
   // cout<<mx <<endl;


   return 0 ;
}