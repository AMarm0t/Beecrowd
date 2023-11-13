#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,ans=0;
        cin>>b;
        for(int i=1;i<=b/2;i++)
        {
            if(b%i==0)
                ans+=i;
        }
        if(ans==b)
            cout<<b<<" eh perfeito"<<endl;
        else
        cout<<b<<" nao eh perfeito"<<endl;
    }
}
