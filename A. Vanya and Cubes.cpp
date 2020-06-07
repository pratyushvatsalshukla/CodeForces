#include<iostream>
using namespace std ;
int main(){
	
	int n ;
	cin >> n ;
	int num = n ;
	int level = 0 ;
	int loopCount = 1 ;
	int cubes = 1 ;
	if(num == 1)
	{
		cout << 1 ;
		exit(0) ;
	}
	else
	{
		while(num > 0)
		{
			loopCount++ ;
			cubes+=loopCount ;
			level++ ;
			num-=cubes ;	
		}
		cout << level ;
	}
	
}
