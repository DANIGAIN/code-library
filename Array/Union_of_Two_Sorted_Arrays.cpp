#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Union of Two Sorted Arrays

   Algorithm : Array

   problem Description : 

    => 

    Input:
    n = 5,m = 5.
    arr1[] = {1,2,3,4,5}  
    arr2[] = {2,3,4,4,5}
    Output:
     {1,2,3,4,5}


   //-------------------------------------- bruteforce approce ------------------------------- //
    use set 

    insert arr1 
    the insert arr2 




   worst case time complexity : 

   Time :  O(n1 log n + n2 log n) + o(n1+ n2)

   Space : O(n1 + n2) + 0(n1 +n2)




   //-------------------------------------- optimal solution  ------------------------------- //
             i
      a[] = {1,2,3,4,5} ;
      
             j 
      b[] = {2,3,4,4,5};

      vector store = min 





*/

int32_t main()
{
     int a[] = {1,2,3,4,5} ;
     int  b[] = {2,3,4,4,5};


   int n = 5 ,m = 5 ;

   //------------------------------------------------  bruteforce approce  ------------------- //
	// set<int> s;

	// for(int i = 0 ;i< n ;i++) s.insert(a[i]) ;
	// for(int i = 0 ;i< m ; i++) s.insert(b[i]) ;

   //  std::vector<int> v;
   //  for(auto x : s)
   //  {
   //  	v.push_back(x) ;
   //  }
  

   //---------------------------------------------------- optimal solution --------------------//
  std::vector<int> v;
  int i = 0 ,j = 0 ;
  while(i< n && j< m)
   {

      if(a[i] < b[j])
      {
            if(v.size() == 0 || v.back() != a[i])
            {
               v.push_back(a[i]);
            }
            i++ ;
      }else{


            if(v.size() == 0  || v.back() != b[j])
            {
               v.push_back(b[j]);
            }
            j++ ;
      }

   
   }

   // after extar elament of the array 1 

   while(i< n)
   {
      if(v.back() != a[i])
      {
          v.push_back(a[i]) ;
          
      }
      i++ ;

   }

   while(j < m)
   {
        if( v.back() != b[j]) 
        {
          v.push_back(b[j]) ;
       
        }
       j++ ;
   }

  //print vector --> 

  for(auto x : v) cout<< x <<" " ; 

   return 0 ;
}