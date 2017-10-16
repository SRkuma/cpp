#include<iostream>

using namespace std;
//C. Scc Puzzle

//図形sと図形cの数がそれぞれ与えられる(1≦s,c≦10^12)
//cを2つ組み合わせてsを作ることができる

// "scc"がいくつ作れるかを出力する

int main(void){

    long long s,c;
    cin >> s >> c;

    //sの数だけsccが作れるだけのcの数(理想のc)
    long long idealC = s*2;
    //足りないcの数
    long long lackC = idealC - c;

    long long ans = 0;

    if(idealC <= c){  //cの数が理想のcより多い時
        c -= idealC;
        ans = s;
    }else{            //cが足りない時
        c = 0;
        ans = s;
        //足し過ぎた分引く
        ans -= (lackC+1)/2;
    }
    
    //cが余っている場合4つで"scc"が作れる
    ans += c / 4;

    cout << ans << endl;

    return 0;
}
