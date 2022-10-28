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

    queue<pair<int,int>> q;
    int res[N] = {};

    int x = 0;
    for(int i = 0; i < N; i++) {
        cin >> x;
        q.push(make_pair(i, x));
    }

    int time = 1;
    while(!q.empty()) {
        int idx = q.front().first, num = q.front().second;
        q.pop();
        // cout << "time : " << time << " ... " << idx << " " << num << endl;
        res[idx] = time;

        if(num - 1 > 0) {
            q.push(make_pair(idx, num - 1));
        }

        time += 1;
    }

    for(int i = 0; i < N; i++) cout << res[i] << " ";
    return 0;
}