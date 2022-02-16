#include <iostream>
#include <new>
#include <iomanip>

using namespace std;

int main() {
    double x, y, z, m1, m2, m3, sum;

    cin >> x;
    cin >> y;
    cin >> z;

    m1 = x * 2;
    m2 = y * 3;
    m3 = z * 5;
    sum = (m1 + m2 + m3) / 10;

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << sum << endl;

    return 0;
}