#include <iostream>

using namespace std;
int prime(int x){
int div=x/2;
for(int i=2;i<=div;i++){
    if(x%i==0){
        return -1;
    }
}

return x;
}


int main()
{
   int t;
   cin>>t;
   for(int i=2;i<=t;i++){
        int res=prime(i);
   if (res != -1)
    cout<<res<<" ";

   }
}
//alaa hassan
