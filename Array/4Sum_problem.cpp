#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : 4 sum problem 

   Algorithm : Array

   problem Description : 

    =>  input a[] = {1,0,-1,0,-2,2}

        target = 0 

       [ i =! j != k != l]

       a[i] + a[j] +a[k] + a[l] = target 


    problem link : https://leetcode.com/problems/4sum/


*/

//--------------------------------- brute force solution --------------//

// vector<vector<int>> forSum(vector<int> a, int target){

// 	set<vector<int>> st ;
    
//     int n = a.size();

//     for(int i = 0 ;i< n ;i++)
//     {
//     	for(int j = i+1 ;j< n ;j++)
//     	{
//     		for(int k = j+1  ;k< n ;k++)
//     		{
//     			for(int l = k+1 ;l< n ;l++)
//     			{
//                     long long sum = a[i] + a[j] ;
//                     sum += a[k] ;
//                     sum += a[l] ;
//                     if(sum == target)
//                     {
//                        vector<int> tamp = {a[i] ,a[j] ,a[k] ,a[l]};

//                        sort(tamp.begin() ,tamp.end());
//                        st.insert(tamp);    
//                     }
//     			}
//     		}
//     	}
//     }

//     vector<vector<int>> ans(st.begin(),st.end());

//     return ans ;



// }


/*
    time : o(n^4)

   Space Complexity: O(2 * no. of the quadruplets) as we are using a set data structure and a list to store the quads.
   

*/


//---------------------------- better solution using hash  table ----------//


 // vector<vector<int>> forSum(vector<int> a, int target){


 //    set<vector<int>> st;
 //    int n = a.size();

 //    for(int i = 0 ;i< n ;i++)
 //    {
 //        for(int j = i+1 ;j<n ;j++)
 //        {

 //            set<long long> hasSet ;
 //            for(int k = j+1 ;k< n ;k++)
 //            {

 //                long long sum  = a[i] + a[j];
 //                sum += a[k];

 //                long long fourth = target - sum ;

 //                if(hasSet.find(fourth) != hasSet.end())
 //                {
 //                    std::vector<int> v = {a[i] , a[j] , a[k] , fourth};
 //                    sort(v.begin() ,v.end());

 //                    st.insert(v);
 //                }
 //                hasSet.insert(a[k]);
 //            }


 //        }
 //    }

 //    vector<vector<int>> ans(st.begin(), st.end());

 //    return ans ;
 //  }

  /*
   

       Time : O(n^ 3) + O(log m)

       Space : O(n) + (O(querdet) * 2 )
   


  */


//----------------------  optimal solution    -------------------------- //

 vector<vector<int>> forSum(vector<int> a, int target){

 sort(a.begin(), a.end());

 vector<vector<int>> ans;

 int n = a.size() ;

 for(int i = 0 ;i< n ;i++){
        if( i== 0 || (i > 0  && a[i] != a[i-1])){
            for(int j = i+1 ;j< n ;j++){
                if( j== i+1 || (j > i+1 && a[j] != a[j-1])){

                    int k = j+1 ;
                    int l = n-1 ;

                    while(k< l)
                    {
                        long long sum = a[i] + a[j] ;
                        sum += a[k] ;
                        sum += a[l] ;
                        if(sum == target)
                        {
                            vector<int> tamp = {a[i] ,a[j] ,a[k] ,a[l]};
                            ans.push_back(tamp);
                          

                            while(k<l && a[k] == a[k+1]) k++ ;
                            while(k< l  && a[l] == a[l-1]) l--;

                            k++ ; 
                            l-- ;
                          
                        }
                        else if(sum < target) k++;
                        else l-- ;
                    }
                    
                }
            }
        }
 }



 return ans ;


}

/*

  Time Complexity: O(N3), where N = size of the array.
  Space Complexity: O(no. of quadruplets), This space is only used to store the answer. We are not using any extra space to solve this problem. So, from that perspective, space complexity can be written as O(1).
*/




int32_t main()
{


    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;

	

    vector<vector<int>> ans = forSum(nums , target);


    for(auto  x : ans )
    {
    	  cout<<"[";
    	  for(auto y : x)
    	  {
               cout<<y<<" ";
    	  }
    	  cout<<"]"<<endl;
    }
   


   return 0 ;
}

