#include <iostream>
using namespace std;
bool chk[10000001];

int main(void) {
    int N, num;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    while(--N >= 0) {
        cin >> num;

        if(chk[num]) {
            cout << num;
            break;
        }
        chk[num] = true;
    }

    return 0;
}