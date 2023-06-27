#include <bits/stdc++.h> 
#include <iostream>

using namespace std;


/*
     input  : 36

     1 * 36 
     2 * 18
     3 * 12
     4 * 9
     6 * 6 

     sqrt(36) -> 6
     so traverse  1 - sqrt(n)


     time : O(sqrt(n))

*/


int main() {
    int n;
    cin >> n;
    vector<int> v ;
    for(int i = 1 ;i<= sqrt(n);i++){
        if(n%i == 0){
            v.push_back(i);
            if(n/ i != i)
            {
                v.push_back(n/i);
            }
        }

    }

    sort(v.begin(), v.end());
    for(auto x : v)cout<<x<<" ";

    cout<<endl;
    return 0;
}