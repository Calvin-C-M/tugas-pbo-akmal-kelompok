#include <iostream>

using namespace std;

class Matriks {
    private:
        int baris;
        int kolom;
        int nilai[][100];

    public:
        Matriks() {
            this->baris=0;
            this->kolom=0;
        }

        Matriks(int b, int k) {
            this->baris=b;
            this->kolom=k;
        }

        void input() {
            cout << "Masukkan jumlah baris: "; cin >> this->baris;
            cout << "Masukkan jumlah kolom: "; cin >> this->kolom;
            for(int i=0; i<this->baris; i++) {
                for(int j=0; j<this->kolom; j++) {
                    cout << "Masukkan baris-" << i << " kolom-" << j << " : "; cin >> this->nilai[i][j];
                }
            }
        }

        void print() {
            for(int i=0; i<this->baris; i++) {
                for(int j=0; j<this->kolom; j++) {
                    cout << this->nilai[i][j] << "\t";
                }
                cout << endl;
            }
        }

        int *nilaiBaris() {
            int nilaiB[this->baris];
            for(int i=0; i<this->baris; i++) {
                for(int j=0; j<this->kolom; j++) {
                    nilaiB[i] += this->nilai[i][j];
                }
            }
            return nilaiB;
        }

        int *nilaiKolom() {
            int nilaiK[this->kolom];
            for(int i=0; i<this->baris; i++) {
                for(int j=0; j<this->kolom; j++) {
                    nilaiK[j] += this->nilai[i][j];
                }
            }
        }
};

int main() {

}