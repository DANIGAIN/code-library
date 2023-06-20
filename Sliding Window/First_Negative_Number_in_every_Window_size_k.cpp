#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : First Negative Number in every Window of Size K

   Algorithm : Slideing window

   problem Description : 

    => input a[] = {12,-1,-7,8,-15,30,16,28};
     k = 3 
     {12,-1,7} = -1 
     {-1,-7,8,} = -1
     {-7,8,-15} = -7
     {8,-15,30} = -15 
     {-15,30,16} = -15
     {30,16,28}  = 0 

   output = {-1,-1,-7,-15,-15,0} ;



   worst case time complexity : 

   Time :  O(n)

   Space : O(2n)


*/

int32_t main()
{

	int  a[] = {12,-1,-7,8,-15,30,16,28};

    int  n = 8 ;
	int k = 3 ;

	vector<int> ans;
	list<int> l ;
	int i = 0 ,j = 0 ;
	while(j<n)
	{
		 if(a[j]<0)
		 {
		 	l.push_back(a[j]) ;
		 }


		 if(j-i+1 < k)
		 {
              j++ ;
		 }
		 else if(j-i+1 == k)
		 {

		 	if(l.size() == 0)
		 	{
		 		ans.push_back(0);
		 	}else
		 	{
		 		ans.push_back(l.front());

		 		if(a[i] == l.front())
		 	    {
		 			  l.pop_front() ;
		   	    }
		 	}


		 	 i++;
		 	 j++;
		 }
	}


	//  -------------------------------ans ------------------------//

	for(int i = 0 ;i< ans.size() ;i++)
	{
		cout<<ans[i]<<" ";
	}




   return 0 ;
}