#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	string s ;
	cin >> s ;
	int len = s.length() ;
	int countL = 0 ;
	int countS = 0 ;
	for(int i = 0 ; i < len ;i++)
	{
		if(s[i] >= 97)
		{
			countS++ ;
		}
		else if(s[i] < 97)
		{
			countL++ ;
		}
	}
	if(countL > len/2)
	{
		for(int i = 0 ; i < len ; i++)
		{
			if(s[i] >=97)
			{
				s[i] -= 32 ;
			}
		}
	}
	else if(countS >= len/2)
	{
		for(int i = 0 ; i < len ; i++)
		{
			if(s[i] < 97)
			{
				s[i] += 32 ;
			}
		}
	}
	cout << s ;
	
}
