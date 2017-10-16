#include <iostream>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define debug(x) cout << #x << " = " << x << endl;

using namespace std;

int dp[100000000];

int main(void){

    int N;
    int ratA,ratB;

    cin >> N >> ratA >> ratB;

    int A[N];
    int B[N];
    int C[N];

    REP(i,N){
        cin >> A[i] >> B[i] >> C[i];
    }

    
    
    return 0;
}
