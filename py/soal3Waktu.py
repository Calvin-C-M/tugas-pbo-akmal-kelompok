from py.waktu import Waktu
import waktu

class Pegawai:
    def __init__(self,kode,nama,masuk,pulang) :
        self.__kode=kode
        self.__nama=nama
        self.__datang=masuk
        self.__pulang=pulang
        self.UPAH=50

    def setKode(self,kode) : self.__kode=kode
    def setNama(self,nama) : self.__nama=nama
    def getKode(self) : return self.__kode
    def getNama(self) : return self.__nama

    def hitungJamKerja(self) :
        jamKerja=Waktu(0,0)
        jamMasuk=self.__datang.getJam()
        jamKeluar=self.__pulang.getJam()
        if jamMasuk < jamKeluar and self.__datang.getMenit() > self.__datang.getMenit() :
            jamMasuk += 1
        jamKerja.setJam(jamMasuk-jamKeluar)
        jamKerja.setMenit(abs(self.__pulang.getMenit()-self.__datang.getMenit()))
        return jamKerja
        

    def hitungUpah(self) :
        jam=0
        if self.hitungJamKerja() > 0 :
            jam=self.hitungJamKerja().getJam()+1
        else :
            jam=self.hitungJamKerja().getJam()
        
        return jam*self.UPAH

