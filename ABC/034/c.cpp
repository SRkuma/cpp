#include <iostream>
#include <stdio.h>       // printf,scanf
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>  //sort,binarySearch
#include <functional> 
#include <iomanip>    // setprecision
#include <utility>    // c+11 Array
#include <set>
#include <sstream>
#include <map>
#include <bits/stdc++.h>
#define MOD 1000000007
#define PI 3.141592653589793238462643383279
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;

typedef unsigned long long int ULL_int;

using namespace std;

ULL_int calc(ULL_int a, ULL_int b, ULL_int prime){

    if(b == 0) return 1;
    if(b % 2 == 0){
        ULL_int acc = calc(a,b/2,prime);
        return (acc * acc) % prime;
    }
    if(b % 2 != 0) return (a * calc(a,b-1,prime)) % prime;
        
}

int main(void){

    int W,H;

    cin >> W >> H;

    ULL_int a = 1;
    ULL_int b = 1;

    int M = max(W,H);
    int m = min(W,H);

    for(int i = M; i < M+m-1; i++){
        a *= i;
        a %= MOD;
    }
    
    for(int i = 1; i < m; i++){
        b *= i;
        b %= MOD;
    }

    ULL_int acc = calc(b,MOD-2,MOD);

    cout << (a * acc) % MOD << endl;

    return 0;
}
