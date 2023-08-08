#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Count reverse pair

   Algorithm : Array

   problem Description : 

   Problem Statement: Given an array of numbers, you need to return the count of reverse pairs. Reverse Pairs are those pairs where i<j and arr[i]>2*arr[j].

   a[] = {40,25,14,9,6,2}

   so , 
   {40, 14}
   {40 ,9}
   {40 ,6}
   {40 ,2}
   {25,9}
   {25,6}
   {25, 2}
   {14,6}
   {14,2}
   {9,2}
   {6,2}
   


*/

//--------------------------------- brute force solution --------------//

// int count(vector<int> v)
// {
// 	int c = 1 ; 
// 	int n = v.size() ;
// 	for(int i = 0 ;i<  n -1; i++){
// 		for(int j = i+1 ; j <n  ; j++){ 
//        if(v[i] > v[j] * 2){
//        	c++ ;
//        	cout<<v[i]<<" "<<v[j]<<endl;
//        }
// 		}
// 	}

// 	return c ;
// }





//Time Complexity : O(N^2)
//Space Complexity : O(1)
 
//----------------------  optimal solution    ------------------------ //





void merge(vector<int> &a , int low , int mid , int high)
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

int calculation(vector<int> &a , int low, int mid ,  int high ){

   int right = mid +1 ;
   int count = 0 ;
   for(int i = low;i<= mid ; i++)
   {
   	    while(right <= high  && a[i] > 2*a[right])right ++;
   	    count += (right - (mid +1));
   }
   return count ;
}

int mergeSort(vector<int> &a , int low, int high){
	int count = 0 ;

	if(low >= high) return  count ;
	int mid = (low + high) / 2 ; 
	count += mergeSort(a ,  low , mid);
	count += mergeSort(a , mid +1 , high);

	 count += calculation(a, low,mid , high);
	 merge(a , low , mid , high);
	 return count ;
}


//Time Complexity :
//Space Complexity :

int32_t main()
{

  std::vector<int> v = {40,25,14,9,6,2};

  int ans = mergeSort(v, 0 , v.size()-1);

  //int ans = count(v);

  cout<<ans <<endl ;

  return 0 ;
}
