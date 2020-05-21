#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	int n , k ;
	cin >> n >> k ; // n : number of problems & k: time to travel
	int TestTime = 0 ;
	int TimeLeftTest = 60*4 - k ;
	int QuesCount = 0 ;
	for(int i = 1 ; i <= n ; i++)
	{
		TestTime += 5*i ;
		if(TestTime <= TimeLeftTest)
		{
			QuesCount++ ;
		}
	}
	
	cout << QuesCount ;
	
}
