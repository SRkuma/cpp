#include<iostream>

using namespace std;

//B. Training Camp

//トレーニング数 1≦ N ≦10^5 が与えられる
// i 回目のトレーニングでパワーが i 倍される
//パワーの初期値は 1

//最終的なパワーを10^9+7で割ったあまりを求める

#define MOD (int)(1e+9)+7
#define debug(x) cout << #x << " = " << x << endl;

long long fact(long long N){

    if(N == 0) return 1;
    long long res = N * fact(N-1);
    res %= MOD;
    return res;
}

int main(void){

    int  N;
    cin >> N;

    cout << fact(N) << endl;

    return 0;
}
