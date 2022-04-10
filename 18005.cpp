#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    int a = n / 2, b = n % 2;
    if(b == 0){
        if(a % 2 == 0){
            cout << "2";
        }
        else {
            cout << "1";
        }
    }
    else{
        cout << "0";
    }
    return 0;
}