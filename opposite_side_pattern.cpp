/*
    *
   **
  ***
 ****
*****
*/
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<5;i++)
    {
        for(int k=0;k<5-i-1;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}