#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : 

        1. Given R and C  Tell me the element at that place  

            R = 5 , C = 3

            ans = 6 

        2 . print any nth row of the pascal Triange

           n = 5  

           ans = 1 4 6 4 1 


        3. Given nth of the row print the entire triangle : 

           n = 6 print entire triange :  


   Algorithm :Array

   problem Description : 

    =>     1
         1   1
       1   2   1
     1   3   3   1 
   1   4   6   4   1
 1   5   10  10  5   1

 n = 6 


Solution 1 :

     r = 5 , c = 3 ;

    r-1 
       C     = (n-1)C(r-1) = 4C2 = 6 

         c-1  

    nCr = n!/ r! * (n-r)!  


Solution 2 : 
   
           n = 5  

           ans = 1 4 6 4 1 

           1 4/1  4 *3 /1 *2  4*3*2/1 *2 *3  




*/

long long funnCr(int n,int r)
{

	long long ans = 1 ;
    for(int i = 0 ;i<r ;i++)
    {
    	ans = ans * (n-i) ; 

    	ans = ans /(i+1) ; 

    }
    return ans ; 
}

int32_t main()
{

	//-------------------------------------- solution 1 ---------------------------//


	long long ans = funnCr(4,2);

	cout<<ans <<endl ;


   return 0 ;
}