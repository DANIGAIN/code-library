#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Majority Elements(>N/3 times)

   Algorithm : Moore’s Voting Algorithm


   problem Description : 

    => 
    Input Format: N = 5, array[] = {1,2,2,3,2}
    Result: 2

    thing is that n/3 = 2 element in reveive at max 5/ 2 = 2 ; 3 > 2  ; 3+3+3 = 9 but N = 5  

 


*/
//-----------------------------brute forse solution --------------//

// vector<int>  maxElement(std::vector<int> v , int n)
// {

// 	 vector<int> l;
// 	for(int i = 0 ;i< n;  i++)
// 	{
// 		if(l.empty() ||l[0]!=v[i])
// 		{
// 			int count = 0 ;
// 			for(int  j = 0 ;j< n;j++) count ++ ;

// 			if(count > v.size()/3)  l.push_back(v[i]) ;
// 		}

// 		if(l.size() == 2 ) break ;
//  	}
   
//    return l ;

// }
  
 //  worst case time complexity : 
 //  Time :  O(n^2)

 // Space : O(1)



//--------------------------------------  better solution ----------------------------------------//

 // vector<int> maxElement(std::vector<int> v, int n) 
 // { 

 //     map<int ,int > mp ;

 //     vector<int> ans ;

 //     for(int i =  0 ;i< n ;i++)
 //     {

 //     	mp[v[i]] ++ ;

 //     	if(mp[v[i]] == (n/3+1) )
 //     	{
 //     	    ans.push_back(v[i]) ;
 //     	}

 //     }
 //     sort(ans.begin(), ans.end());
 //    return ans;

 // }


// Time : Time Complexity: O(N*logN), where N = size of the given array.

// space : O(n) ;







//--------------- Optimal solution Moore’s Voting Algorithm --------------//

 vector<int> maxElement(std::vector<int> v, int n)
 {
 	int ele1 = -1 , count1 = 0 ;
 	int ele2 = -1,   count2 = 0 ;

 	for(int i = 0 ;i< n ; i++)
 	{
 		if(count1 == 0 && v[i] != ele2)
 		{
 			count1 = 1 ;
 			ele1 = v[i] ;
 		}
 		else if(count2 == 0 && v[i] != ele1)
 		{
 			count2 = 1 ;
 			ele2 = v[i] ;
 		}

 		else if(v[i] == ele1 ) count1++ ;
 		else if(v[i] == ele2) count2 ++ ;
 		else 
 		{
 			count1 -- ;
 			count2 -- ;
 		}
 	}


 	int c1 = 0 , c2 = 0 ;
 	for(int i = 0 ;i< n ;i++)
 	{
 		if(v[i] == ele1) c1++ ;
 		if(v[i] == ele2) c2 ++ ;
 	}


 	vector<int> ans ;

 	if(ele1 == ele2 ) ans.push_back(ele1);
	else 
	 {
	 	if(c1> n/3) ans.push_back(ele1);
 	    if(c2> n/3) ans.push_back(ele2) ; 
		sort(ans.begin() , ans.end());
	 }


 	sort(ans.begin() , ans.end());
 	return ans ;


 } 

 //Time Complexity: O(N) + O(N), where N = size of the given array.

 //Space Complexity: O(1) as we are only using a list that stores a maximum of 2 elements.



int32_t main()
{
    int  N = 6;
    std::vector<int> v = {11, 33, 33, 11, 33, 11};

    vector<int > ans = maxElement(v, N) ;

    for(auto x : ans)
    {
    	cout<<x<<" ";
    }

   return 0 ;
}