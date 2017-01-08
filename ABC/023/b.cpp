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
#define FOR(i,a,b) for(long long int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define rFOR(i,a,b) for(long long int i=(a);i>=(b);--i)
#define rREP(i,n)  rFOR(i,n,0)
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;


using namespace std;

int cnt;

string makeAccessories(int N,string ans){

    REP(i,N){
        int mod = i % 3;
        if(i == 0){
            ans = "b";
        }else if(mod == 0){
            ans = "b" + ans + "b";
        }else if(mod == 1){
            ans = "a" + ans + "c";
        }else if(mod == 2){
            ans = "c" + ans + "a";
        }
        cnt++;
        if(ans.size() >= N) break; 
    }
    return ans;
}

int main(){

    int N;
    cin >> N;

    if(N % 2 == 0){
        cout << -1 << endl;
        return 0;
    }
    string str;
    cin >> str;
    string acce = makeAccessories(N,"");
    
    if(str == acce){
        cout << cnt-1 << endl;
    }else{
        cout << -1 << endl;
    }
    
    return 0;
}
