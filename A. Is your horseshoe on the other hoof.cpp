#include <bits/stdc++.h> 
using namespace std ;
int main(){
	
	int s[4] ;
	for(int i = 0 ; i < 4 ; i++)
	{
		cin >> s[i] ;
	}
	sort(s,s+4) ;
	int count = 0 ;
	for(int i = 1 ; i <= 3 ; i++)
	{
		if(s[i-1] == s[i])
		{
			count++ ;
		}
	}
	cout << count ;
	
}
