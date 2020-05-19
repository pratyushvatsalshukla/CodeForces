#include<iostream>
using namespace std ;
int main(){
	int t ;
	cin >> t ;
	int arr[t] ;
	for(int i = 0 ; i < t ; i++)
	{
		int a,b ;
		cin >> a >> b ;
		arr[i] = a+b ;	
	}
	for(int i = 0 ; i < t ; i++)
	{
		cout << arr[i] << "\n" ;
	}
	
	
}
