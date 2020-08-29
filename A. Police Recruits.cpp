#include<iostream>
using namespace std ;
int main(){
	
	int n ; 
	cin >> n ; 
	int arr[n] ;
	int CrimeOc = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i] ;
	}
	int c = 0;
	for(int i = 0 ; i < n ; i++)
	{
		if(arr[i] != -1)
		{
			for(int j = i ; j <= i +arr[i] ; j++)
			{
				if(arr[j+1] > 0)
				{
					c++ ;
				}
			}
			i = i + arr[i] + c ;
		}
		else
		{
			CrimeOc++ ;
		}
	}
	cout << CrimeOc ;
	
}
