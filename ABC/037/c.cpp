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
#define MOD (1e+9)+7
#define PI 3.141592653589793238462643383279
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;


using namespace std;
 
long long int a[100000];
long long int b[100000];
 
int main(void){
    
    int N,K;
    
    cin >> N >> K;
    
    int n = N - K + 1;
    long long int imos = 0;

    REP(i,N){
        cin >> a[i];
        imos += a[i];
        b[i] = imos;
    }
    
    long long int sum = 0;

    REP(i,n){
        if(i){
            sum += b[i+K-1] - b[i-1];
        }else{
            sum += b[K-1];
        }
    }
    
    cout << sum << endl;

    return 0;
}
