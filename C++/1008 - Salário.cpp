#include <iostream>
#include <new>
#include <iomanip>

using namespace std;

int main() {
    int x, y;
    double z, sum;

    cin >> x;
    cin >> y;
    cin >> z;

    sum = y * z;

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << x << endl;
    cout << "SALARY = U$ " << sum << endl;

    return 0;
}