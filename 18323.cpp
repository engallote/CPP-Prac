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

    int N, a, d, g;

    cin >> N;
    int arr[N];
    bool chk[N + 1];

    int x = 0;
    for(int i = 0; i < N - 1; i++) {
        cin >> arr[i];
    }

    vector<int> v;
    int pre = 0;
    
    for(int i = 1; i <= N; i++) {
        fill_n(chk, N + 1, false);
        chk[i] = true;
        v.push_back(i);
        pre = i;

        for(int j = 0; j < N - 1; j++) {
            int sub = arr[j] - pre;
            if(sub > N || sub <= 0 || chk[sub]) break;

            v.push_back(sub);
            chk[sub] = true;
            pre = sub;
        }

        if(v.size() == N) {
            for(int j = 0; j < N; j++) cout << v[j] << " ";
            break;
        }

        v.clear();
    }

    return 0;
}