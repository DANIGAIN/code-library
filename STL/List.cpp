#include <bits/stdc++.h>
using namespace std ;

void showList(list<int> l)
{
       list<int>::iterator it ; 

       for(it = l.begin() ; it!= l.end() ;it++)
       {
       	    cout<<*it<<" ";
       } 
}
int main()
{
	list<int> l ;
	list<int> l2{1,2,3,4,4};
	
    l.push_back(10);
    l.push_front(11);
    l.push_front(1);




	showList(l2);
	return 0 ;


}