#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	int n ;
	cin >> n ;
	string s[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >>s[i] ;
	}
	int count = 0 ;
	for(int i = 0 ; i < n ;i++)
	{
		if(s[i][0] == 'I')
		{
			count = count + 20 ;
		}
		if(s[i][0] == 'C')
		{
			count = count + 6 ;
		}
		if(s[i][0] == 'O')
		{
			count = count + 8 ;
		}
		if(s[i][0] == 'D')
		{
			count = count + 12 ;
		}
		if(s[i][0] == 'T')
		{
			count = count + 4 ;
		}
	}
	cout << count ;
	
}
