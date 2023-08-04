#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : marge overlapping sub interval

   problem link : 

   Algorithm : Array

   problem Description : 

     (1,3),(2,6),(8,9),(9,11),(8,10),(2,4),(15,18),(16,17)

     so solve is :

     (1,6)(8,11),(15,18)


*/

//--------------------------------- brute force solution --------------//
 // vector<vector<int>>  margeOverlappingSubInterval(vector<vector<int>>  v){

 // 	vector<vector<int>> ans ;

 //    sort(v.begin(),v.end());

 //    for(int i = 0 ;i< v.size();i++)
 //    {
 //    	int start = v[i][0];
 //    	int end = v[i][1];

 //    	if(!ans.empty() && end <= ans.back()[1])
 //    	{
 //    		continue ;
 //    	}

 //    	for(int j = i+1 ;j<v.size() ; j++)
 //    	{
 //    		if(v[j][0] <= end )
 //    		{
 //    			end = max(end ,v[j][1]);
 //    		}else {
 //    			break ;
 //    		}
 //    	}
 //    	ans.push_back({start,end});
 //    }
 // 	return ans ;

 // }




//Time Complexity : n log n +  O(2*n)
//Space Complexity : O(n);

 
//----------------------  optimal solution    ------------------------ //



 vector<vector<int>>  margeOverlappingSubInterval(vector<vector<int>>  v){

 	vector<vector<int>> ans ;

    sort(v.begin(),v.end());

    for(int i = 0 ;i< v.size();i++)
    {
    	 if(ans.empty() || ans.back()[1] < v[i][0])
    	 {
    	 	ans.push_back(v[i]);
    	 }
         else 
         {
         	ans.back()[1] = max(ans.back()[1], v[i][1]);
         }
    }
 	return ans ;

 }



//Time Complexity :
//Space Complexity :

int32_t main()
{

     vector<vector<int>> v
     {
     	{1,3},
     	{2,6},
     	{8,9},
     	{9,11},
     	{8,10},
     	{2,4},
     	{15,18},
     	{16,17}
     };
     
     vector<vector<int>> ans = margeOverlappingSubInterval(v);
     for(auto x : ans)
     {
     	for(auto r : x)
     	{
     		cout<<r<<" ";
     	}
     	cout<<endl;

     }

  return 0 ;
}
