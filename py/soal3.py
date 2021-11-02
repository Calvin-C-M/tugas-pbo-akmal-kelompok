# ANGGOTA KELOMPOK
# - Naufal Fahrezi (14081020035)
# - Amalia Nur Fitri (140810200045)
# - Calvin Calfi Montolalu (140810200053)
# - Deani Puteri Virdiana (140810200059)

UPAH=50

class Pegawai :
    def __init__(self, kode, nama, masuk, keluar) :
        self.__kode=kode
        self.__nama=nama
        self.__jamMasuk=masuk
        self.__jamKeluar=keluar

    def setKode(self,kode) : self.__kode=kode
    def setNama(self,nama) : self.__nama=nama
    def setJamMasuk(self,masuk) : self.__jamMasuk=masuk
    def setJamKeluar(self,keluar) : self.__jamKeluar=keluar

    def getKode(self) : return self.__kode
    def getNama(self) : return self.__nama
    def getJamMasuk(self) : return self.__jamMasuk
    def getJamKeluar(self) : return self.__jamKeluar

    def hitungJamKerja(self) :
        tempMasuk=8.0 if self.__jamMasuk < 8.0 else self.__jamMasuk
        tempKeluar=16.0 if self.__jamKeluar > 16.0 else self.__jamKeluar
        return tempKeluar-tempMasuk

    def hitungUpah(self) : return self.hitungJamKerja() * UPAH

    def print(self) :
        print("Kode Pegawai = " + self.__kode)
        print("Nama Pegawai = " + self.__nama)
        print("Jam Masuk = " + self.__jamMasuk)
        print("Jam Keluar = " + self.__jamKeluar)
        print("Lama Kerja = " + self.__hitungJamKerja)
        print("Total Upah = " + self.__hitungUpah)