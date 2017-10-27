#include<iostream>
typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;
 
using namespace std;
 
int main(void){
 
  int N;
  cin >> N;
 
  int l , r;
  int ans = 0;
  REP(i,N){
    cin >> l >> r;
    ans += r - l + 1;
  }
 
  cout << ans << endl;
 
  return 0;
}
