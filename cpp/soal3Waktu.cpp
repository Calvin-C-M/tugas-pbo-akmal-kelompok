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
        const int UPAH=50000;

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
        void setWaktuDatang(Waktu dtng) { this->datang=dtng; }
        void setWaktuPulang(Waktu plng) { this->pulang=plng; }

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

            jamKerja.setJam(jamKeluar-jamMasuk);
            jamKerja.setMenit(abs(this->pulang.getMenit() - this->pulang.getMenit()));
            
            return jamKerja;
        }

        double hitungUpah() {
            int jam=(this->hitungJamKerja().getMenit() > 0) ? (this->hitungJamKerja().getJam()+1) : (this->hitungJamKerja().getJam());
            return jam*UPAH;
        }

        void print() {
            cout << this->kode << "\t\t"
                 << this->nama << "\t\t" 
                 << this->datang.toString() << "\t\t"
                 << this->pulang.toString() << "\t\t"
                 << this->hitungJamKerja().toString() << "\t\t" 
                 << "Rp" << this->hitungUpah() << endl;
        }
};

int main() {
    Waktu W1D;
    Waktu W1P;
    W1D.setJam(7);
    W1D.setMenit(30);
    W1P.setJam(17);
    W1P.setMenit(20);
    Pegawai P1(200035, "Naufal", W1D, W1P);
    P1.print();

    Pegawai P2;
    P2.setKode(200045);
    P2.setNama("Amalia");
    Waktu W2D;
    Waktu W2P;
    W2D.setJam(8);
    W2D.setMenit(30);
    W2P.setJam(14);
    W2P.setMenit(30);

    Pegawai P3;
    P3.input();
    cout << "==================================================================================\n";
    cout << "| Kode Pegawai | \tNama\t | Waktu Datang | Waktu Pulang | Waktu Kerja | \tUpah\t |\n";
    cout << "==================================================================================\n";
    P1.print();
    P2.print();
    P3.print();

    Waktu W4D;
    Waktu W4P;
    W4D.setJam(9);
    W4D.setMenit(30);
    W4P.setJam(19);
    W4P.setMenit(50);
    Pegawai P4(200059, "Deani", W4D, W4P);
    cout << P4.getKode() << "\t"
         << P4.getNama() << "\t";
    W4D.toString();
    W4P.toString();
    P4.hitungJamKerja().toString();
    cout << P4.hitungUpah() << "\t";
}