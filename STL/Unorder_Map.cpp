#include <bits/stdc++.h>
using namespace std ;

void printUmap(unordered_map<string , int> ump)
{
	for(auto x : ump)
	{
		cout<<x.first << ": "<<x.second <<endl ;
	}
}
int main()
{
	unordered_map<string ,int> ump;
	
    ump["sbc"] = 50 ;
	ump["dani"] = 0 ;
	ump["jibon"] = 100 ;
	ump["mou"] = 100 ;

    printUmap(ump); 


    //-------------------------------- insert data --------------------------//


    ump.insert(make_pair("kanu" , 74));
    cout<<'\n';
    printUmap(ump);


    //.................................find any data ....................//

    string s = "dani";

    if(ump.find(s) != ump.end())
    {

    	  auto tamp = ump.find(s);

          cout<<"found key :"<<tamp->first  <<" &&  value " <<tamp->second<<endl ;
        
    }else 
    {
    	cout<<"not found"<<endl ;
    }

    //------------------------------ delete  -------------------------------//

    ump.erase(s);
    cout<<'\n';
    printUmap(ump);


    //--------------------------- problem  --------------------------------//


    // counting occerence in the arrya  

    unordered_map<int,int> ump1;

    int a[] = {1,2,3,1,2,5,4,3,4,5};
    for(int x : a)
    {
       ump1[x]++ ;
   	}
   	for(auto x : ump1)
   	{
   		cout<<x.first <<" "<<x.second<<endl;
   	}




	return 0 ;


}