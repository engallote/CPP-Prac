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
    long M;

    cin >> N >> M;
    int arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int l = 0, r = 0;
    unsigned long res = 0, sum = 0;
    while(r < N) {
        if(sum + arr[r] <= M) {
            sum += arr[r];
            ++r;
        }
        else{
            if(arr[r] > M){
                ++r;
                l = r;
                sum = 0;
            }
            else {
                sum -= arr[l];
                ++l;
            }
        }
        
        if(res < sum) res = sum;
    }

    cout << res;

    return 0;
}