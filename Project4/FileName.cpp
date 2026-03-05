#include <iostream>

using namespace std;

int main() {
    int number = 663;
    int count = 0;
    const int limit = 20;

    cout << "Перші 20 чисел (> 500), що діляться на 13 і 17:" << endl;
    while (count < limit) {
        cout << count + 1 << ") " << number << endl;
        count++;
        number += 221;
    }
        
    return 0;
}