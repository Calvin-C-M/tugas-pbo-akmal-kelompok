class Waktu {
    private:
        int jam;
        int menit;
        
    public:
        Waktu() {
            this->jam=0;
            this->menit=0;
        }

        Waktu(int jam, int menit, int detik) {
            this->jam=jam;
            this->menit=menit;
        }

        void setJam(int jam) { this->jam=jam; }
        void setMenit(int menit) { this->menit=menit; }

        int getJam() { return this->jam; }
        int getMenit() { return this->menit; }

        bool wrongInput() {
            return (
                (this->jam > 24 || this->jam < 0)
                &&
                (this->menit > 59 || this->menit < 0)
            );
        }

        void input() {
            cout << "Masukkan jam: "; cin >>this->jam;
            cout << "Masukkan menit: "; cin >> this->menit;
            if(this->wrongInput()) {
                cout << "Waktu yang anda input tidak sesuai dengan ketentuan";
                return;
            }
        }

        string toString() {
            return this->jam + ":" + this->menit;
        }
};