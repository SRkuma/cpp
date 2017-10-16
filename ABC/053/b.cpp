#include <iostream>
#include <algorithm>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
#define debug(x)   cout << #x << " = " << x << endl;

using namespace std;

int main(void){

    string str;
    cin >> str;

    int indA = str.find('A');

    reverse(str.begin(),str.end());

    int indZ = str.size() - str.find('Z');

    cout << indZ - indA << endl;

    
    return 0;
}
