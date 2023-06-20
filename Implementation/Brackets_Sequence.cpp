#include <bits/stdc++.h>
#define ll long long 
#define N '\n'
using namespace std ;


bool isMatchingBrancket(string s)
{
	
	stack<char> stack ;

   for(char bracket : s)
   {
   	   if(bracket == '{' || bracket == '(' || bracket == '[') stack.push(bracket);

   	   else if(bracket == ')' || bracket == '}' || bracket == ']')
   	   {
   	   	   if(stack.empty() || (bracket == ')' && stack.top() !=  '(')  ||(bracket == '}' && stack.top() !=  '{')  ||(bracket == ']' && stack.top() !=  '[') ) 
   	   	   	{return false ;}

   	   	   stack.pop();
   	   }

   }

   return stack.empty() ;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    string s ;cin>>s ;
    bool ok = isMatchingBrancket(s) ;

    if(ok)
    {
    	 cout<<"YES"<<endl ;
    }else{

    	cout<<"NO"<<endl ;

    }
	return 0 ;
}