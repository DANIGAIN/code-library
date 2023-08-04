#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int a[] = {13,46,24,52,20,9};

	int n = 5 ;


   for(int i = n -1 ; i>= 0 ;i--)
   {
   	    for(int j = 0 ;j < i ; j++)
   	    {
   	    	if(a[j] >  a[j+1])
   	    	{
   	    		swap(a[j], a[j+1]);
   	    	}
   	    }
   }

	//------------------------------ print ------------------//


	for(int i = 0 ;i< n ;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0 ;

}

//  Time complexity: O(N^2), (where N = size of the array), for the best, worst, and average cases.

// Space Complexity: O(1)
