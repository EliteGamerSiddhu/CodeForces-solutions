#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int x = 0;
    int run = 0;
    cin >> run;
    vector<string> command(run);
    for (int i = 0; i < run; i++) cin >> command[i];
    for (auto& el : command) {
        (el[0] == '+' || el[el.length() - 1] == '+') ? x++ : x--;
    }
    cout << x;
    return 0;
}