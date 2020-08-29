#include<iostream>
using namespace std ;
int main(){

	int T ;
	cin >> T ;
	int output[t] ;

	for(int i = 0 ; i < T ; i++)
	{
		int a,b ;
		int count = 0 ;
		cin >> a >> b ;
		int difVol = b - a ;

		if(difVol < 0)
		{
			difVol = -(difVol) ;
		}
		if(difVol % 2 == 0)
		{
			count = difVol/2 ;
		}
		else if(difVol % 5 == 0)
		{
			count = difVol/5 ;
		}

	}

}
