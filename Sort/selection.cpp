#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int a[] = {13,46,24,52,20,9};

	int n = 5 ;


	for(int i = 0 ;i< n-1 ; i++)
	{
		int min = i ;
		for(int j = i+1 ;j< n ; j++)
		{
			if(a[j] < a[min])
			{
				min = j ;
			}
		}

		swap(a[min], a[i]);
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
