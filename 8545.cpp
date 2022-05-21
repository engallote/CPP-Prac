#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    string str;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;

    reverse(str.begin(), str.end());

    cout << str;

    return 0;
}