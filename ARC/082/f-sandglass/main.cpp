#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int maxAmount;     // X
int rNum;       // K
int rTimeArray[100001];      // r

int calcSand(int eTime, int partsAInSand){

    int a = 0, b = maxAmount, c = 0;
    int i = 0;
    int nowTime = 0;
  
    for (; (i < rNum && rTimeArray[i] < eTime); ++i) {
        int diffTime = rTimeArray[i] - nowTime;
        nowTime = rTimeArray[i];
        if (i % 2 == 0) {
            c -= diffTime;
            a = max(a, 0 - c);
        } else {
            c += diffTime;
            b = min(b, maxAmount - c);
        }
    }
    if(a <= b){
        if(partsAInSand <= a){
            partsAInSand = a + c;
        }else if(partsAInSand < b){
            partsAInSand += c;
        }else{
            partsAInSand = b + c;
        }
    }
        
    partsAInSand += (eTime - nowTime) * (i % 2 == 0 ? -1 : 1);
    
    if(partsAInSand < 0) partsAInSand = 0;
    if(partsAInSand > maxAmount) partsAInSand = maxAmount;
        
    return partsAInSand;
}

int main(void){


    cin >> maxAmount;
    cin >> rNum;
    
    REP(i,rNum){
        cin >> rTimeArray[i];
    }
    
    int queryNum;  // Q
    cin >> queryNum;
    
    REP(i,queryNum){
        int eTime,partsAInSand;
        cin >> eTime >> partsAInSand;
        cout << calcSand(eTime, partsAInSand) << endl;
    }

    return 0;
}
