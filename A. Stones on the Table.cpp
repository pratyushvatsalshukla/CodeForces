#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	int  n, len, count = 0  ; 
	cin >> n ;
	string s ;
	cin >> s ;
	len = s.size() ;
	if(len!= n)
	{
		exit(0) ;
	}
	for(int i = 0 ; i < n ; i++)
	{
		if(s[i] == s[i+1])
		{
			count++ ;
		}
	}
	cout << count ;
	
}
