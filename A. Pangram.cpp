#include<bits\stdc++.h>
using namespace std;
int main()
{
	int n,k,count=0;
	cin >> n;
	char c[n];
	for(int i=0;i<n;i++)
	{
		cin >> c[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((c[i]==c[j]) || (c[i]==c[j]-32) || (c[i]==c[j]+32))
			{
				count++;
				break;
			}
		}
	}
	k=n-count;
	if(k<26)
		cout << "NO";
	else if(k==26)
		cout << "YES";
}
