#include <iostream>

using namespace std;

class PersegiPanjang {
    private:
        float panjang;
        float lebar;

    public:
        PersegiPanjang() {
            this->panjang=0;
            this->lebar=0;
        }

        PersegiPanjang(float p, float l) {
            this->panjang=p;
            this->lebar=l;
        }

        void input() {
            cout << "Input Panjang: "; cin >> this->panjang;
            cout << "Input Lebar: "; cin >> this->lebar;
        }

        void setPanjang(float p) { this->panjang=p; }
        void setLebar(float l) { this->lebar=l; }

        float getPanjang() { return this->panjang; }
        float getLebar() { return this->lebar; }

        float hitungLuas() { return this->panjang * this->lebar; }
        float hitungKeliling() { return (2*this->panjang) + (2*this->lebar); }

        void print() {
            cout << "\nPanjang = " << this->panjang;
            cout << "\nLebar = " << this->lebar;
            cout << "\nLuas = " << this->hitungLuas();
            cout << "\nKeliling = " << this->hitungKeliling();
        }
};

int main() {
    PersegiPanjang *pp1 = new PersegiPanjang();
    PersegiPanjang *pp2 = new PersegiPanjang();
    PersegiPanjang *pp3 = new PersegiPanjang(15, 5);

    cout << "\nPERSEGI PANJANG 1" << endl;
    int panjang, lebar;
    cout << "Masukkan Panjang: "; cin >> panjang;
    cout << "Masukkan Lebar: "; cin >> lebar;
    pp1->setLebar(lebar);
    pp1->setPanjang(panjang);
    pp1->print();

    cout << "\nPERSEGI PANJANG 2" << endl;
    pp2->input();
    pp2->print();

    cout << "\nPERSEGI PANJANG 3" << endl;
    pp3->print();
}