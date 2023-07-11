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

    time : O(r)


solution 2 : 

n = 5 
  
   1 4/1 4*3/1*2   4*3*2/1*2*3  1 

   forlula : (row - col) / col 

   time : O(n)

   space : O(1)


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

void printNth(int n )
{
    int ans = 1 ;

    cout<<ans <<" ";

    for(int i = 1 ;i< n ;i++)
    {
        ans *= (n - i);
        ans = ans /i ;
        printf("%d ", ans);
    }



}


std::vector<int>  printRow(int r)
{
    vector<int> row ;

    row.push_back(1) ;
    int ans = 1 ; 
    for(int i = 1 ;i<r ;i++)
    { 

        ans *= (r -  i );
        ans = ans /i ;
        row.push_back(ans);

    }
    return row ;
}

int32_t main()
{

	//-------------------------------------- solution 1 ---------------------------//


	// long long ans = funnCr(4,2);

	// cout<<ans <<endl ;

    //---------------------------------- problem 2 print any nth row ------------- //

    // printNth(5) ;


    //-------------------------------  solution 3 print spiral matrix --------------//


    int n = 6 ;
    vector<std::vector<int> > ans ;


    for(int i =1 ;i <= n ;i++) 
    {
        ans.push_back(printRow(i));
    }


    for(int i = 0 ;i< ans.size() ;i++)
    {
        for(int j = 0 ;j< ans[i].size() ; j++)
        {
            cout<<ans[i][j]<<" ";
        }

        cout<<endl ; 
    }










   return 0 ;
}