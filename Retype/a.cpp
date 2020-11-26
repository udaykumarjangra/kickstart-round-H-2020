#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,s;

ll solve()
{
	ll restart = k+n;
	ll back = (k)+(k-s)+(n-s);
	cout<<restart<<" "<<back<<endl;
	return min(restart,back);
}

int main()
{
	int tc;
	cin>>tc;
	for(int t=1; t<=tc; t++)
	{
		cin>>n>>k>>s;
		ll ans=solve();
		cout<<"Case #"<<t<<": "<<ans<<endl;
	}
}
