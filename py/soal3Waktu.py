from waktu import Waktu

class Pegawai:
    def __init__(self,kode,nama,masuk,pulang) :
        self.__kode=kode
        self.__nama=nama
        self.__datang=masuk
        self.__pulang=pulang
        self.UPAH=50000

    def setKode(self,kode) : self.__kode=kode
    def setNama(self,nama) : self.__nama=nama
    def setWaktuDatang(self, dtng) : self.__datang = dtng
    def setWaktuPulang(self, plng) : self.__pulang = plng
    def getKode(self) : return self.__kode
    def getNama(self) : return self.__nama

    def input(self) :
        waktuDatang = Waktu(0, 0)
        waktuPulang = Waktu(0, 0)
        self.__kode = input("Masukkan kode pegawai: ")
        self.__nama = input("Masukkan nama pegawai: ")
        print("JAM DATANG")
        self.__datang = waktuDatang.input()
        print("JAM PULANG")
        self.__pulang = waktuPulang.input()

    def hitungJamKerja(self) :
        jamKerja=Waktu(0,0)
        jamMasuk=self.__datang.getJam()
        jamKeluar=self.__pulang.getJam()
        if jamMasuk < jamKeluar and self.__datang.getMenit() > self.__datang.getMenit() :
            jamMasuk += 1
        jamKerja.setJam(jamKeluar-jamMasuk)
        jamKerja.setMenit(abs(self.__pulang.getMenit()-self.__datang.getMenit()))
        return jamKerja

    def hitungUpah(self) :
        jam=0
        if int(self.hitungJamKerja().getMenit()) > 0 :
            jam=int(self.hitungJamKerja().getJam())+1
        else :
            jam=int(self.hitungJamKerja().getJam())
        
        return jam*self.UPAH

    def print(self) :
        print("| ", str(self.__kode), "\t"
              "| ", self.__nama, "\t"
              "| ", self.__datang.toString(), "\t\t"
              "| ", self.__pulang.toString(), "\t\t"
              "| ", self.hitungJamKerja().toString(), "\t\t"
              "| Rp", str(self.hitungUpah()), " |\n")

W1D = Waktu(0, 0)
W1P = Waktu(0, 0)
W1D.setJam(7)
W1D.setMenit(30)
W1P.setJam(17)
W1P.setMenit(20)
P1 = Pegawai(200035, "Naufal", W1D, W1P)

W2D = Waktu(0, 0)
W2P = Waktu(0, 0)
W2D.setJam(8)
W2D.setMenit(30)
W2P.setJam(14)
W2P.setMenit(30)
P2 = Pegawai(0, "", W2D, W2P)
P2.setKode(200045)
P2.setNama("Amalia")
P2.setWaktuDatang(W2D)
P2.setWaktuPulang(W2P)

P3 = Pegawai(0, "", 0, 0)
P3.input()
print("============================================================================================")
print("| Kode Pegawai\t| Nama\t\t| Waktu Datang\t| Waktu Pulang\t| Waktu Kerja\t| Upah     |")
print("============================================================================================")
P1.print()
P2.print()
P3.print()

# W4D = Waktu(0, 0)
# W4P = Waktu(0, 0)
# W4D.setJam(9)
# W4D.setMenit(30)
# W4P.setJam(19)
# W4P.setMenit(50)
# P4 = Pegawai(200059, "Deani", W4D, W4P)
# # print(str(P4.getKode()))
# print("| ", str(P4.getkode()), "\t"
#     "| ", P4.getNama(), "\t"
#     "| ", W4D.toString(),  "\t\t"
#     "| ", W4P.toString(), "\t\t"
#     "| ", P4.hitungJamKerja().toString(), "\t\t"
#     "| Rp", str(P4.hitungUpah()), " |\n")

print("============================================================================================")