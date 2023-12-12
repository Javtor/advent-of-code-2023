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
    string ids;cin>>ids;
    int id = stoi(ids.substr(0,SZ(ids)-1));
    bool can = true;
    ll r=0,g=0,b=0;
    while(true){
      ll n;cin>>n;
      string who;cin>>who;
      bool cont = who[SZ(who)-1] == ','||who[SZ(who)-1] == ';';

      if(cont) who = who.substr(0,SZ(who)-1);

      if(who=="red")r=max(r,n);
       if(who=="green")g=max(g,n);
        if(who=="blue")b=max(b,n);

      if(!cont)break;
    }
    if(can) ans += (r*g*b);
  }
  cout<<ans;
}

int main(){FIN;
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}