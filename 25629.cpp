#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void) {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    int odd = 0, even = 0, num = 0;
    for(int i = 0; i < N; i++) {
        cin >> num;
        if(num % 2 == 0) even += 1;
        else odd += 1;
    }
    
    if(N % 2 == 0){
        if(odd == even) cout << "1";
        else cout << "0";
    }
    else{
        if(odd - even == 1) cout << "1";
        else cout << "0";
    }

    return 0;
}