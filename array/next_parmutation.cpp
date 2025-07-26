#include <bits/stdc++.h>
using namespace std;

void init_code() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
long long findNextPossableParmutation(int n){
    long long ans = 1;
    for(int i = 2; i<= n; i++) ans *= i;
    ans --;	
    return ans;	
}

int32_t main() {
    init_code();

    std::vector<int> v = {1,2,3,4};
    long long n = findNextPossableParmutation(v.size());

    // bool isExist =  next_permutation(v.begin(), v.end()) ;
    // int count = 1 ; 
    // do{
    //    cout << count << " :";	
    //    for(int value: v) {
    //    	   cout << value <<" ";
    //    }
    //    count ++;
    //    cout << endl;
    // }while(next_permutation(v.begin(), v.end()));

   cout << n << endl;


    return 0;
}