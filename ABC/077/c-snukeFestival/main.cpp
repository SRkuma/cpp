#include <iostream>
#include <algorithm>
typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

#define MAX_N (int)1e+5

using namespace std;

int a[MAX_N];
int b[MAX_N];
int c[MAX_N];

int main(void){

  int N;
  cin >> N;
  REP(i,N){
    cin >> a[i];
  }
  REP(i,N){
    cin >> b[i];
  }
  REP(i,N){
    cin >> c[i];    
  }

  sort(a,a+N);
  sort(b,b+N);  
  sort(c,c+N);

  ll ans = 0;

  REP(i,N){
    auto above = lower_bound(a,a+N,b[i]);
    auto blw   = upper_bound(c,c+N,b[i]);
    ll ab = above - a;
    ll bl = blw - c;
    if(ab > 0 && bl < N){
      ans += ab * (((ll)N-bl));
    }
  }
  cout << ans << endl;
  
  return 0;
}
