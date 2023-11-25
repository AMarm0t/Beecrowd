#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int a,b,c;
        cin>>a>>b;
        int copy_b=b;
        if(a==0&&b==0)
            break;
        int ans,possible=0;
        while(copy_b!=0)
        {
            b=copy_b;
            ans=0;
            for(int i=b; i>=1; i--)
            {
                for(int j=0; j<i; j++)
                {
                    ans+=i;
                    //cout<<ans<<endl;
                    if(ans==a)
                    {
                        possible=1;
                        break;
                    }
                    if(ans>a)
                    {

                        break;
                    }
                }
                if(possible==1)
                {
                    break;
                }
                if(ans>a){

                    break;

                }
            }
            if(possible==1)
                break;
            copy_b--;
        }
        if(possible==1)
            cout<<"possivel"<<endl;
        else
            cout<<"impossivel"<<endl;

    }


}
