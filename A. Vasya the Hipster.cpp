#include<iostream>
using namespace std ;
int main(){
	
	int a , b ;
	cin >> a >> b ;
	if(a == b)
	{
		cout << a <<" " <<  0 ;
		exit(0) ;
	}
	else
	{
		if(a < b)
		{
			int count = 0 ;
			count = b - a ;
			if(count != 1)
			{
				cout << a << " " << count/2;	
			}
			else
			{
				cout <<a << " " << 0 ;
			}
			
		}
		else
		{
			int count = 0 ;
			count = a - b ;
			if(count != 1)
			{
				cout << b << " " << count/2;	
			}
			else
			{
				cout << b << " " << 0 ;
			}
		}
	}
	
}
