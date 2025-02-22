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
int main()
{
	int n;
	cin >> n;
	pattern7(n);
	pattern8(n);
	pattern9(n);
	return 0;
}