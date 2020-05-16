#include<iostream>
using namespace std ;
int main(){
	int n ; 
	cin >> n ;
	if(n%2 == 0)
	{
		long sumEven = (n/2)*(2+n) ;
		long sumOdd = (n/2)*(2 + n -1) ;
		cout << sumEven - sumOdd ;
		exit(0) ;
	}
	else
	{
		long sumEven = (n)*(n+1)/2 ;
		long sumOdd = (n+1)*(1+n)/4 ;
		cout <<sumOdd << "\n" ;
		cout <<sumEven <<"\n" ;
		cout << sumEven - sumOdd ;
		exit(0) ;
	}
}
