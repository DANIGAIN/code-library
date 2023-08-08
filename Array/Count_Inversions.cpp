#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Count Inversions


   Algorithm : Array

   problem Description : 

    a[] = {5,3,2,4,1}

    count pair condintion a[i] > [j] , i < j

    {5,3}  {3,2} {2,1} {4,1}
    {5,2}  {3,1}
    {5,4}
    {5,1} 

    count ans = 8 




*/

//--------------------------------- brute force solution --------------//

int count(int a[] , int n)
{
	int c  = 0 ;
	  for(int i = 0 ; i< n-1 ;i++){
	  	   for(int j = i+1 ;j< n; j++){
               if(a[i] > a[j])c++;

	  	   }	
     }
     return c ;
}

//Time Complexity : O(N^2)

//Space Complexity :O(1)


 
//----------------------  optimal solution marge sort   ------------------------ //



int cnt = 0 ;

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
			cnt += (mid -left +1);
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


//Time Complexity :  O(n log n)
//Space Complexity : O(N)

int32_t main()
{
   int a[] = {5,3,2,4,1};
   int n = 5 ;

 

   mergeSort(a ,0 , n-1);
 
   cout<<cnt<<endl;

  return 0 ;
}
