#include <iostream>
using namespace std;

int main() {
    int jumlah;
    string nama[10];
    int berat[10], layanan[10];
    int harga, total = 0;

    cout << "=== Aplikasi Pengelolaan Laundry ===" << endl;
    cout << "Masukkan jumlah pelanggan: ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        cout << "\nPelanggan ke-" << i + 1 << endl;
        cout << "Nama pelanggan: ";
        cin >> nama[i];
        cout << "Berat laundry (kg): ";
        cin >> berat[i];
        cout << "Layanan (1.Reguler / 2.Kilat): ";
        cin >> layanan[i];

        if (layanan[i] == 1)
            harga = berat[i] * 5000;
        else
            harga = berat[i] * 8000;

        total += harga;
        cout << "Biaya: Rp " << harga << endl;
    }

    cout << "\nTotal Pendapatan Laundry: Rp " << total << endl;
    return 0;
}