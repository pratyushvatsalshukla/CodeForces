#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	int x[4] ;
	for(int i = 0 ; i <4; i++)
	{
		cin >> x[i] ;
	}
	sort(x,x+4) ;
	
	int sumTotal = x[3] ;
	int a = sumTotal - x[0] ;
	int b = sumTotal - x[1] ;
	int c = sumTotal - x[2] ;
	cout << a << " " << b << " " << c ;
}
