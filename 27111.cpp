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

    int N;

    cin >> N;

    int arr[200001];
    fill_n(arr, 200001, 0);

    int a, b, res = 0;
    for(int i = 0; i < N; i++) {
        cin >> a >> b;
        if(b == 0) {//out
            if(arr[a] != 1) {//안에 들어간 적이 없었다
                res += 1;
            }
        }
        else {//in
            if(arr[a] != 0) res += 1;//처음이 아니거나 나온 적이 없다
        }

        arr[a] = b;
    }

    for(int i = 1; i <= 200000; i++) if(arr[i] == 1) res += 1;

    cout << res;

    return 0;
}