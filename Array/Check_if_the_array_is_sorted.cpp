#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Check if the array is sorted

   Algorithm :Array

   problem Description : 

    =>   a[] = {1,2,3,1};

   worst case time complexity  [optimal solution]: 

   Time :  O(n)

   Space : O(1)


*/


bool isSort(int a[],int n)
{
	for(int i=1 ;i< n ;i++)
	{
		if(a[i-1]> a[i])
		{
			return false ;
		}
	}
	return true ;
}

int32_t main()
{
	int a[] = {1,2,3,4};
	bool ok = isSort(a,4) ;
	cout<<ok ;


   return 0 ;
}