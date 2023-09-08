#include <bits/stdc++.h>
using namespace std ;

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);

     //Declearation -->
     pair<int , double > p1 ;

     //initilization using pair --->>
     pair <int, double> p2 = {1,10.2};

     //accessing element ---->>
     cout << "p2.first : " << p2.first << '\n' << "p2.secened : " << p2.second << '\n' ;

     // Swapping two pairs--->
     pair<int, double> p3 = make_pair(42, 3.14);
     swap(p2, p3);

     cout<< "p2.first : " <<p2.first << '\n' << "p2.secened :" << p2.second << '\n'; 
     cout<< "p3.first : " <<p3.first << '\n' << "p3.secened :" << p3.second << '\n';
    
     //Array of parir--->>
     pair<int, int> porint[3];
     porint[0] = make_pair(1,2);
     porint[1] = make_pair(3,4);
     porint[2] = make_pair(5,6);

    //pair of pair---------->>
     pair<pair<int, int>, int> x = make_pair(make_pair(0, 1), 2);
     cout << "x.first.first: " << x.first.first << ", x.first.second: " << x.first.second << ", x.second: " << x.second << '\n';

     // Using tie to access the elements of a pair
     int x_val; double y_val;
     tie(x_val, y_val) = p2;
     cout << "x_val: " << x_val << ", y_val: " << y_val << '\n';

    
     


    
     return 0 ;
}