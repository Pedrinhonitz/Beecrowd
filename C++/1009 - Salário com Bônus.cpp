#include <iostream>
#include <new>
#include <iomanip>

using namespace std;

int main() {
    char name[255];
    double x, y, sum;

    cin >> name;
    cin >> x;
    cin >> y;

    sum = (y * 0.15) + x;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << sum << endl;

    return 0;
}