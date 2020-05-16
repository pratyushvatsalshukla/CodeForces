#include<iostream>
using namespace std ;
int main(){
	int x ;
	cin >> x ;
	int alias = x ;
	int count ;
	int mod ;
	if(x > 5)
	{
		if(x%5 == 0)
		{
			cout << (x/5) ;
			exit(0) ;
		}
		else
		{
			mod = (x/5) + 1 ;
			cout << mod ;
			exit(0) ;
		}
	}
	else
	{
		cout << 1 ;
	}
}
