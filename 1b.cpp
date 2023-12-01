#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll,ll> ii;

#define pb push_back
#define fst first
#define snd second
#define ALL(cont) cont.begin(), cont.end()
#define mset(a,b) memset(a,b,sizeof(a));
#define fore(i, a, b) for (int i = a, almo5t = b; i < almo5t; ++i)
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void solve(){
  string a = "";
  ll ans = 0;
  while(cin>>a){
    string cur = "";
    vector<string> numbers_str = {"one","two","three","four","five","six","seven","eight","nine"};
    vector<string> numbers = {"1","2","3","4","5","6","7","8","9"};
    int midx = 1e9;
    string num = "";
    fore(i,0,9){
      int idx = a.find(numbers[i]);
      if(idx==-1)idx=1e9;
      int idx2 = int(a.find(numbers_str[i]));
      if(idx2==-1)idx2=1e9;
      idx = min(idx, idx2);

      if(idx<midx){
        midx=idx;
        num=numbers[i];
      }
    }
    cur += num;

    reverse(ALL(a));
    midx = 1e9;
    fore(i,0,9)reverse(ALL(numbers_str[i]));
    fore(i,0,9){
      int idx = a.find(numbers[i]);
      if(idx==-1)idx=1e9;
      int idx2 = int(a.find(numbers_str[i]));
      if(idx2==-1)idx2=1e9;
      idx = min(idx, idx2);

      if(idx<midx){
        midx=idx;
        num=numbers[i];
      }
    }
    cur += num;

    ans+=stoi(cur);
  }
  cout<<ans;
}

int main(){FIN;
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}