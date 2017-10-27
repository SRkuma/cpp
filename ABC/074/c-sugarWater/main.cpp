#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  int waterA, waterB, sugarC, sugarD;
  int dissolveRatio;
  int limit;

  cin >> waterA >> waterB >> sugarC >> sugarD >> dissolveRatio >> limit;

  vector<int> waterAmount;
  int wlpInd = max(limit/100/waterA,limit/100/waterB);

  REP(i,wlpInd+1){
    REP(k,wlpInd+1){
      int wam = 100*waterA*i+100*waterB*k;
      if (wam <= limit) waterAmount.push_back(wam);
    }
  }
  sort(waterAmount.begin(), waterAmount.end());
  waterAmount.erase(unique(waterAmount.begin(),waterAmount.end()),waterAmount.end());
  
  vector<int> sugarAmount;
  int slpInd = max(limit/sugarC,limit/sugarD);

  REP(i,slpInd+1){
    REP(k,slpInd+1){
      int sam = sugarC*i+sugarD*k;
      if (sam <= limit) sugarAmount.push_back(sam);
    }
  }

  sort(sugarAmount.begin(), sugarAmount.end());
  sugarAmount.erase(unique(sugarAmount.begin(),sugarAmount.end()),sugarAmount.end());
  
  int ans1 = 0;
  int ans2 = 0;
  double maxCons = -1.;

  REP(i,(int)waterAmount.size()){
    REP(k,(int)sugarAmount.size()){
      int wam = waterAmount[i];
      int sam = sugarAmount[k];
      int wsSum = wam + sam;
      if(wsSum <= limit && ((wam / 100 * dissolveRatio) >= sam)){
        double consentration = 100.0 * sam / wsSum;
        if(maxCons <= consentration){
          maxCons = consentration;
          ans1 = wsSum;
          ans2 = sam;
        }
      }
    }
  }

  cout << ans1 <<" "<< ans2 << endl;

  return 0;
}
