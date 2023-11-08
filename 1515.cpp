#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a;
    while(cin>>a&&a!=0)
    {
        cin.ignore();
        string str1,str2;
        int b,c,ans=0;
        for(int i=0;i<a;i++)
        {
            cin>>str1>>b>>c;
            if(i>0)
            {
               if(b-c<ans)
               {
                   ans=b-c;
                   str2=str1;
               }
            }
            else{
                 ans=b-c;
            str2=str1;
            }
        }
        cout<<str2<<endl;
    }
}
