#include<iostream>
using namespace std ;
int main(){
	int n ;
	cin >> n ;
	double arr[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i] ;
	}
	double sumArray = 0.0 ;
	for(int i = 0 ; i < n ; i++)
	{
		sumArray+=arr[i] ;
	}
	double Av = sumArray/n ;
	cout << Av ;
}
