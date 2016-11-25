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

int main(void){
    
    string input;

    cin >> input;
    
    int cnt = 0;
    int x = 0;
    int y = 0;
    
    REP(i,input.size()){
        switch(input[i]){
        case 'U' : y++; break;
        case 'D' : y--; break;
        case 'R' : x++; break;
        case 'L' : x--; break;
        default:cnt++; break; 
        }
    }
    
    int T;

    cin >> T;
    
    int manhattan = abs(x) + abs(y);
    
    if(T == 1){
        
        manhattan += cnt;
        
    }else if(T == 2){
        
        if(manhattan < cnt){
            
            ((cnt - manhattan) % 2 == 0) ? manhattan = 0 : manhattan = 1;
            
        }else{
            manhattan -= cnt;
        }
    }
    
    cout << manhattan << endl;
    
    return 0;
}

