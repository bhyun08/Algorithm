#include <iostream>
using namespace std;
typedef long double ld;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    
    int a;
	cin >> a;

	cout << fixed;
	cout.precision(2);
	cout << (double)a / 4;
}