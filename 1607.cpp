#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        cin.ignore();
        for(int j=0;j<a;j++)
        {
            string str1,str2;
            //getline(cin,str1);
            //getline(cin,str2);
            cin>>str1>>str2;
            int ans=0;
            for(int i=0; i<str1.size(); i++)
            {
                if(str2[i]<str1[i])
                {
                    ans+=('z'-str1[i])+(str2[i]-'a')+1;
                }
                else
                {
                    ans+=str2[i]-str1[i];
                }
            }
            cout<<ans<<endl;
            //cout<<(int)'z'<<endl;
        }
    }
}
