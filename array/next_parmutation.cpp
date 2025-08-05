#include <bits/stdc++.h>
using namespace std;

void init_code() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
long long findPossableParmutation(int n){
    long long ans = 1;
    for(int i = 2; i<= n; i++) ans *= i;
    return ans;	
}
void allPossablePermutation(std::vector<int> &v, vector<vector<int>> &ans , int index){
    if(v.size() == index){
    	ans.push_back(v);
    	return ;
    }

    for(int i = index ; i < v.size() ; i++){
    	swap(v[index] ,v[i]);
    	allPossablePermutation(v, ans, index +1);
    	swap(v[index] ,v[i]);
    }
}

bool isVectorEqual(vector<int> v1, vector<int> v2){
	bool ok = true;
	for(int i = 0 ;i < v1.size(); i++){
		if(v1[i] != v2[i]){
			ok = false;
		}
	}
	return ok ;
}

int32_t main() {
    init_code();

    std::vector<int> v = {1,2,3};
    long long n = findPossableParmutation(v.size());
    vector<vector<int>> ans;

    std::vector<int> input = {1,2,3};
    allPossablePermutation(v, ans , 0);

    cout << "All permutation :"<< endl;
    for(auto x: ans){
    	for(auto y : x){
    		cout << y << " ";
    	}
    	cout<< endl;
    }

    cout << "Next permutation" << endl;
    bool flag = false ;
    for(int i = 0; i< ans.size(); i++){
    	// if(flag){
    	// 	for(int j = 0; j < ans.size(); j++){
    	// 	   cout << ans[i+1][j] << " ";
     //        }
    	// }
    	cout << flag << endl;
    	if(isVectorEqual(input, ans[i])){
    		flag = true;
    	}
    }

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

   // cout << n << endl;


    return 0;
}