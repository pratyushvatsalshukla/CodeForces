#include<iostream>
using namespace std ;
int main(){
	
	int t ;
	cin >> t ;
	int countTime[t] ;
	for(int i = 0 ; i < t ; i++)
	{
		int h , m ;
		int minutes ;
		int hours ;
		cin >> h >> m ;
		minutes = 60 - m ;
		if(h != 23)
		{
			hours = 23 - h ;
		}
		else if(h == 23)
		{
			hours = 0 ;
		}
		countTime[i] = minutes + (hours*60) ;
	}
	for(int i = 0 ; i < t ; i++)
	{
		cout << countTime[i] << "\n" ;
	}
	
}
