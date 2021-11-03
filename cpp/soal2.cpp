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

        void setBaris(int baris){
            this->baris = baris;
        }
        void setKolom(int kolom){
            this->kolom = kolom;
        }
        int getBaris(){
            return this->baris;
        }
        int getKolom(){
            return this->kolom;
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

        void jmlBaris(Matriks A){
            for(int i=0; i<A.getBaris(); i++){
                for(int j=0; j<A.getKolom(); j++){
                    this->nilai[i][0] += A.nilai[i][j];
                }
            }
        }
        void jmlKolom(Matriks A){
            for(int i=0; i<A.getBaris(); i++){
                for(int j=0; j<A.getKolom(); j++){
                    this->nilai[0][i] += A.nilai[j][i];
                }
            }
        }

        /*int *nilaiBaris() {
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
            return nilaiK;
        }*/
};

int main() {
    Matriks A;

    A.input();
    cout << "\nMatriks A\n";
    A.print();

    Matriks jBaris(A.getBaris(), 1);
    cout << "\nJumlah baris matriks A :\n";
    jBaris.jmlBaris(A);
    jBaris.print();

    Matriks jKolom(1, A.getKolom());
    cout << "\nJumlah kolom matriks A :\n";
    jKolom.jmlKolom(A);
    jKolom.print();
}