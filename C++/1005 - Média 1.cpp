#include <iostream>
#include <new>
#include <iomanip>

using namespace std;

int main() {
    double x, y, m1, m2, sum;

    cin >> x;
    cin >> y;

    m1 = x * 3.5;
    m2 = y * 7.5;

    sum = (m2 + m1) / 11;

    cout << fixed << setprecision(5);
    cout << "MEDIA = " << sum << endl;

    return 0;
}