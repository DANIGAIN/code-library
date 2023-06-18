#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Maximum Consecutive Ones

   Algorithm :Array

   problem Description : 

    => a[] = {1,1,0,1,1,1,0,1,1}

    ans : 3 
    
   worst case time complexity : 

   Time :  O(n)

   Space : O(1)


*/

int32_t main()
{
	int a[] = {1,1,0,1,1,1,0,1,1,1,1};
    int n = 11 ;
    int count = 0 ;
    int mx = INT_MIN ;
    for(int i = 0 ;i< n ;i++)
    {
    	if(a[i] == 0)
    	{
    		count = 0 ;
    	}else count ++;
    	mx = max(count ,mx) ;

    }
    cout<<mx <<endl ;



   return 0 ;
}