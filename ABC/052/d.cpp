#include <iostream>
#include <math.h>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
using namespace std;

int town[100000];

int main(void){

    int N;
    int walkCost,telpCost;
    cin >> N >> walkCost >> telpCost;

    REP(i,N){
        cin >> town[i];
    }

    long long int ans = 0;
    REP(i,N-1){
        long long int dist = town[i+1] - town[i];
        long long int tiredW = dist*walkCost;
        long long int tiredT = telpCost;
        ans += min(tiredT,tiredW);
    }

    cout << ans << endl;

    return 0;
}
