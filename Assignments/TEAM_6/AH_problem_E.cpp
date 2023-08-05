#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str;
    int x;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]==' ')
            x++;
    }
            cout<<x+1;

}
//alaa haasan
