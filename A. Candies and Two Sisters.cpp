#include<iostream>
using namespace std ;
int main(){
	
	int t ;
	cin >> t ;
	int count[t] ;
	for(int i = 0 ; i < t; i++)
	{
		int n ;
		cin >> n ;
		if(n%2 == 0 && n > 2)
		{
			count[i] = (n-1) - (n/2) ;
		}
		else if(n%2 == 1  && n!= 1)
		{
			count[i] = n/2 ;
		}
		else if(n <= 2)
		{
			count[i] =  0 ;
		}
	}
	for(int i = 0 ; i < t ; i++)
	{
		cout << count[i] << "\n" ;
	}
	
}
