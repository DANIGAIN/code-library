#include <bits/stdc++.h>
using namespace std;

void init_code() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

long long findnCr(int n , int r){
	long long ans = 1;
	for(int i = 0 ; i< r ; i++){
		ans *=  (n - i);
		ans /= i+1; 
	}
     return ans ;
}
std::vector<int> makeCol(int r){
	std::vector<int> tamp;
	tamp.push_back(1);
	int ans = 1 ;
    for(int i= 1 ; i< r ; i++){
        ans *= (r - i);
        ans /= i;
        tamp.push_back(ans);
    }
    return tamp;
}
int32_t main() {
    init_code();
    int n = 5;
    int r = 5;
    int c = 3; 
    //variation 1
    cout << findnCr(r,c) << endl;

    //variation 2
    std::vector<int> ans = makeCol(r);
    for(int value : ans){
    	cout << value << " ";
    }
    cout << endl;

    //variation 3
    std::vector<std::vector<int> > actualAns;

    for(int i = 0 ; i < n ; i++){
        actualAns.push_back(makeCol(i+1));
    }

    for(auto value : actualAns){
    	for(int result : value){
            cout << result << " ";
    	}
    	cout << endl;
    }





    return 0;
}