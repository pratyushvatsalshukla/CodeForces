#include<iostream>
using namespace std ;
int main(){
	
	int n ;
	cin >> n ;
	int arr[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i] ;
	}
	int countMag = 1 ;
	for(int i = 0 ; i < n ; i++)
	{
		if(arr[i+1]!=arr[i] && (i+1)<n)
		{
			countMag++ ;
		}
	}
	cout << countMag ;
	
}
