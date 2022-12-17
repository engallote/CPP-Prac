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

    int T, N;

    cin >> T;
    

    for(int testcase = 1; testcase <= T; testcase++) {
        cin >> N;
        N *= 8;

        string str, str2;

        cin >> str;
        str2 = "";

        cout << "Case #" << testcase << ": ";
        for(int i = 0; i < N; i+=8) {
            str2 = "";
            for(int j = i; j < i + 8; j++) {
                if(str[j] == 'I') str2 += "1";
                else str2 += "0";
            }

            int sum = 0;
            for(int j = str2.length() - 1, k = 1; j >= 0; j--, k*=2) {
                sum += (str2[j] - '0') * k;
            }

            cout << char(sum);
        }
        cout << endl;
    }

    return 0;
}