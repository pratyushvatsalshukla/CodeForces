#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	int d1, d2, d3 ;
	cin >> d1 >> d2 >> d3 ;
	if(d1+d2 = d3)
	{
		cout << 2*d3 ;
		exit(0) ;
	}
	else if(d1+d2 < d3)
	{
		cout << 2*(d1+d2) ;
		exit(0) ;
	}
	else
	{
		cout << d1+d2+d3 ;
		exit(0) ;
	}
	
}
