#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Re arranging array Element 

   Algorithm : Array

   problem Description : 

    =>  a[] = {3,1,-2,-5,2,-4}

    1. ofter rearrangeing  ->

    =>  a[] = {3,-2,1,-5,2,-4} 



*/

int32_t main()
{

    int  a[] = {3,1,-2,-5,2,-4} ;

    int n = 6 ;

	//----------------------------------------------------   brute forse solution ------------------//
    
    int pos[n/2] ;
    int neg[n/2] ;
    int y = 0 ;
    int z = 0 ; 
    for(int i = 0 ;i< n ;i++)
    {
    	if(a[i]< 0)
    	{
           neg[y++] = a[i];
    	}else 
    	{
    		pos[z++] = a[i] ;
    	}
    }

    for(int i = 0 ;i< n/2 ;i++)
    {
    	cout<<pos[i]<<" "<<neg[i]<<" ";
    }
    



   return 0 ;
}