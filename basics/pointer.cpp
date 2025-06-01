#include <bits/stdc++.h>
using namespace std;

void init_code(){
  #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif  
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  init_code();
  int num = 10;
  cout << &num << endl; // output the address of a num;
  int* p; // Declearation a pointer variabel
  p = &num;
  cout << *p << endl;
  int a[3] = {1,2,3};
  p = &a[0];
  p++;
  cout << *p << endl;
  int x = 10 ;
  int& y = x;
  cout << y << endl;
  return 0;
}