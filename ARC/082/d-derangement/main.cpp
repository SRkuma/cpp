#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

    int N;
    cin >> N;

    int a[N];

    REP(i,N){
        int tmp;
        cin >> tmp;
        tmp--;
        a[i] = tmp;
    }

    int cnt = 0;

    REP(i,N-1){
        if(a[i] == i){
            swap(a[i],a[i+1]);
            cnt++;
        }
    }

    if(a[N-1] == N-1){
        cnt++;
    }

    cout << cnt << endl;
    
    return 0;
}
