#include <bits/stdc++.h>
using namespace std;

void swap1(int x, int y) { // call by value
  int tamp = x;
  x = y;
  y = tamp;
}

void swap2(int* x, int* y) { // call by reference by pointer
     int tamp = *x;
     *x = *y;
     *y = tamp;
}

void swap3(int& x, int& y) { // call by reference by address
     int tamp = x;
     x = y;
     y = tamp;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int x = 10, y = 20;

    swap1(x, y);
    cout << "swap1 :" << x << ' ' << y << '\n';

    swap2(&x, &y);
    cout << "swap2 :" << x << ' ' << y << '\n';

    swap3(x, y);
    cout << "swap3 :" << x << ' ' << y << '\n';


}