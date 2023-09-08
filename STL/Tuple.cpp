#include<bits/stdc++.h>
using namespace std ;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tuple<int , char , string> t ;
    t = make_tuple(1,'d',"Dani Gain");
    cout<<get<0>(t) << '\n' << get<1>(t) << '\n' << get<2>(t) << '\n';

    // Using tie to access the elements of a pair -->>
    int a;
    char b ;
    string c ;
    tie(a, b, c) = t;
    cout << a << '\n' << b << '\n' << c <<'\n'; 

	return 0 ;
}
