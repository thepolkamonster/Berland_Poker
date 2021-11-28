#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//in this we have to find the maximum and the second maximum

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a=n/k;
        if(a>=m)
        {
            cout<<m<<"\n";
        }
        else
        {
            int x=a;
            int d=ceil(1.0*(m-a)/(k-1));
            cout<<x-d<<"\n";
        }
    }
    return 0;
}
