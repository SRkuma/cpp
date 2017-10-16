#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

    int N;
    cin >> N;

    int a[1000010];

    fill(a,a+N,0);

    REP(i,N){
        int tmp;
        cin >> tmp;
        
        if(tmp == 0){
            a[tmp]++;
            a[tmp+1]++;
        }else{
            a[tmp-1]++;
            a[tmp]++;
            a[tmp+1]++;
        }
    }

    int ans = 1;

    REP(i,N){
        if(a[i] > 0){
            ans = max(ans,a[i]);
        }
    }

    cout << ans << endl;
    
    return 0;
}
