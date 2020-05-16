#include<iostream>
using namespace std ;
int main(){
	
	static int a , b ;
	cin >> a >> b ;
	int c = a*b ;
	static int count = 1 ;
	for(int i = 1 ; i <= c ; i++)
	{
		a = a*3 ;
		b = b*2 ;
		
		if(a<=b)
		{
			count = count + 1 ;
		}
		else if(a>b)
		{
			cout << count ;
			exit(0) ;
		}
		
	}
	
}
