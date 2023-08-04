#include <bits/stdc++.h>

using namespace std ;

void insertion(int a[] , int i , int n)
{
	if(i == n ) return ; 

		int j = i ;
		while(j>0 && a[j-1] > a[j])
		{
			swap(a[j-1],a[j]);
			j--;
		}

	insertion(a, i+1 , n);
	
}



int main()
{

	int a[] = {13, 46, 24, 52, 20, 9};

	int n = sizeof(a)/sizeof(a[0]);

    insertion(a, 0 , n);

	for(int i = 0 ;i< n ;i++)
	{
		cout<<a[i]<<" ";
	}
    

	//Time complexity: O(N2), (where N = size of the array), for the worst, and average cases.
    //Space Complexity: O(1)
}