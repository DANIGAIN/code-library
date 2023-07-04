#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Set Matrix Zeroes

   Algorithm :Array

   problem Description : 

    => 


    1 1 1 1 1

    1 1 0 1 1

    0 1 1 1 1 


    1. matrix value is 0 and 1 

    2. your task is to set zero row and cal that is zero 


    output:

    0 1 0 1 1

    0 0 0 0 0

    0 0 0 0 0


*/

int a[4][6] ={
      {1,1,1,1,1},
      {1,1,0,1,1},
      {0,1,1,1,1}};

int  n = 3 ,m = 5 ;

void changecol(int j)
{
   for(int  i = 0 ;i< n ;i++){

      if(a[i][j] != 0)
      {
         a[i][j] = -1 ;
      }
   }
}


void changerow(int i)
{
   for(int  j = 0 ;j< m ;j++){

      if(a[i][j] != 0)
      {
         a[i][j] = -1 ;
      }
   }
}

int32_t main()
{

  

   


	//------------------------------------brute fourse solution -------------------//

   // for(int i = 0 ;i<n ;i++){
   //    for(int j = 0 ; j< m ;j++){

   //       if(a[i][j] == 0)
   //       {
   //          changerow(i);
   //          changecol(j);
   //       }
   //    }
   // }


   // for (int i = 0 ;i< n ;i++)
   // {
   //    for(int j = 0 ;j< m ;j++)
   //    {
   //       if(a[i][j] == -1)
   //       {
   //          a[i][j] = 0 ;
   //       }
   //    }
   // }



   // time : O(n * m) + O(N + M) + O( n * M )

   // space : O(1)
   




   //-------------------------------- better solution -----------------//

   
   // int row[n+1] = {0};
   // int col[m+1] = {0};



   // for(int i = 0 ;i< n  ;i++)
   // {
   //    for(int j = 0 ;j< m ;j++)
   //    {
   //       if(a[i][j] == 0)
   //       {

   //          row[i] = 1 ;
   //          col[j] = 1 ;
   //       }
   //    }
   // }


   // for(int i = 0 ;i< n ;i++)
   // {
   //    for(int j = 0 ;j< m ; j++)
   //    {
   //       if(col[j] == 1 || row[i] == 1)
   //       {
   //          a[i][j] = 0 ;
   //       }
   //    }
   // }

   // Time : O(n * m) + O(n*m)

   // spase : O(n) + O(m)






   //------------------------------------ optimal solution----------------------------//

   
   int col0 = 1 ;

   for(int i = 0 ;i< n ;i++)
   {
      for(int j = 0 ;j<m ;j++)
      {
         if(a[i][j] == 0)
         {
            if(j != 0 )
               a[0][j] = 0 ;
            else 
               col0 = 0 ;
            a[i][0] = 0 ;
         }
      }
   }


   
   for(int i = 1 ;i< n  ;i++)
   {
      for(int j = 1;j< m ;j++)
      {
         if(a[0][j] == 0  || a[i][0] == 0)
           {
              a[i][j] = 0 ;
           }
      }
   }


 



    if(a[0][0] == 0) {
      for(int j = 0 ;j< m ; j++) {
            a[0][j] = 0;
         }
   }


      if(col0 == 0){
      for(int i = 0 ;i< n ; i++){
            a[i][0] = 0  ;
       }
    }





    //------------------------------------print matrix ------------------------------//


    for(int i = 0 ;i< n ;i++){

      for(int j = 0 ; j < m ;j++){
         cout<<a[i][j]<<" ";
      }

      cout<<endl;
    }


   return 0 ;
}