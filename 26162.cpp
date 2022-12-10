#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <cstdlib>
using namespace std;


int main(void) {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, x;

    cin >> N;
    bool arr[200] = {false};
    arr[1] = true;

    for(int i = 2; i < 200; i++) {
        if(arr[i]) continue;
        for(int j = i + i; j < 200; j+=i) arr[j] = true;
    }

    bool flag = false;
    for(int t = 0; t < N; t++) {
        cin >> x;
        flag = false;
        for(int i = 2; i < x; i++){
            if(arr[i]) continue;
            for(int j = 2; j < x; j++){
                if(arr[j]) continue;
                if(i + j == x) {
                    flag = true;
                    break;
                }
                if(flag) break;
            }
            if(flag) break;
        }

        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}