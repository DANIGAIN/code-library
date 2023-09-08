
#include<bits/stdc++.h>
using namespace std ;

void swap1(int a, int b) {
	int tamp = a;
	a = b;
	b = tamp;
}

void swap2(int* a, int* b) {
	int tamp = *a;
	*a = *b;
	*b = tamp;
}


void swap3(int& a, int& b) {
	int tamp = a;
	a = b;
	b = tamp;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    // int x  = 10 ;

    // cout<<&x<<'\n'; //address of x 

    // int *ptr = &x;

    // cout<<ptr <<'\n';

    // cout<<*ptr<<'\n'; //dereference operator...


    // null pointer --------->>
    // *ptr = NULL ;
    // cout<<x <<endl;


     // array pointer --------->>

     // int a[] = {1, 2, 3, 4, 5};

     // for (int i = 0; i < 5; i++) {
     // 	cout << &a[i] << '\n';
     // }

     // cout << '\n';

     // int* ptr;

     // ptr = a;

     // cout << ptr << '\n';

     // ptr += 3;

     // cout << *ptr << '\n';


    // Call by Value vs Call by Reference

    int a = 10;
    int b = 20;

    // swap1(a, b);

    // cout << a << " " << b << '\n';

    // swap2(&a, &b);

    // cout<< a << " " << b << '\n';
 
    swap3(a, b);

    cout<< a << " " << b << '\n';

 
	return 0 ;
}
