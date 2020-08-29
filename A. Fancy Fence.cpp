#include <iostream>
using namespace std;
main(int n)
{
	cin >> n;
	while(cin>>n)
		cout<<(360%(180-n)?"NO\n":"YES\n");
}
