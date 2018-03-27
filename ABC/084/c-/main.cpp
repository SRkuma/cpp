#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  int n;
  cin >> n;
  n--;
  long long rqT[n], stT[n], frqT[n];
  REP(i,n){
    cin >> rqT[i] >> stT[i] >> frqT[i];
  }

  long long ans = 0;
  REP(i,n){
    ans = rqT[i] + stT[i];
    FOR(j,i+1,n){
      long long waitTime = stT[j] - ans;
      if(waitTime > 0){
        ans += waitTime;
      }else{
        long long  t = frqT[j] - (ans % frqT[j]);
        if(ans % frqT[j] != 0){
          ans += t;
        }
      }
      ans += rqT[j];
    }
    cout << ans << endl;
  }

  cout << 0 << endl;
    
  return 0;
}
