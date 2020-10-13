// Word Combinations
// cses.fi/1731
#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 5005;
 
struct Node {
    Node *child[26];
    bool isWord;
    Node() {
        for (int i = 0; i < 26; i++) {
            child[i] = NULL;
        }
        isWord = false;
    }
};
 
struct Trie {
    Node *root;
 
    Trie() {
        root = new Node();
    }
 
    Node* getRoot() {
        return root;
    }
    Node* getNext(Node *p, char c) {
        if (p->child[c-'a'] == NULL) {
            return NULL;
        } else {
            return p->child[c-'a'];
        }
    }
 
    void addWord(string s) {
        Node *p = root;
        for (auto c : s) {
            if (p->child[c-'a'] == NULL) {
                p->child[c-'a'] = new Node();
            }
            p = p->child[c-'a'];
        }
        p->isWord = true;
    }
}trie;
 
int n, m, dp[N];
string s;
 
const int mod = 1000000007;
void inline add(int &A, int B) {
    A += B;
    if (A >= mod) A -= mod;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    cin >> s;
    n = s.size(); s = " " + s;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        string t; cin >> t;
        reverse(t.begin(), t.end());
        trie.addWord(t);
    }
 
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        Node *p = trie.getRoot();
        for (int j = i; j >= 1; j--) {
            p = trie.getNext(p, s[j]);
            if (p == NULL) {
                break;
            } else if (p->isWord == true) {
                add(dp[i], dp[j-1]);
            }
        }
    }
    cout <<dp[n];
}

// author: unk2001
// profile: https://cses.fi/user/13599