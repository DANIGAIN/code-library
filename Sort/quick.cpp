#include <bits/stdc++.h>

using namespace std ;

/*

    arr[] = {4,6,2,5,7,9,1,3};

    quick sort is slitly better then merge sort because is space 

    stap 1 : 

      pick a pivot 


      pivot is -

        1. 1 st element in the array 
        2. last element in the array 
        3. mid element in the array 
        4. random element in the array 
     

     ex : pivot is 4  pik up pivod and plase it correct place 


     like {4,6,2,5,7,9,1,3}
                 4 
      smaller on the left geratteron the right 

      2 1 3 4 6 5 7 9 
      ----    ------- 

      Time Complexity best and avarage : O ( n log n)

      Time Complexity wast case : O ( n ^ 2 ) 

      Space Complexity : O( 1 ) 



*/

int quickfunction(int a[] ,int low , int heigh)
{
	int pivot = low ;
	int i = low ;
	int j = heigh ;

	while(i< j){

		while(a[i] <=  a[pivot] && i <= heigh) i++ ;
		while(a[j] > a[pivot] && j >= low ) j-- ;
		if( i< j) swap(a[i] , a[j]);
	}

	swap(a[j], a[pivot]);

	return j ;
}


void quickSort(int a[] , int low , int heigh){
	if(low < heigh)
	{
       int partInd =  quickfunction(a , low ,heigh);

       quickSort(a, low , partInd);
       quickSort(a, partInd+1 , heigh);
	}
}


int main()
{



    int a[] = {4,6,2,5,7,9,1,3};
    int n = 8 ;

    quickSort(a,0,n-1);

    for(int i = 0 ;i< n ;i++)
    {
    	cout<<a[i]<<" ";
    }
	return 0 ;
}