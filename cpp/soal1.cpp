/*
    Anggota Kelompok:
    - Naufal Fahrezi (140810200035)
    - Amalia Nur Fitri (140810200045)
    - Calvin Calfi Montolalu (140810200053)
    - Deani Puteri Virdiana (140810200059)
*/

#include <iostream>

using namespace std;

class Bintang {
    private:
        int baris;

    public:
        Bintang() {
            this->baris=0;
        }

        Bintang(int value) {
            this->baris=value;
        }

        void printFor() {
            int counter=0;
            for(int i=1; i<=this->baris; i++) {
                cout << (++counter) << ". ";
                for(int k=1; k<=i; k++) {
                    cout << "  ";
                }

                for(int j=1; j<=this->baris-i+1; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
        }

        void printWhile() {
            int counter=0;
            int i=1;
            while(i<=this->baris) {
                int j,k;
                j=k=1;

                cout << (++counter) << ". ";
                while(k<=i) {
                    cout << "  ";
                    k++;
                }
                while(j<=this->baris-i+1) {
                    cout << "* ";
                    j++;
                }
                i++;
                cout << endl;
            }
        }
};

int main() {
    int n;

    cout << "Masukkan nilai baris: "; cin >> n;

    Bintang *bintangFor=new Bintang(n);
    Bintang *bintangWhile=new Bintang(n);

    cout << "Print bintang menggunakan for loop: \n";
    bintangFor->printFor();

    cout << "Print bintang menggunakan while loop: \n";
    bintangWhile->printWhile();
}