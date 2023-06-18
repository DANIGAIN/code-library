  #include <bits/stdc++.h>
  using namespace std ;
  /*
     problem name : Find missing number in an array
  
     Algorithm :Array
  
     problem Description : 
  
      =>  a[] = {1,2,4,5} ;

      //------------------------------------- brute force --------------------//


  
     worst case time complexity : 
  
     Time :  O(nn)
  
     Space : O(1)
  
  
  */
  
  int32_t main()
  {

  	  int a[] = {1,2,4,5} ;
  	  int n = 5 ;

  	  //------------------------------------- brute force --------------------//
  	  // for(int i = 1 ;i<= N ;i++)
  	  // {
  	  // 	 int flag = 0 ;
  	  // 	 for(int j = 0 ;j< N-1  ;j++)
  	  // 	 {
  	  // 	 	  if(a[j] == i)
  	  // 	 	  {
  	  // 	 	  	 flag = 1 ;
  	  // 	 	  	 break ;
  	  // 	 	  }
  	  // 	 }
  	  // 	 if(flag == 0) cout<< i<<endl ;
  	  // }

     //--------------------------------- optimal solution 1 ( sum  ) ---------------------//


     /*
           full sum = n*(n+1)/2 ;

           fund array sum 

           return array sum - full sum 

           Time : O(N)

           space : O(1) 

     */

     // int sum = n * (n+1)/2 ;
     // int Asum = 0 ;
     // for(int x : a) Asum += x ;

     // cout<<sum -Asum <<endl;


     //----------------------------------- optimal solution 2 ( xor) -----------------------//

      /*
          Any two same nums is xor operation that the return 0 ;
          2^2 = 0 
          2^2^2 = 2
          2^2^2^2 = 0 ; 


         input :  a[] = {1,2,4,5} ;

         xor1 = (1^2^4^5)
         xor2 = (1^2^3^4^5)
         return xor1 ^ xor2 = 3 

          solve the  big int problem -->

           Time : O(N)

           space : O(1) 

     */
     int xor1 = 0 ;
     int xor2 = 0 ;
     for(int i = 0 ;i<n-1 ;i++)
     {
           xor1 ^=  (i+1) ;
           xor2 ^= a[i];
     }

     xor1 ^= n;

     cout<< (xor1^xor2) <<endl;




    

  
  
     return 0 ;
  }