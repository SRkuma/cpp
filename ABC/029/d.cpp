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

    string str;
    
    cin >> str;
    
    int size = str.size();
    int N = stoi(str);
    
    long long int ans = 0;

    long long int cycle = 10;
    long long int digit = 1;

    REP(i,size){
        
        int cnt = N / cycle;
        int mod = N % cycle;
        
        ans += cnt * digit;
        
        if(mod >= digit){
            ans += min(digit,mod-digit+1);
        }
        cycle *= 10;
        digit *= 10;
    }

    cout << ans << endl;
    return 0;
}
