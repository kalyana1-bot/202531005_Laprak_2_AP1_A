#include <iostream>
using namespace std;

int main() {
    int hari;
    long denda = 0;

    cout << "============================\n";
    cout << "     Perpustakaan\n";
    cout << "============================\n";

    cout << "masukan jumlah hari terlambat\t: ";
    cin >> hari;

    if (hari <= 0) {
        denda = 0;
    } else if (hari <= 3) {
        denda = hari * 2000;
    } else if (hari <= 7) {
        denda = hari * 5000;
    } else { // hari >= 8
        denda = hari * 10000;
    }

    cout << "total denda\t\t: " << denda << endl;
    return 0;
}
