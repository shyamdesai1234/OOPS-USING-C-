#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a,b;
    int i;
    getline(cin,a);
    getline(cin,b);
    for(i=0;i<a.length();i++)
    {
        a[i]=toupper(a[i]);
    }
    cout<<a<<"\n";

    for(i=0;i<b.length();i++)
    {
        b[i]=tolower(b[i]);
    }
    cout<<b<<"\n";
    //upper(&str)

}

