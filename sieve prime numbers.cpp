#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define pb push_back
#define N 100000+10
#define MAX LONG_MAX
#define    minv(v)         *min_element(all(v))
#define    maxv(v)         *max_element(all(v))
#define all(v) v.begin(),v.end()
#define vll vector<ll>
using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
 ll prime[1000010];
	memset(prime,0,sizeof(prime));
 
	for(int i=2;i*i<=1000010;i++)
	{
		if(prime[i]==0)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				prime[j]=1;
			}
		}
	}
	


	return 0;
}

