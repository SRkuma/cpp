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

    string a,b,c;
    char turn = 'a';
    
    cin >> a >> b >> c;

    int card_a = a.size();
    int card_b = b.size();
    int card_c = c.size();

    int a_n = 0;
    int b_n = 0;
    int c_n = 0;

    while(1){
        switch(turn){
        case 'a': turn = a[a_n]; a_n++; break;
        case 'b': turn = b[b_n]; b_n++; break;
        case 'c': turn = c[c_n]; c_n++; break;
        }
        if(a_n == card_a && turn == 'a'){
            cout << 'A' << endl;
            return 0;
        }else if(b_n == card_b  && turn == 'b'){
            cout << 'B' << endl;
            return 0;
        }else if(c_n == card_c  && turn == 'c'){
            cout << 'C' << endl;
            return 0;
        }
    }
    
    return 0;
}
