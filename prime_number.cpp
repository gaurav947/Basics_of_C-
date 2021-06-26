#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    if(n==0||n==1)
    {
        cout<<"A non prime number";
        exit(0);
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%2==0)
        {
            cout<<"A non prime number";
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"Prime number";
}