#include <iostream>
#include <math.h>
#include "waktu.cpp"

using namespace std;

class Pegawai {
    private:
        int kode;
        string nama;
        Waktu datang;
        Waktu pulang;
        const int UPAH=50;

    public:
        Pegawai() {
            this->kode=0;
            this->nama="";
            this->datang.setJam(0);
            this->datang.setMenit(0);
            this->pulang.setJam(0);
            this->pulang.setMenit(0);
        }

        Pegawai(int kode, string nama, Waktu dtng, Waktu plng) {
            this->kode=kode;
            this->nama=nama;
            this->datang=dtng;
            this->pulang=plng;
        }

        void setKode(int kode) { this->kode=kode; }
        void setNama(string nama) { this->nama=nama; }

        int getKode() { return this->kode; }
        string getNama() { return this->nama; }

        void input() {
            cout << "Masukkan kode pegawai: "; cin >> this->kode;
            cout << "Masukkan nama pegawai: "; cin >> this->nama;
            cout << "JAM DATANG" << endl;
            this->datang.input();
            cout << "JAM PULANG" << endl;
            this->pulang.input();
        }

        Waktu hitungJamKerja() {
            Waktu jamKerja;

            int jamMasuk=this->datang.getJam();
            int jamKeluar=this->pulang.getJam();

            if(jamMasuk < jamKeluar && this->datang.getMenit() > this->pulang.getMenit()) {
                jamMasuk++;
            }

            jamKerja.setJam(jamMasuk-jamKeluar);
            jamKerja.setMenit(abs(this->pulang.getMenit() - this->pulang.getMenit()));
            
            return jamKerja;
        }

        double hitungUpah() {
            int jam=(this->hitungJamKerja().getMenit() > 0) ? (this->hitungJamKerja().getJam()+1) : (this->hitungJamKerja().getJam());
            return jam*UPAH;
        }

        void print() {
            cout << this->kode << "\t\t"
                 << this->nama << "\t\t\t"
                 << this->datang.toString() << "\t\t\t"
                 << this->pulang.toString() << "\t\t\t"
                 << this->hitungJamKerja().toString() << "\t\t\t"
                 << this->hitungUpah();
        }
};

int main() {

}