#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
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

    set<string> s;
    string str;
    for(int t = 1; t <= N; t++) {
        cin >> str;
        
        if(str.length() >= 6) {
            string tmp = str.substr(str.length() - 6);
            if(tmp == "Cheese") {
                s.insert(str);
            }
        }
    }

    if(s.size() >= 4) {
        cout << "yummy" << endl;
    }
    else {
        cout << "sad" << endl;
    }

    return 0;
}