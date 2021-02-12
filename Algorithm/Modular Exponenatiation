//This Algorithm is used to find (a^n)%M in O(logn) Time Complexity
//Here Below is the Recursive Approach Of This Algorithm
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll modularpower(ll a,ll n,ll M)
{
  if(n==0)      //Base condition 
     return 1;
  ll x=modularpower(a,n/2,M);   //calling modularpower till n=0
  x=(x*x)%M;      
  if(n&1)           //checking if n is odd
    x=(x*a)%M;
  return x;
}

int main()
{
  ll a,n,M;
  cin>>a>>n>>M;
  cout<<modularpower(a,n,M); //function call
  return 0;
}
