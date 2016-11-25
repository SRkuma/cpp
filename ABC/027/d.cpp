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

    string input;
    cin >> input;
    
    vector <string> vec;
    vector <int>    value;

    int index = 0;
    string order = "";
    int plus = 0,minus = 0,num = 0;
    while(index < input.size()){
        
        if(input[index] == 'M'){
            num++;
            if(order != ""){
                vec.pb(order);
                order = "";
            }
            
            vec.pb("M");
            
        }else{
            (input[index] == '+') ? plus++ : minus++;
            order += input[index];
            if(index == input.size()-1) vec.pb(order);
        }
        index++;
    }
    //debug(plus);
    //debug(minus);
    //debug(num);
    
    int tmpP = 0, tmpM = 0;
    
    REP(i,vec.size()){
        REP(j,vec[i].size()){
            if(vec[i][j] == 'M'){
                value.pb((plus-tmpP) - (minus-tmpM));
                break;
            }
            if(vec[i][j] == '+') tmpP++;
            if(vec[i][j] == '-') tmpM++;

        }
        //cout << vec[i] << endl;
    }

    // REP(i,value.size()){
    //     cout << value[i] << endl;
    // }
    
    sort(value.begin(),value.end());

    int sumP = 0;
    int sumM = 0;
    
    REP(i,value.size()){
        (i < value.size() / 2) ? sumM += value[i] : sumP += value[i];
    }

    cout << sumP - sumM << endl;
    
    return 0;
}
