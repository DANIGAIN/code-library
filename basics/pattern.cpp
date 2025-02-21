#include <bits/stdc++.h>
using namespace std;
int main(){
	int n ;cin>>n;
    cout<<"p1:"<<endl;
	for(int i=0; i< n; i++){
		for(int j=0;j<n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
    
	cout<<"\np2:"<<endl;
	for(int i=0; i< n; i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<"\np3:"<<endl;
    for(int i =0; i<n; i++){
	   for(int j=0; j<=i; j++){
           cout<<j+1;
	   }
	   cout<<endl;
	}

	cout<<"\np4:"<<endl;
    for(int i =0; i<n; i++){
	   for(int j=0; j<=i; j++){
           cout<<i+1;
	   }
	   cout<<endl;
	}

	cout<<"\np5:"<<endl;
    for(int i =0; i<n; i++){
	   for(int j=0; j<n-i; j++){
           cout<<"*";
	   }
	   cout<<endl;
	}

	cout<<"\np6:"<<endl;
    for(int i =0; i<n; i++){
	   for(int j=0; j<n-i; j++){
           cout<<j+1;
	   }
	   cout<<endl;
	}
	return 0;
}