#include <iostream>
#include <vector>
using namespace std;
int main() {
        // Classic for loop
    cout << "Counting 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

        // while loop
    cout << "Countdown:" << endl;
    int n = 5;
    while (n > 0) {
        cout << n << " ";
        n--;
    }
    cout << "Liftoff!" << endl;

        // Range-based for (C++11+) — the one you'll use most
    vector<int> nums = {10, 20, 30, 40, 50};
    cout << "Numbers: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

        // do-while (runs at least once)
    int tries = 0;
    do {
         cout << "Attempt " << ++tries << endl;
    } while (tries < 3);

    return 0;
}
