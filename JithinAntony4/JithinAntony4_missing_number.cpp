//Missing Number
//cses.fi/1083
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin >> n;
	ll a, sum = 0;
	for (ll i = 0; i < n - 1; i++)
	{
		cin >> a ;
		sum = sum + a;
	}
	cout << (n * (n + 1) / 2) - sum << endl;
	return 0;
}
//author: Jithin Antony
//profile: https://cses.fi/user/32631