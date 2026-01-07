#include <iostream>
using namespace std;

int main() {
    int jumlah;
    string nama[10];
    int pilihan[10];
    int voteReguler = 0;
    int voteKilat = 0;

    cout << "=== Sistem Voting Layanan Laundry ===" << endl;
    cout << "Masukkan jumlah responden: ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        cout << "\nResponden ke-" << i + 1 << endl;
        cout << "Nama responden: ";
        cin >> nama[i];
        cout << "Pilih layanan (1.Reguler / 2.Kilat): ";
        cin >> pilihan[i];

        if (pilihan[i] == 1) {
            voteReguler++;
        } else if (pilihan[i] == 2) {
            voteKilat++;
        } else {
            cout << "Pilihan tidak valid" << endl;
        }
    }

    cout << "\n=== Hasil Voting Laundry ===" << endl;
    cout << "Reguler : " << voteReguler << " suara" << endl;
    cout << "Kilat   : " << voteKilat << " suara" << endl;

    if (voteReguler > voteKilat) {
        cout << "Layanan terfavorit: Reguler" << endl;
    } else if (voteKilat > voteReguler) {
        cout << "Layanan terfavorit: Kilat" << endl;
    } else {
        cout << "Hasil voting seri" << endl;
    }

    return 0;
}