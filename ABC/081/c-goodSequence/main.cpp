#include <iostream>
#include <unordered_map>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  int n;
  cin >> n;
  unordered_map <int,int> mp;

  int tmp;
  REP(i,n){
    cin >> tmp;
    mp[tmp]++;
  }
  int ans = 0;
  for(auto itr = mp.begin();itr!=mp.end();itr++){
    int diff = itr->first - itr->second;
    if(diff > 0) ans+=itr->second;
    if(diff < 0) ans-=diff;
  }
  cout << ans << endl;


  return 0;
}
