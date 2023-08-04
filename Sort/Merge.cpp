#include <bits/stdc++.h>

using namespace std ;

void merge(int a[] , int low , int mid , int high)
{
	std::vector<int>  tamp ;
	int left = low ;
	int right = mid +1 ;
	while(left<= mid && right <= high)
	{
		if(a[left] <= a[right])
		{
             tamp.push_back(a[left]);
             left++ ;
		}else 
		{
			tamp.push_back(a[right]);
			right++ ;
		}
	}


	while(left<= mid)
	{
		tamp.push_back(a[left]);
		left++ ;
	}

	while(right <= high)
	{
		tamp.push_back(a[right]);
		right++ ;
	}

	for(int i = low ; i<= high ; i++)
	{
		a[i] = tamp[i- low];
	}

}

void mergeSort(int a[] , int low, int high){

	if(low >= high) return ;
	int mid = (low + high) / 2 ; 
	mergeSort(a ,  low , mid);
	mergeSort(a , mid +1 , high);
	merge(a , low , mid , high);
}
int main()
{

	int a[] = {13, 46, 24, 52, 20, 9};

	int n = sizeof(a)/sizeof(a[0]);
    mergeSort(a, 0, n-1);


    for(int i = 0 ;i< n ;i++)
    {
    	cout<<a[i]<<" ";
    }
    

	//Time complexity: O(N log n ).
    //Space complexity: O(n)  
}