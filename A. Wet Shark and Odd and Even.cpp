#include<bits/stdc++.h>
using namespace std ;
int main(){

    int n  ;
    cin >> n ;
    long long Num[n] ;
    long long Sum = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> Num[i] ;
        Sum += Num[i] ;
    }

    sort(Num, Num+n) ;

    for(int i = 0 ; i < n ; i++)
    {
        if(Sum%2 == 0)
        {
            cout << Sum ;
            exit(0) ;
        }
        else if(Num[i]%2 != 0){
            Sum = Sum-Num[i] ;
            cout << Sum ;
            return 0 ;
        }
    }
    cout << Sum ;
    exit(0) ;
}
