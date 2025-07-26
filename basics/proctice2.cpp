#include <bits/stdc++.h>
using namespace std;

void init_code() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int partision(int a[], int left , int right){
	int pivot = a[left];
	int i = left;
	int j = right;
    while(i < j){
    	while(a[i] <= pivot && i <= right -1){
    		i++;
    	}
    	while(a[j] > pivot && j <= left + 1){
    		j--;
    	}
    	if(i< j){
    		swap(a[i] , a[j]);
    	}
    }

    swap(a[left] , a[j]);
    return j ; 
}

void qs(int a[], int left, int right){
	if(left < right){	
	   int partisionIndex = partision(a, left, right);	
       qs(a , left , partisionIndex -1);
       qs(a , partisionIndex+1 , right);
	}
}

int32_t main() {
    init_code();
    
    int a[] = {5,2,1,3,4};
    int n = sizeof(a) / sizeof(a[0]);
    qs(a, 0 , n-1);
    for(int value: a){
    	cout << value << " ";
    }

    return 0;
}