#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int panel[2][100];

void arrFillZero(int *arr, int length){
  fill(&arr[0],&arr[length],0);
}

int main(void){

  int N;
  cin >> N;
  int imos1[N];
  int imos2[N];

  arrFillZero(imos1,N);
  arrFillZero(imos2,N);

  REP(i,2){
    REP(k,N){
      cin >> panel[i][k];
    }
  }
  imos1[0]   = panel[0][0];
  imos2[N-1] = panel[1][N-1];
  FOR(i,1,N){
    imos1[i] += imos1[i-1] + panel[0][i];
  }
  for(int i = N-2; i>=0; i--){
    imos2[i] += imos2[i+1] + panel[1][i];
  }

  int ans = 0;
  REP(i,N){
    ans = max(imos1[i]+imos2[i],ans);
  }
  cout << ans << endl;

  return 0;
}
