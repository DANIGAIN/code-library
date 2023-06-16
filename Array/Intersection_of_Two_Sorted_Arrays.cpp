#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Intersection  of Two Sorted Arrays

   Algorithm :Array

   problem Description : 
 
     => 
     //-------------------------------------------- brute forch solution  -------------------//

      a[] = {1,2,2,3,3,4,5,6}
      b[] = {2,3,3,5,6,6,7}

      stap 1 :
         
         create a visited  vector[] = {0}

      step 2 :

          loop(0 -n)
             loop(0 - m)
                if(a == b && v ==  0)
                {
	               v = 1 ;
	               b.push(a);
	               brack ;
                }
      flow the code  : 

      worst case time complexity : 

      Time :  O(nm)

      Space : O(nm)


    //------------------------------------------ optimal solution -----------------------//
    solve the optimal approch -->
     a[] = {1,2,2,3,3,4,5,6}
     b[] = {2,3,3,5,6,6,7} 

     solve the two pointer approaches

     worst case time complexity : 

     Time :  O(n+m)

     Space : O(1)


*/

int32_t main()
{
    int  a[] = {1,1,3,3,3,4,5,6} ;
    int  b[] = {2,2,3,5,6,6,7} ; 
    int n = 8 ;
    int m = 7 ;
    int i  = 0 , j = 0 ;

    //-------------------------------------------- brute forch solution  ----------------------------//
    // std::vector<int> visited(m, 0);
    // std::vector<int> v;

    // for(int i = 0 ;i< n ;i++)
    // {
    //      for(int j = 0 ;j< m ; j++)
    //      {
    //      	  if(a[i] == b[j] && visited[j] == 0)
    //      	  {
    //      	  	 visited[j] =  1 ;
    //      	  	 v.push_back(a[i]);
    //      	  	 break ;
    //      	  }
    //      	  if(a[i] < b[j]) break ;
    //      }
    // }


    //---------------------------------------------- optimal solution ----------------------------- //
    std::vector<int> v;

    while(i< n && j< m )
    {
    	if(a[i] < b[j])
    	{
    		i++ ;
    	}
    	else if(a[i] > b[j])
    	{
    		j++ ;
    	}
    	else{
         v.push_back(a[i]);
         i++ ;
         j++ ;
    	}
    }
    for(auto x : v) cout<<x<<" ";


   return 0 ;
}