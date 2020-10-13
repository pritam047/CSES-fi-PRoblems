// Word Combinations
// cses.fi/1087
#include <bits/stdc++.h>
#define FOR(i, u, v) for (int i = u; i <= v; i++)
#define FORD(i, v, u) for (int i = v; i >= u; i--)
#define pii pair<int, int>
#define mp make_pair
#define F first
#define S second
#define PB push_back
#define N 1000005
 
using namespace std;
 
string s;
int n, nxt[N][4];
 
string DNA = "ACGT";
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    
    cin >> s;
    n = s.size();
    s = " " + s;
    FOR(i, 0, 3) nxt[n+1][i] = n+1;
    FORD(i, n, 1) {
        FOR(j, 0, 3) nxt[i][j] = nxt[i+1][j];
        int x = DNA.find(s[i]);
        nxt[i][x] = i;
    }
 
    string ans = "";
    int curPos = 1;
    while (curPos <= n+1) {
        int best = 0;
        FOR(j, 1, 3) {
            if (nxt[curPos][j] > nxt[curPos][best]) {
                best = j;
            }
        }
        curPos = nxt[curPos][best];
        ans.push_back(DNA[best]);
        curPos++;
    }
    cout <<ans;
}
// author: unk2001
// profile: https://cses.fi/user/13599