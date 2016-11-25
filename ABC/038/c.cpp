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

long long int sum(long long int n);
 
int main(void){

    int N;
    cin >> N;
    
    int a[N];
    long long int count = 0;
    
    REP(i,N){
        cin >> a[i];
    }
    
    long long int tmp = 0;
    long long int loop = 0;
    
    while(loop < N){
        
        long long int cnt = 1;
        tmp = loop;
        
        while(a[tmp] < a[tmp+1]){
            if(tmp == N-1) break;
            tmp++;
            cnt++;
        }
        
        loop = tmp+1;
        count += sum(cnt);
    }
    
    cout << count << endl;
    
    return 0;
}

long long int sum(long long int n){
    
    if(n == 0) return 0;
    
    if(n == 1){
        return 1;
    }else{
        return n + sum(n-1);
    }
}
