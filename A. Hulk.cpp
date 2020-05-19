#include<iostream>
using namespace std ;
int main()
{
	int n ;
	cin >> n ;
	string hate = "I hate that " ;
	string love = "I love it" ;
	for(int i = 1 ; i <= n ; i++)
	{
		if(i%2 == 0)
		{
			cout << love ;
		}
		else
		{
			cout << hate ;
		}
	}
}
