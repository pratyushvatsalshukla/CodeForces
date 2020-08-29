#include<iostream>
using namespace std ;
int Max(int max1, int max2)
{

    if(max1 > max2)
    {
        return max1 ;
    }
    else
    {
        return max2 ;
    }

}
int main(){

    int a, b, c, d ;
    cin >> a >> b >> c >> d ;
    int Misha = Max(3*a/10 , a-a*c/250) ;
    int Vasya = Max(3*b/10 , b-b*d/250) ;
    if(Misha == Vasya)
    {
        cout << "Tie" ;
    }
    else if(Misha > Vasya)
    {
        cout << "Misha" ;
    }
    else
    {
        cout << "Vasya" ;
    }

}
