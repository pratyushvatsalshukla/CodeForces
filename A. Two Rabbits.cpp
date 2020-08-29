#include<bits/stdc++.h>
using namespace std ;
int main(){

	int t ;
	cin >> t ;
	for(int i = 0 ; i < t ; i++)
	{
		int x, y, a, b ;
		
		cin >> x >> y >> a >> b ;

		int Xinit = x ;
		int Yinit = y ;
		int Xjump = a ;
		int Yjump = b ;
		int Xfin, Yfin ;
		int count = 0 ;

		for(int j = 1 ; Xinit <= Yinit ; j++)
		{

			Xfin = Xinit + j*Xjump ;
			Yfin = Yinit - j*Yjump ;
			Xinit = Xfin ;
			Yinit = Yfin ;
			count++ ;

			if(Xinit == Yinit)
			{
				cout << count << endl ;
			}
			else
			{
				cout << -1 ;
			}

		}

	}

}
