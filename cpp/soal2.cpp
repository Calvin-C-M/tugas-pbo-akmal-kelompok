#include <iostream>
#include <vector>

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

        int getBaris() { return this->baris; }
        int getKolom() { return this->kolom; }

        void input() {
            cout << "Masukkan jumlah baris: "; cin >> this->baris;
            cout << "Masukkan jumlah kolom: "; cin >> this->kolom;
            for(int i=0; i<this->baris; i++) {
                for(int j=0; j<this->kolom; j++) {
                    cout << "Masukkan baris-" << (i+1) << " kolom-" << (j+1) << " : "; cin >> this->nilai[i][j];
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

        vector<int> getNilaiBaris() {
            vector<int> nilaiB;
            for(int i=0; i<this->baris; i++) {
                int temp=0;
                for(int j=0; j<this->kolom; j++) {
                    temp += this->nilai[i][j];
                }
                nilaiB.push_back(temp);
            }
            return nilaiB;
        }

        vector<int> getNilaiKolom() {
            vector<int> nilaiK;
            for(int i=0; i<this->baris; i++) {
                int temp=0;
                for(int j=0; j<this->kolom; j++) {
                    temp += this->nilai[j][i];
                }
                nilaiK.push_back(temp);
            }
            return nilaiK;
        }
};

int main() {
    Matriks A;

    A.input();
    cout << "\nMatriks A\n";
    A.print();
    vector<int> jumlahBaris=A.getNilaiBaris();
    vector<int> jumlahKolom=A.getNilaiKolom();
    cout << "\nJumlah baris matriks A :\n";
    for(int baris: jumlahBaris) {
        cout << baris << "\n";
    }

    cout << "\nJumlah kolom matriks A :\n";
    for(int kolom: jumlahKolom) {
        cout << kolom << "\t";
    }
}