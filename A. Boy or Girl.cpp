#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	string UserName ;
	cin >> UserName ;
	int length = UserName.length() ;
	int count = 0 ;
	for(int i = 0 ; i < length ; i++) 
	{
		for(int j = 0 ; j < length ; j++)
		{
			if(UserName[i] != UserName[j])
			{
				count++ ;
			}
		}
	}
	count /= length ;
	cout << count ;
	count += (length-count)/2 ;
	if(count%2 == 0)
	{
		cout << "CHAT WITH HER!" << count ;
		
	}
	else{
		cout << "IGNORE HIM!" << count ;
	}
	
}
