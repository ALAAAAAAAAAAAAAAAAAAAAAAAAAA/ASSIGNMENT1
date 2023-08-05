#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int *x,*y, z;
    x=&a;
    y=&b;
    z=*x;
    *x=*y;
    *y=z;
    cout<<a<<" "<<b;

}
//alaa hassan
