#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  stack<int> st;
  st.push(2);
  st.push(3);
  st.push(4);
  cout << st.top() << '\n';
  st.pop();
  cout << st.top() << '\n';
  return 0;
}