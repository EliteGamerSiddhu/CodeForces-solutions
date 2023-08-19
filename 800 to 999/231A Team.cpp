#include <iostream>
#include <string>

using namespace std;

int main() {
    int probs;
    cin >> probs;
    int sure = 0;
    for (int i = 0; i < probs; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x + y + z > 1) {
            sure++;  
        }
    }
    cout << sure;
    return 0;
}