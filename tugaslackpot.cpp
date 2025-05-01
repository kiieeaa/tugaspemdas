#include <iostream>
using namespace std;

class Segitiga {
    private:
        int alas, tinggi;
        int sisi1, sisi2, sisi3;
    
        float hitungLuas() {
            return 0.5 * alas * tinggi;
        }
    
        float hitungKeliling() {
            return sisi1 + sisi2 + sisi3;
        }
    
    public:
    void inputDataLuas() {
        do {
            cout << "Masukkan Alas Segitiga (1 - 50): ";
            cin >> alas;
        
            cout << "Masukkan Tinggi Segitiga (1 - 50): ";
            cin >> tinggi;
        
            if (alas < 1 || alas > 50 || tinggi < 1 || tinggi > 50 || (alas % 2 != 0)) {
                cout << "Alas yang dimasukan adalah bilangan ganjil, luas tidak dapat dihitung.\n";
            }
        } while (alas < 1 || alas > 50 || tinggi < 1 || tinggi > 50 || (alas % 2 != 0));
    }
    

        void inputDataKeliling() {
            do {
                cout << "Masukkan Sisi 1 (1 - 50): ";
                cin >> sisi1;
        
                cout << "Masukkan Sisi 2 (1 - 50): ";
                cin >> sisi2;
        
                cout << "Masukkan Sisi 3 (1 - 50): ";
                cin >> sisi3;
        
                if (sisi1 < 1 || sisi1 > 50 || sisi2 < 1 || sisi2 > 50 || sisi3 < 1 || sisi3 > 50) {
                    cout << "Input tidak valid! Semua sisi harus antara 1 - 50.\n";
                } 
                else if ((sisi1 + sisi2 <= sisi3) ||
                        (sisi1 + sisi3 <= sisi2) ||
                        (sisi2 + sisi3 <= sisi1)) {
                    cout << "Ketiga sisi tidak membentuk segitiga yang valid. Masukkan kembali.\n";
                } 
                else {
                    break; 
                }
        
            } while (true);
        };

        void tampilkanLuas() {
            inputDataLuas();
            cout << "Luas Segitiga : " << hitungLuas() << " cm2" << endl;
        }
    
        void tampilkanKeliling() {
            inputDataKeliling();
            cout << "Keliling Segitiga : " << hitungKeliling() << " cm" << endl;
        }
    };
    

int main() {
    int pilihan;

    do {
        cout << "\n=== MENU SEGITIGA ===" << endl;
        cout << "1. Hitung Luas Segitiga" << endl;
        cout << "2. Hitung Keliling Segitiga" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan Pilihan : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                Segitiga s;
                s.tampilkanLuas();
                break;
            }
            case 2: {
                Segitiga s;
                s.tampilkanKeliling();
                break;
            }
            case 3:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silahkan coba lagi." << endl;
        }
    } while (pilihan != 3);

    return 0;
}