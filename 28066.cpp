#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <cmath>
#include <bitset>
#include <cstdlib>
using namespace std;

int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;

    queue<int> q;
    for(int i = 1; i <= N; i++) q.push(i);

    int last = 0;
    while(q.size() > 1) {
        int num = q.front();
        last = num;

        for(int i = 0; i < K && !q.empty(); i++) q.pop();

        q.push(num);
    }

    cout << last << endl;

    return 0;
}