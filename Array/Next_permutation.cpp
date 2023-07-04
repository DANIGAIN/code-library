#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : next permutation

   Algorithm :Array

   problem Description :

    =>  a[] = {3,1,2}


   //---------------- brute force solution -----------------------//

    stap 1 :

    Generate all the permutation --->

    {1 2 3}
    {1 3 2}
    {2 1 3}
    {2 3 1}
    {3 1 2}
    {3 2 1}


    all possable permutation  n!

    step 2 : then linear search

    step 3 : if the last one then first one


    wast case complexity :


       time : {n! * n}


    //---------------------------------------- better solution in use Stl ---------------------//


    next_permutation(A.begin() , A.end());



*/

int32_t main()
{


	//-------------------------------------- optimal solution -------------------------------//

	vector<int> a = {2, 1, 5, 4, 3, 0, 0};
	int n = a.size();
	int ind = -1;

	for (int i = n - 2 ; i >= 0 ; i--)
	{
		if (a[i] < a[i + 1])
		{
			ind = i ;
			break ;
		}
	}


	if (ind == -1 )
	{
		reverse(a.begin() , a.end());

	} else
	{
		for (int i = n - 1 ; i >= ind ; i--)
		{
			if (a[ind] < a[i])
			{
				swap(a[ind] , a[i]);
				break ;
			}
		}



		reverse(a.begin() + ind + 1, a.end());
	}





	cout << "The next permutation is: [";
	for (auto it : a) {
		cout << it << " ";
	}
	cout << "]n";


	return 0 ;
}