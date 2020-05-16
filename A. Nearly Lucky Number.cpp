#include<iostream>
using namespace std ;
int main(){
	
	int n ;
	cin >> n ;
	static int count = 0, countOccurFour = 0, countOccurSeven = 0, countOccur = 0 ;
	int alias = n ;
	while(alias > 0 )
	{
		alias = alias/10 ;
		count++ ;
	}
	for(int i = 0 ; i < count ; i++)
	{
		if(n%10 == 4)
		{
			countOccurFour++ ;
		}
		else if(n%10 ==7)
		{
			countOccurSeven++ ;
		}
		else{
			cout<< "NO" ;
			exit(0) ;
		}
		n = n/10 ;
		
	}
	countOccur = countOccurFour + countOccurSeven ;
	if(countOccurFour == 0 || countOccurSeven == 0)
	{
		cout << "NO" ;
		exit(0) ;
	}
	if( count == countOccur)
	{
		cout<<"YES" ;
	}
	
}
