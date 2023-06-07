#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  queue<int> q;
  q.push(2);
  q.push(3);
  q.push(4);
  cout << q.front() << '\n';
  q.pop();
  cout << q.front() << '\n';
  cout << q.size() << '\n';
  cout << q.empty() << '\n';
  return 0;
}