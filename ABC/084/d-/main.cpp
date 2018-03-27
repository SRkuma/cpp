#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

bool prime[100001];
void Eratosthenes(int n){ 
  for(int p=2; p*p<=n; p++){
    if(prime[p]){
      for(int i=p*2; i<=n; i += p)
          prime[i] = false;
      }
  }
}

int dp[100001];

int main(void){

  fill(&prime[0],&prime[100001],true);
  prime[0] = false;
  prime[1] = false;
  int Q;
  cin >> Q;
  int l[Q],r[Q];
  int M = 0;
  REP(i,Q){
    cin >> l[i] >> r[i];
    M = max(M,r[i]);
  }
  Eratosthenes(M);
  dp[3] = 1;
  for(int i = 5; i<=M;i+=2){
    if(prime[i] && prime[(i+1)/2]){
      dp[i] += dp[i-2]+1;
    }else{
      dp[i] += dp[i-2];
    }
  }
  REP(i,Q){
    cout << dp[r[i]] - dp[l[i]-2] << endl;
  }
  return 0;
}
