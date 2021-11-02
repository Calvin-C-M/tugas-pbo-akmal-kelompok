# ANGGOTA KELOMPOK
# - Naufal Fahrezi (14081020035)
# - Amalia Nur Fitri (140810200045)
# - Calvin Calfi Montolalu (140810200053)
# - Deani Puteri Virdiana (140810200059)

class PersegiPanjang :
    def __init__(self, p, l):
        self.__panjang=p
        self.__lebar=l

    def setPanjang(self, p) : self.__panjang=p
    def setLebar(self, l) : self.__lebar=l

    def getPanjang(self) : return self.__panjang
    def getLebar(self) : return self.__lebar

    def hitungLuas(self) : return self.__panjang * self.__lebar
    def hitungKeliling(self) : return (2*self.__panjang) + (2*self.__lebar)

    def print(self) :
        print("Panjang = " + self.__panjang)
        print("Lebar = " + self.__lebar)
        print("Luas = " + self.hitungLuas())
        print("Keliling = " + self.hitungKeliling())

panjang=input("Masukkan panjang: ")
lebar=input("Masukkan lebar: ")

pp=PersegiPanjang(float(panjang), float(lebar))
pp.print()