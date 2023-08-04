#include <bits/stdc++.h>

using namespace std ;

void bubble(int a[] ,int n)
{

	    if(n== 1 ) return ; 

   	    for(int j = 0 ;j < n ; j++)
   	    {
   	    	if(a[j] >  a[j+1])
   	    	{
   	    		swap(a[j], a[j+1]);
   	    	}
   	    }
        bubble(a , n-1);
}

int main()
{
	int a[] = {13,46,24,52,20,9};

	int n = 6 ;


    bubble(a,n);

	//------------------------------ print ------------------//


	for(int i = 0 ;i< n ;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0 ;

}

//  Time complexity: O(N^2), (where N = size of the array), for the best, worst, and average cases.

// Space Complexity: O(1)
