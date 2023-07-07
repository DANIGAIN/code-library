#include <bits/stdc++.h>
using namespace std ;
/*
   problem name : Spiral Trabersal of the Mathrix

   Algorithm :Array

   problem Description :

    => print spiral formate .


*/


int32_t main()
{


	int a[6][7] =
	{
		{1, 2, 3, 4, 5, 6},
		{18, 19, 20, 21, 22, 7},
		{17, 28, 29, 30, 23, 8},
		{16, 27, 26, 25, 24, 9},
		{15, 14, 13, 12, 11, 10}
	};

	int n = 5 , m = 6 ;

	vector<int> ans;


	int left = 0  , right = m - 1 ;
	int top = 0 , bottom = n - 1  ;


	while (left <= right && top <= bottom)
	{
		for (int i = left ; i <= right ; i++)
		{
			ans.push_back(a[top][i]);
		}
		top++ ;

		for (int i = top ; i <= bottom ; i++)
		{
			ans.push_back(a[i][right]);
		}
		right-- ;

		if (top <= bottom) {

			for (int i = right ; i >= left ; i--)
			{
				ans.push_back(a[bottom][i]);
			}
			bottom-- ;
		}

		if (left <= right) {

			for (int i = bottom ; i >= top ; i--)
			{
				ans.push_back(a[i][left]);
			}
			left ++ ;
		}

	}

	//------------------------------ print ans ------------------------//


	for (auto x : ans)cout << x << " ";


	return 0 ;
}