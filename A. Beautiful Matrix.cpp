#include<iostream>
using namespace std ;
int main(){
	
	int Matrix[5][5] ;
	int xcf = 3 ;
	int ycf = 3 ;
	int xcn, ycn ;
	int moves = 0 ;
	for(int i = 0 ; i < 5 ; i++)
	{
		for(int j = 0 ; j < 5 ; j++)
		{
			cin >> Matrix[i][j] ;
			if(Matrix[i][j] == 1)
			{
				xcn = i+1 ;
				ycn = j+1 ;
				
			}
		}
		
	}
	// matrix is defined and i've found the position of 1 ;
	if(xcn < 3)
	{
		moves += 3-xcn ;

	}
	else if(xcn > 3)
	{
		moves+= xcn - 3 ;

	}
	// till this, i have shifted the origin of X Coordinate
	if(ycn < 3)
	{
		moves += 3-ycn ;
	}
	else if(ycn > 3)
	{
		moves+= ycn - 3 ;
	}
	cout << moves ;
	
}
