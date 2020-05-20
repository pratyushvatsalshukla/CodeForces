#include<iostream>
using namespace std ;
int main(){
	
	int t ;
	cin >> t ;
	int count[t] ;
	for(int i = 0 ; i < t; i++)
	{
		int x,y ; // x and y are current positions
		int a,b ; // a and b are hoping distances
		cin >> x >> y >> a >> b ;
		int timeCounter = 0 ;
		for(x; x < y ; x = x+a)
		{
			y = y - b ;
			timeCounter++ ;
			if(x == y)
			{
				count[i] = timeCounter ;
			}
			
		}
		if(x!= y)
		{
			count[i] = -1 ;
		}
	}
	for(int i = 0 ; i < t ; i++)
	{
		cout << count[i] ;
	}
	
}
