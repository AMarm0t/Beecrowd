#include<iostream>
#include<string>
#include<cctype>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    float total_price=0,total_count=0;
    cin>>t;
    cin.ignore();
    for(int i=1;i<=t;i++)
    {
        float price,count=0;
         string name;
        cin>>price;
        cin.ignore();
        getline(cin,name);
        for(int j=0;j<name.size();j++)
        {
            if(isalpha(name[j])&&(j==0||name[j-1]==' '))
                count++;
        }
         total_count+=count;
         total_price+=price;
        cout<<"day "<<i<<": "<<count<<" kg"<<endl;
    }
    cout<<fixed<<setprecision(2)<<total_count/t<<" kg by day"<<endl;
    cout<<fixed<<"R$ "<<setprecision(2)<<total_price/t<<" by day"<<endl;
}
