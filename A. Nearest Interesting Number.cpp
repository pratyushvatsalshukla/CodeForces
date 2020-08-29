#include<iostream>
using namespace std ;
int main(){
	
	int a,c ;
	cin >> a ;
	int b = a ;
	c = b ;
	int sum = 0 ;
	while(b > 0)
	{
		a = b%10 ;
		sum += a ;
		b = b/10 ;
	}
	if(sum % 4 == 0)
	{
		cout << c ;
	}
	else if((sum+1) %4 == 0)
	{
		cout << c+1 ;
	}
	else if((sum+2)%4 == 0)
	{
		cout << c+2 ;
	}
	else if((sum+3)%4 == 0)
	{
		cout << c+3 ;
	}
	else if((sum+4) %4 == 0)
	{
		cout << c+4 ;
	}
	
}
