#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Second Largest Element in an array

   Algorithm :Array

   problem Description : 

    => 
    input : a[] = {1,2,3,3,0,1} 
    n = 6 

    //---------------------------------------------- brutforce solution ---------------------//

    stap 1 : marge sort 
    stap 2 : 

     largest = a[n-1] ;
     for(i = n-2 ; i>= 0 ; i--)
     {
	     if(a[i] != largest )
	     {
	         print(secend largest) ;
	         break ;
	     }
     }



   worst case time complexity : 

   Time :  O(n log n) + 0(n)

   Space : O(1)


*/

int32_t main()
{


	int  a[] = {1,2,3,3,0,1}  ;
	int n = 6 ;

  	//--------------------------------------------  better solution  -----------------------//
	// int large  = INT_MIN ;

	// for(int i = 0 ;i< n;i++) large =  max(large , a[i]) ;
   //  int second = 0 ;
	// for(int i = 0 ;i<n ;i++)
	// {
	// 	if(a[i] > second  && a[i]  != large) second = a[i] ;

	// }

	


	/*
           worst case time complexity : 

           Time :  0(2n)

           Space : O(1)

	*/

	//--------------------------------------------  best solution  [optimal] -----------------------//

	 int second = 0 ;
	 int large = 0 ;
	 if(n <  2 ) return -1 ;
	for(int i = 0 ;i<n ;i++)
	{
		if(a[i]> large )
			{
				second = large ;
				large = a[i];
			}
	else	if(a[i] > second  && a[i]  != large)
		   {
		       second = a[i] ;

		   }

	}
	cout<<second <<endl;

	/*
           worst case time complexity : 

           Time :  0(n)

           Space : O(1)

	*/












   return 0 ;
}