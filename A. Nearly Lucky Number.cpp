#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	long long int n ; 
	cin >> n ;
	long long int  alias = n ;
	long long int length = 0;
	while(alias != 0)
	{
		alias = alias/10 ;
		length++ ;
	}
	long long int countL = 0 ;
	while(n != 0)
	{
		if(n%10==7 || n%10==4)
		{
			countL++ ;
		}
//		else
//		{
//			cout << "NO" ;
//			exit(0) ;
//		}
		n = n/10 ;
	}

	while(countL >= 0)
	{
		if(countL%10 == 7 || countL%10 == 4)
		{
			
		}
		else
		{
			cout << "NO" ;
			exit(0) ;
		}
		countL = countL/10 ;
	}
	cout << "YES" ;
		
}
