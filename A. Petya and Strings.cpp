#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	string s1 ;
	cin >> s1 ;
	int len = s1.size() ;
	int n ;
	if(len % 2 == 0)
	{
		n = len/2 ;
	}
	else
	{
		n = len/2 + 1 ;
	}
	char arr[n] ;

	for(int i = 0,j = 0 ; i < len ; i += 2, j++ )
	{
		arr[j] = s1[i] ;
	}
	sort(arr,arr+n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cout << arr[i]  ;
		if(i!= n-1)
		{
			cout <<"+" ;
		}
	}

	
}
