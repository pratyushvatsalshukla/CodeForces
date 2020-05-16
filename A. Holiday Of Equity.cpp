#include <bits/stdc++.h>
using namespace std ;
int main(){
	
	int n ;
	cin >> n ;
	int burles[n] ;
	int sum = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> burles[i] ;
	}
		
	for(int i = 0 ; i < n ; i++)
	{
		sum += burles[i] ;
	}
	
	sort(burles, burles+n);
	
	int max_size = n*burles[n-1] ;
	int S = max_size - sum ;
	cout << S ;
}
