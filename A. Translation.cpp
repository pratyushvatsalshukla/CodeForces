#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	string s , t ;
	cin >> s >> t ;
	int len = s.length() ;
	int count = 0 ;
	for(int i = 0 ; i < s.length() ; i++)
	{
		if(s[i] == t[len-1-i])
		{
			count++ ;	
		}	
	}
	if(count == len)
	{
		cout << "YES" ;
	}	
	else
	{
		cout << "NO";
	}
}
