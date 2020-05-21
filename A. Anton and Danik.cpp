#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	int n ;
	cin >> n ;
	string s ;
	cin >> s ;
	int countA = 0, countB = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		if(s[i] == 'A')
		{
			countA++ ;
		}
		else
		{
			countB++ ;
		}
	}
	if(countA > countB)
	{
		cout << "Anton" ;
	}
	else if(countB > countA)
	{
		cout << "Danik" ;
	}
	else
	{
		cout << "Friendship" ;
	}
	
}
