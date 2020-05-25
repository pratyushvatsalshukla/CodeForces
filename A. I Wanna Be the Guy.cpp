#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	int n ;
	cin >> n ;
	int p ;
	cin >> p ;
	int a[p] ;
	for(int i = 0 ; i < p ;i++)
	{
		cin >> a[p] ;
	}
	sort(a,a+p) ;
	int q ;
	cin >> q ;
	int b[q] ;
	for(int i = 0 ; i < q ;i++)
	{
		cin >> b[i] ;
	}
	int tot = p + q ;
	int c[tot] ;
	sort(b,b+p) ;
	if(a[p-1] >= b[q-1])
	{
			for(int i = 0 ; i < tot ; i++)
			{
				for(int  j = 0 ; j < tot ;i++)
				{
					
				}
			}
	}

	
}
