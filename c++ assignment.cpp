#include<iostream>
using namespace std;

int main()
{
 int n,a;

cout <<" please enter a number:"<<endl;
cin >>n;

if (n==1)
{
   cout<<"Smallest prime number is 2";
}
for(a = 2; a<n; a++)
{
 if(n % a == 0)
 { 
  cout<<"your number"<<n<<"isn't a prime number";
 break;
 }
if (n == a+1)
 {
   cout << "your number "<< n <<"is a prime number";
}
 }
return 0;
}




