// Word Combinations
// cses.fi/1146
#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ll n;
 
ll get(int sz) {
    return 1ll*sz*(1ll << (sz-1));
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    cin >> n;
 
    vector<int> binary;
    while (n) {
        binary.push_back(n % 2);
        n /= 2;
    }
    reverse(binary.begin(), binary.end());
    ll res = 0;
    int len = binary.size();
    for (int i = 1; i <= binary.size(); i++) {
        int x = binary[i-1];
        if (x == 0) continue;
        res += get(len - i);
    }
 
    ll order = 0;
    for (int i = binary.size(); i >= 1; i--) {
        int x = binary[i-1];
        if (x == 0) continue;
        res += order;
        order += (1ll << (len-i));
    }
    for (auto x : binary) res += x;
    cout <<res;
}
// author: unk2001
// profile: https://cses.fi/user/13599