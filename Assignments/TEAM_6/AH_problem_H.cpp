#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int fact(int x){
if(x<=1)
    return 1;
    else
         return x*fact(x-1);
    }
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int x;
    cin>>x;
  int result =fact(x);
  cout<<result<<endl;
    }

}
//alaa hassan
