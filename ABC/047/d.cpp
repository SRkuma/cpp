#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;
#define pb(x) push_back(x)
#define MOD 1000000007

using namespace std;

int main(){

    int N,T;
    cin >> N >> T;

    int ans[N];

    REP(i,N){
        cin >> ans[i];
    }
    int min = ans[0];
    int max_diff = 0;
    REP(i,N){
        if(min > ans[i]){
            min = ans[i];
        }else{
            max_diff = max(ans[i]-min,max_diff);
        }
    }

    min = ans[0];
    int cnt = 0;
    REP(i,N){
        
        if(ans[i] - min == max_diff) cnt++;
        
        if(min > ans[i]){
            min = ans[i];
        }
    }

    cout << cnt << endl;
    
    return 0;
}
