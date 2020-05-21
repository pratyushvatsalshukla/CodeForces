#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	string s ;
	cin >> s ;
	int length = s.length() ;
	if(s[0] >= 97)
	{
		s[0] -= 32 ;
		cout << s ;
	}
	else
	{
		cout << s ;
	}
	
}
