#include<iostream>
using namespace std ;
int main(){
	int t , a , b ;
	cin >> t ;
	int arr[t] ; // made array
	for(int i = 0 ; i < t ; i++) 
	{
		cin >> a >> b ;
		if(a%b == 0)
		{
			arr[i] = 0 ;
		}
		else
		{
			a = a%b ;
			b = b - a ;
			arr[i] = b ;
		}
	}
	for(int i = 0 ; i < t ; i++)
	{
		cout << arr[i] <<"\n" ;
	}
}
