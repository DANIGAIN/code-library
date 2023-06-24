#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : 2 Sum 

   Algorithm : Array

   problem Description : 

    =>  a[] = {2,6,5,8,11}  target = 14 

        a+ b =  target 

       Two varity  of the output if it yes  or  find index or the a , b 
      

       Sort function time com : n log n



*/

int32_t main()
{
    int  a[] = {2,6,5,8,11}  ;
    int target = 14  ;
    int n  = 5 ; 
    //---------------------- brute fource solution ----------------------------//

    // int flag = 0 ;
    // for(int i = 0 ;i< n-1 ;i++){

    // 	for(int  j = i+1 ;j< n ;j++){
    		
    // 	    if(a[i]+a[j] == target){
    //           flag = 1 ;
    //           break  ;
    //       }
    // 	}
    // }

    // if(flag == 1 )
    //      cout<<"yes"<<endl;
    //   else 
    //      cout<<"No"<<endl ; 

    //Time : O(n^2);

 //-------------------------- better solution using hashing  -------------------//

   // map<int, int> mp;
   // int flag = 0 ;

   // for(int i = 0 ;i< n ;i++)
   // {
   // 	    int more = target - a[i];

   // 	    if(mp.find(more) != mp.end())
   // 	    {
   // 	    	 flag = 1 ;
   // 	    	 break;
   // 	    } 
   // 	    mp[a[i]] = i ;
   // }


   // if(flag) 
   // 	   cout<<"yes"<<endl;
   // 	else 
   // 	  cout<<"No"<<endl;


   //  time : O(n * log n)
   //  space : O(N)



 //---------------------------- Optimal solution  -------------------------//

   //  int i = 0 , j = n;

   //  int  flag =  0 ;

   //  while(i< j)
   //  {
   //       int sum = a[i] + a[j] ;

   //       if(sum == target)
   //       {
   //       	flag = 1 ;
   //       	break ;
   //       }
   //       else if(sum < target) i++ ;
   //       else j-- ;
   //  }

   // if(flag) 
   // 	   cout<<"yes"<<endl;
   // 	else 
   // 	  cout<<"No"<<endl;

   // time : O(n) + o(N log n);
   // space : O(1)




   return 0 ;
}