#include <iostream>
#include <string>
#include "waktu.cpp"

using namespace std;

class Pegawai {
    private:
        int kode;
        string nama;
        double jamMasuk;
        double jamKeluar;
        const int UPAH=50;

    public:
        Pegawai() {
            this->kode=0;
            this->nama="";
            this->jamMasuk=0.0;
            this->jamKeluar=0.0;
        }

        Pegawai(int kode, string nama, double masuk, double keluar) {
            this->kode=kode;
            this->nama=nama;
            this->jamMasuk=masuk;
            this->jamKeluar=keluar;
        }

        void setKode(int kode) { this->kode=kode; }
        void setNama(string nama) { this->nama=nama; }
        void setJamMasuk(double masuk) { this->jamMasuk=masuk; }
        void setJamKeluar(double keluar) { this->jamKeluar=keluar; }

        int getKode() { return this->kode; }
        string getNama() { return this->nama; }
        double getJamMasuk() { return this->jamMasuk; }
        double getJamKeluar() { return this->jamKeluar; }


        void input() {
            cout << "Masukkan kode pegawai: "; cin >> this->kode;
            cout << "Masukkan nama pegawai: "; cin >> this->nama;
            cout << "Masukkan jam masuk: "; cin >> this->jamMasuk;
            cout << "Masukkan jam keluar: "; cin >> this->jamKeluar;
        }

        void print() {
            cout << this->kode << "\t\t"
                 << this->nama << "\t\t\t"
                 << this->jamMasuk << "\t\t\t"
                 << this->jamKeluar << "\t\t\t"
                 << this->hitungJamKerja() << "\t\t\t"
                 << this->hitungUpah() << "\t\t\t";
        }

        double hitungJamKerja() {
            double tempMasuk=(this->jamMasuk < 8.0) ? 8.0 : this->jamMasuk;
            double tempKeluar=(this->jamKeluar > 16.0) ? 16.0 : this->jamKeluar;
            return tempKeluar-tempMasuk;
        }

        double hitungUpah() {
            return this->hitungJamKerja() * UPAH;
        }
};

int main() {

}