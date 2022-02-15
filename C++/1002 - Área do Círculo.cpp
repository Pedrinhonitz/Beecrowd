#include <iostream>
#include <new>
#include <iomanip>

using namespace std;
int main() {
    double n, n1, sum;
    
    n = 3.14159;
    cin >> n1;

    sum = n * n1 * n1;

    cout << fixed << setprecision(4);
    cout << "A=" << sum << endl;

    return 0;
}