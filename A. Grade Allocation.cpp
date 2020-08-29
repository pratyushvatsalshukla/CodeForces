#include<iostream>
using namespace std ;
int main(){
	
	int t ;
	cin >> t ;
	for(int i = 0 ; i < t ; i++)
	{
		int n, m ;
		cin >> n >> m ;
		int arr[n] ;
		int sum = 0 ;
		for(int j = 0 ; j < n ; j++)
		{
			cin >> arr[j] ;
			sum += arr[j] ; 
		}
		if(sum == m)
		{
			cout << m << endl ;
		}
		else if(sum < m)
		{
			cout << sum << endl ;
		}
		else if(sum > m)
		{
			cout << m << endl ;
		}
	}
		
}
