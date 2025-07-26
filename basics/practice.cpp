#include <bits/stdc++.h>
using namespace std;

void init_code() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
void marge(int a[], int low, int mid, int high){
    std::vector<int> tamp;
    int i =  low;
    int j = mid + 1;

   while(i <= mid && j <= high){
   	  if(a[i] <= a[j]){
   	  	tamp.push_back(a[i]);
   	  	i++;
   	  }
   	  else
   	  {
   	  	tamp.push_back(a[j]);
   	    j++;
   	  }
   }

   while(i <= mid){
   	    tamp.push_back(a[i]);
   	  	i++;
   }

   while(j <= high){
   	    tamp.push_back(a[j]);
   	  	j++;
   }

   for(int i = low ; i <= high ; i++)
   {
   	   a[i] = tamp[i- low];
   }

}
void margeSort(int a[], int low ,int high){
	if(low < high){
		int mid = (low + high) / 2 ;
        margeSort(a, low , mid);
        margeSort(a, mid +1 , high);
        marge(a, low, mid , high);
	}
}

int32_t main() {
    init_code();

    int a[] = {5,2,1,3,4};
    int n = sizeof(a) / sizeof(a[0]);
    margeSort(a, 0 , n-1 );
    for(int value: a){
    	cout << value << " ";
    }

    return 0;
}