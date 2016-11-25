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

using namespace std;

int main(){

    int N;

    cin >> N;

    int a[N];

    fill(a,a+N,0);

    int ave = 0;

    REP(i,N){
        cin >> a[i];
        ave += a[i];
    }
    
    ave /= N;

    int cnt = 0;

    int rest = 0;

    REP(i,N){

        int dif = a[i] - ave;

        rest += dif;

        if(rest != 0) cnt++;

    }

    if(rest != 0){
        cout << -1 << endl;
        return 0;
    }

    cout << cnt << endl;
    
    return 0;
}
