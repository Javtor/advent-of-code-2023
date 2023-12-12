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
  vector<string> mat;
  ll ans = 0;
  while(cin>>a){
    mat.push_back(a);
  }
  int n = SZ(mat), m = SZ(mat[0]);
  fore(i,0,n){
    string cur = "";
    bool can = false;
    fore(j,0,m){
      char c = mat[i][j];
      if(!(c>='0'&&c<='9')){
        if(cur != "" && can) {
          ans += stoll(cur);
        }
        cur = "";
        can = false;
        continue;
      }
      bool canC = false;
      for(int k1 = -1; k1<=1; k1++)for(int k2 = -1; k2<=1; k2++){
        int i2 = i+k1, j2 = j+k2;
        if(i2<0||i2>=n||j2<0||j2>=m) continue;
        char c2 = mat[i2][j2];
        canC = canC || (c2!='.' && !(c2>='0'&&c2<='9'));
      }
      cur += c;
      can = can || canC;
    }
    if(cur != "" && can)
      ans += stoll(cur);
  }
  cout<<ans;
}

int main(){FIN;
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}