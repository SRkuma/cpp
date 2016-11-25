#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;
#define pb(x) push_back(x)
#define MOD 1000000007

using namespace std;

int main(){

    string str;

    cin >> str;

    int cntW = 0;
    int cntB = 0;

    REP(i,str.size()){
        str[i] == 'W' ? cntW++ : cntB++;
    }

    if(cntW == 0 || cntB == 0){
        cout << 0 << endl;
        return 0;
    }

    int tmp = 0;
    int ans = 0;
    
    REP(i,str.size()){
        //printf("str[%d] = %c\n",tmp,str[tmp]);
        if(str[tmp] != str[i]){
            tmp = i;
            ans++;
        }
    }

    cout << ans << endl;
    
    return 0;
}
