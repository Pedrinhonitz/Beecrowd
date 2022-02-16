#include <iostream>
#include <new>
#include <iomanip>

using namespace std;

int main() {
    int w, x, y, z, sum;

    cin >> w;
    cin >> x;
    cin >> y;
    cin >> z;

    sum = (w * x) - (y * z);

    cout << "DIFERENCA = " << sum << endl;

    return 0;
}