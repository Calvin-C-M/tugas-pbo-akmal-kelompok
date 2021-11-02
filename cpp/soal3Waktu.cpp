#include <iostream>
#include "waktu.cpp"

using namespace std;

class Pegawai {
    private:
        int kode;
        string nama;
        Waktu datang;
        Waktu pulang;
    public:
        Pegawai() {
            this->kode=0;
            this->nama="";
            this->datang=NULL;
            this->pulang=NULL;
        }
};

int main() {

}