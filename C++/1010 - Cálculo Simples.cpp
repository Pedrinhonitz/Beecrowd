#include <iostream>
#include <new>
#include <iomanip>

using namespace std;

int main() {
    int x, y, x1, y1;
    double z, z1, sum;
    
    cin >> x >> y >> z >> x1 >> y1 >> z1;
    
    sum = (y * z) + (y1 * z1);

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << sum << endl;

    return 0;
}