#include <iostream>
#include <string>

using namespace std;

int main() {
    int i;
    cin >> i;
    for (int j = 0; j < i; j++) {
        string x;
        cin >> x;
        int strLen = x.length();
        if (strLen > 10) {
            cout << x[0] << strLen - 2 << x[strLen - 1] << endl;
        }
        else {
            cout << x << endl;
        }
    }
    return 0;
}