#include<iostream>
using namespace std;
int main()
{
   int n,rev=0,rem;
   cin>>n;
   int p = n;
   while(n>0)
   {
       rem = n%10;
       rev = rev*10+rem;
       n=n/10;
   }
   cout<<"Reverse of number = "<<rev;
   (p==rev)?cout<<" And it is a Palindrome":cout<<" And it is NOT a Palindrome number";
   
}