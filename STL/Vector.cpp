#include <bits/stdc++.h>
using namespace std ;
int32_t main()
{
	//get 5 block of memeory initialize 0 ---> 
    // vector<int> v(5);

    //get 5 block of memeory initialize 10 ---> 
     // vector<int> v(5, 10);
     
    //resize of the vector ------------------>
     // v.resize(10); //unknown block put then into 0 
     // v.resize(15, 1);//unknown block put then into 1


     //Assign new values to the vector
     // v.assign(5,10);


    // for(int i = 0; i < v.size(); i++) {
    // 	cout << v.at(i) << " ";
    // }
    //------------------------------------------------------ iterator -----------------------------------//
    // std::vector<int>v1({1,2,3,4,5});
    // std::vector<int>::iterator it = v1.begin();
    // it = it + 2;
    // cout << (*it) << '\n'; 


    vector<int> v({1, 2, 3, 4, 5,100,100}) , u({1,2});
   // vector<int>::iterator it1 = v.begin() + 1;
   // vector<int>::iterator it2 = v.end();
   // cout << (it2 - it1) << '\n'; // Output: 4



	// std::vector<pair<int , int>> v;

	// v.push_back({1,2});
	// v.push_back({2,3});
	// v.push_back({3,4});
	// v.push_back(make_pair(5,6)); //same

	// for (vector<pair<int , int>>::iterator it = v.begin(); it !=  v.end(); ++it )  {
	// 	cout << (*it).first  << ' ' << (*it).second << '\n';
 	// }

	// for(pair<int , int> it:v) {
	// 	cout << it.first << " " <<it.second <<'\n';
	// }

	// for(auto [x,y]: v) {     // this is call as structureal buinding ..........
	// 	cout<< x << ' ' << y << '\n';
	// }

	// reverse(v.begin()+1 , v.end()-1) ; 
  

    //instert vector -->>

    // v.insert(v.begin()+3, 100);


    //erase vector -->>
    // v.erase(v.end()-1);
    
    //swap vector ---->>
    // swap(u,v);
 
   //find of an element ---->
   // std::vector<int>::iterator it = find(v.begin() , v.end(), 100);

    // if(it != v.end()) {
   // 	cout << (it - v.begin())<< '\n';
   // }else {
   // 	cout << "Not found " << '\n';
   // }

   //count of the occord element --->>
   // int  c  = count(v.begin() , v.end(), 100);
   // cout << c << '\n';


    // min max element of the vector --->>

    int mx = *max_element(v.begin() , v.end());
    int mn = *min_element(v.begin() , v.end());

    cout << "min elment :" << mn << '\n';
    cout << "max elemnt :" << mx << '\n';

    //  for(vector<int>::iterator it = v.begin(); it != v.end() ;++it) {
    // 	cout<<(*it) << '\n';
    // }


	return 0 ;
}