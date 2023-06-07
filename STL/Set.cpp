#include<bits/stdc++.h>
using namespace std ;



int main()
{
	//--------------------  string to set ----------------------//
	string s = "danigain";
	set<char> s1(s.begin(), s.end());
	


	//-----------------------insert data ------------------------//

	s1.insert({'p', 'x' , 'q'});


    //----------------------- find -----------------------------//
    auto it = s1.find('d');
     if (it != s1.end()) {

       cout << "d exists\n";
      }

      // -------------------- erase ---------------------------- //

      s1.erase('p');





	//------------------------ display ----------------------------//


	for(auto  it = s1.begin() ; it!= s1.end() ;++ it  )
	{
         cout<<*it <<' ';
	}


	return 0 ;
}