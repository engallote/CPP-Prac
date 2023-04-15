#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    int sum, last;
    string str;
    for(int t = 1; t <= N; t++) {
        cin >> str;
        sum = 0;
        last = 0;

        for(int i = 0; i < str.length(); i++) {
            sum += (str[i] - '0');
            if(i >= str.length() - 3) {
                last *= 10;
                last += (str[i] - '0');
            }
        }

        last *= 10;
        sum += last;

        if(sum >= 10000) sum %= 1000;
        else if(sum < 1000) sum += 1000;

        if(sum >= 1000) {
            cout << sum << endl;
        }
        else {
            string tmp = to_string(sum);
            for(int i = 0; i < 4 - tmp.length(); i++) cout << "0";
            cout << sum << endl;
        }
    }

    return 0;
}