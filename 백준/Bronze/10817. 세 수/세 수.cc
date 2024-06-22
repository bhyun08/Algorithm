#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if ((A >= B && A <= C) || (A >= C && A <= B)) {
        cout << A << endl;
    } else if ((B >= A && B <= C) || (B >= C && B <= A)) {
        cout << B << endl;
    } else {
        cout << C << endl;
    }

    return 0;
}
