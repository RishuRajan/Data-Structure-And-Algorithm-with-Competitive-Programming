//This Algorithm has many applications in which one of the basic application to check given number is prime or not in O(n(log(logn))) Time Complexity

#include <bits/stdc++.h>
using namespace std;
int prime[1000001]; 
void sieve(int n)
{
    int maxN=1000000;
    for(int i=2;i<=maxN;i++) //Setting up Array as unmarked
       prime[i]=1;
    prime[0]=0;            //Here prime[i]=0 means non-prime and prime[i]=1 means prime
    prime[1]=0;
    for(int i=2;i*i<=maxN;i++) //Traversing array and marking non-primes as 0
    {
        if(prime[i]==1)
        {
            for(int j=i*i;j<=maxN;j+=i)
               prime[j]=0;
        }
    }
    if(prime[n]==1) // checking given number is prime or not
       cout<<"Prime";
    else
       cout<<"Not prime";
}
int main() 
{
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	sieve(n);
	return 0;
}
