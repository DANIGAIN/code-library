#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Find the Missing and Repeating Number

   Algorithm : Array

   problem Description :

   arr[] = {4,3,6,2,1,1}
   n = 6 
   we know that number appears  ->  1 to 6 

   1 2 3 4 5 6 

   missing -> 5 
   rep     -> 1 

   return {1,5}

*/


//---------------------------- better solution-------------------------//

// vector<int> check(vector<int> v){


//     int n = v.size();
// 	int hash[n] = {0};
// 	int rep = -1 ;
// 	int miss = -1 ;
// 	for(int i = 0 ;i< n ;i++){
// 		hash[v[i]]++;
// 	}

// 	for(int i = 1 ; i<= n ;i++)
// 	{
// 		if(hash[i] == 2)rep = i ;
// 		else if(hash[i] == 0) miss = i ;

// 		if(miss != -1 && rep != -1) break ;
// 	}

// 	return {rep , miss};
// }



//Time Complexity :O(2n)
//Space Complexity :O(n)
 
//----------------------  1 math  optimal solution    ------------------------ //


/*
    
    sum up to n natural number 1 to n   
        => sn = n * (n+1)/ 2
    sum up  n ^ 2   number  like 1 ^ 2 + 2 ^2 + 3 ^2 + 4 ^ 2 

        => s2n = n * (n+1 ) * (2n+ 1) / 6 

   let us  sum observation , 

      {4+3+6+2+1+1} - {1+2+3+4+5+6} = - 4 

      x - y = -4 

      x is the rep number 
      y is the missing number

      agin

      (4^2)+(3^2)+(6^2)+(2^2)+(1^2)+(1^2) - n * (n+1 ) * (2n+ 1) / 6 = 

      1^2 - 5 ^2  = -24 

      x^2 - y^2 = -24 

      (x + y ) (x - y) = -24 

      x+y = -24 / -4 

      x+ y =  6 
      x - y = -4 
     
   ------------------
     2x = 2    (add)
     x = 1 



     again  
       x + y = 6 
       y  = 6 -1 

       y = 5


       so missing number is --> 5 

       rep number is --> 1 

*/

vector<int> check(vector<int> v){

	long long  n = v.size();

	long long sn = n *(n+1)/ 2 ;
	long long s2n  = n *(n+1) * (2*n +1 )/ 6 ;

	long long s1 = 0 ,s2 = 0 ;

	for(int i = 0 ;i< n ;i++){
		s1+= v[i];
		s2+= ((long long)v[i] * (long long)v[i]);
	}

	long long xmy = s1 -sn  ;
	long long xqmyq = s2 -s2n  ;
	long long xpy = xqmyq /xmy ;

	int x = (xpy + xmy) /2 ;
	int y = xpy -x ;



	return {x ,y};

}


//Time Complexity : O(n)
//Space Complexity :O(1)





int32_t main()
{

	std::vector<int> v =  {4,3,6,2,1,1};

	vector<int> ans = check(v);

	for(auto x : ans)
	{
		cout<<x<< " "; 
	}

  return 0 ;
}
