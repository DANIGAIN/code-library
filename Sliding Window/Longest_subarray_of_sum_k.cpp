
#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Longest sub array sum k 

   Algorithm :Array

   problem Description : 

    => input a[] = { 4,1,1,1,2,3,5} 

    k = 5 

    {4,1} = 5 
    {1,1,1,2} = 5 
    {2,3} = 5 
    {5} = 5 

    Out Put : 4 
    return sub array size  longest 


   worst case time complexity : 

   Time :  O(n)

   Space : O(1)


*/

int32_t main()
{

	int a[] = { 4,1,1,1,2,3,5}  ;
    int n = sizeof(a)/sizeof(a[0]);
	int k = 5 , sum = 0 ;
	int i = 0 ,j= 0 ; 
	int mx = 0 ;
	while(j< n)
	{
		sum += a[j] ;
	    if(sum < k )
	    {
	    	j++ ;
	    }
	    else if(sum == k)
	    {
	    	mx = max(mx , j-i +1);
	    	j++ ;
	    }
	    else if(sum > k)
	    {
	    	while(sum > k) 
	    	{
	    		sum -= a[i] ;
	    		i++ ;
	    	}
	    	j++ ;
	    }

	}

	cout<<mx <<endl ;


   return 0 ;
}