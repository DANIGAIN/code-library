#include <bits/stdc++.h>
using namespace std;
void pattern1(int n){
	cout << "p1:" << endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << "*";
		}
		cout << endl;
	}
}
void pattern2(int n){
	cout << "\np2:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void pattern3(int n){
	cout << "\np3:" << endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j <= i; j++){
			cout << j + 1;
		}
		cout << endl;
	}
}
void pattern4(int n){
	cout << "\np4:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << i + 1;
		}
		cout << endl;
	}
}
void pattern5(int n){
	cout << "\np5:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void pattern6(int n){
	cout << "\np6:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << j + 1;
		}
		cout << endl;
	}
}
void pattern7(int n){
	cout << "\np7:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n -i-1; j++){
			cout << " ";
		}
		for (int j = 0; j < i*2+1; j++){
			cout << "*";
		}
		for (int j = 0; j < n -i-1; j++){
			cout << " ";
		}
		cout << endl;
	}
}
void pattern8(int n){
	cout << "\np8:" << endl;
	for (int i = n-1 ; i >= 0; i--){
		for (int j = 0; j < n-i-1; j++){
			cout << " ";
		}
		for (int j = 0; j < i*2+1; j++){
			cout << "*";
		}
		
		for (int j = 0; j < n -i-1; j++){
			cout << " ";
		}
		cout << endl;
	}
}
void pattern9(int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n -i-1; j++){
			cout << " ";
		}
		for (int j = 0; j < i*2+1; j++){
			cout << "*";
		}
		for (int j = 0; j < n -i-1; j++){
			cout << " ";
		}
		cout << endl;
	}
	for (int i = n-1 ; i >= 0; i--){
		for (int j = 0; j < n-i-1; j++){
			cout << " ";
		}
		for (int j = 0; j < i*2+1; j++){
			cout << "*";
		}
		
		for (int j = 0; j < n -i-1; j++){
			cout << " ";
		}
		cout << endl;
	}
}
void pattern10(int n){
	cout << "\np10:" << endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i+1 ; j++){
			cout << "*";
		}
		cout<<endl;
	}
	for (int i = 1; i < n; i++){
		for (int j = 0; j < n-i ; j++){
			cout <<"*";
		}
		cout<<endl;
	}
}
void pattern11(int n){
	cout << "\np10:" << endl;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			cout << ((j+i)%2 == 0);
		}
		cout<<endl;
	}
}
void pattern12(int n){
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			cout <<j;
		}
		for (int j = 1; j <= (n-i)*2;j++){
			cout <<" ";
		}
		for (int j = i; j >= 1;j--){
			cout <<j;
		}
		cout<<endl;
	}
}
void pattern13(int n){
	int k = 1;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			cout <<k++<<" ";
		}
		cout<<endl;
	}
}
void pattern14(int n){
	for(int i = 1; i<= n; i++){
		for(int j =1;j<=i;j++){
			cout<<(char)(64+j);
		}
		cout<<endl;
	}
}
void pattern15(int n){
	for(int i = n; i>= 1; i--){
		for(int j =1;j<=i;j++){
			cout<<(char)(64+j);
		}
		cout<<endl;
	}
}
void pattern16(int n){
	for(int i = 1;i<= n; i++){
		for(int j =1;j<=i;j++){
			cout<<(char)(64+i);
		}
		cout<<endl;
	}
}
void pattern17(int n){
	for(int i = 1;i<= n; i++){
		for(int j =1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j =1;j<=i;j++){
			cout<<(char)(j+64);
		}
		for(int j =i-1 ;j>=1;j--){
			cout<<(char)(j+64);
		}
		cout<<endl;
	}
}
void pattern18(int n){
	for(int i = 1;i<= n; i++){
		for(int j =1;j<=i;j++){
			cout<<(char)(64 +j + n -i);
		}
		cout<<endl;
	}
}
void pattern19(int n){
	for(int i = 1;i<= n; i++){
		for(int j =1;j<=n-i+1;j++){
			cout<<"*";
		}
		for(int j =1;j<=(i-1)*2;j++){
			cout<<" ";
		}
		for(int j =1;j<=n-i+1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i = n;i>= 1; i--){
		for(int j =1;j<=n-i+1;j++){
			cout<<"*";
		}
		for(int j =1;j<=(i-1)*2;j++){
			cout<<" ";
		}
		for(int j =1;j<=n-i+1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void pattern20(int n){
	for(int i = n;i>= 1; i--){
		for(int j =1;j<=n-i+1;j++){
			cout<<"*";
		}
		for(int j =1;j<=(i-1)*2;j++){
			cout<<" ";
		}
		for(int j =1;j<=n-i+1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i = 2;i<= n; i++){
		for(int j =1;j<=n-i+1;j++){
			cout<<"*";
		}
		for(int j =1;j<=(i-1)*2;j++){
			cout<<" ";
		}
		for(int j =1;j<=n-i+1;j++){
			cout<<"*";
		}
		cout<<endl;
	}

}
void pattern21(int n){
   for(int i = 1; i<=n; i++){
      for(int j=1; j<= n; j++){
		if(i == 1 || i ==n || j == 1 || j == n){
			cout<<"*";
		}else{
			cout<<" ";
		}
	}
	cout<<endl;
   }
}
void pattern22(int n){
	for(int i=0; i<n*2-1; i++){
	   for(int j=0; j<n*2-1;j++){
		   int top =  i;
		   int left = j;
		   int right = (n*2-2) - j;
		   int bottom = (n*2-2)-i;
		   cout<<n-min(min(top ,left), min(right, bottom));
	   }
	   cout<<endl;
	}
}
int main()
{
	int n;
	cin >> n;
	pattern22(n);
	return 0;
}