#include <iostream>
#include <new>
#include <iomanip>

using namespace std;

int main() {
    int n1, n2, sum, rest, count;
    
    cin >> n1;
    cin >> n2;
    
    sum = n2 / (n1 - 1);
    rest = n2 % (n1 - 1);

    count = sum;
    if(rest > 0) {
        count += 1;
    }

    cout << count << endl;

    return 0;
}