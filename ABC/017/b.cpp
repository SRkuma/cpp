#include <iostream>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define debug(x) cerr << #x << " = " << x << endl;
using namespace std;

int main(void){

    string str;
    cin >> str;

    int last = str.size()-1;
    int index = 0;
    while(index < last){
        
        if(str[index] != 'k' && str[index] != 'u' && str[index] != 'o'){
            
            if(str[index] == 'c'){
                if(str[index+1] != 'h'){
                    cout << "NO" << endl;
                    return 0;
                }
                index++;
            }else{
                cout << "NO" << endl;
                return 0;
            }
        }
        index++;
    }
    cout << "YES" << endl;

    return 0;
}
