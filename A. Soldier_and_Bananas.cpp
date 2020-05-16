#include<iostream>
using namespace std ;
int main(){
	int  k,n,w ;
	cin >> k >> n >> w ;
	int cost = (w*(k+w*k) )/2 ;
	int lent = cost - n ;
	if(lent <= 0)
	{
		cout << 0 ;
	}
	else
	{
		cout << lent ;	
	}

}
