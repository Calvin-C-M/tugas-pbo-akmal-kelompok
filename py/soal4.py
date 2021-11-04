# ANGGOTA KELOMPOK
# - Naufal Fahrezi (14081020035)
# - Amalia Nur Fitri (140810200045)
# - Calvin Calfi Montolalu (140810200053)
# - Deani Puteri Virdiana (140810200059)

class PersegiPanjang :
    def __init__(self):
        self.__panjang=0
        self.__lebar=0

    def setPersegiPanjang(self, p, l) :
        self.__panjang=p
        self.__lebar=l

    def setPanjang(self, p) : self.__panjang=p
    def setLebar(self, l) : self.__lebar=l

    def getPanjang(self) : return self.__panjang
    def getLebar(self) : return self.__lebar

    def hitungLuas(self) : return int(self.__panjang) * int(self.__lebar)

    def input(self) :
        self.__panjang=input("Masukkan panjang: ")
        self.__lebar=input("Masukkan lebar: ")

    def print(self) :
        print("Panjang = " + str(self.__panjang))
        print("Lebar = " + str(self.__lebar))

    def printLuas1(self, luas) :
        print("Luas = " + str(luas))
    
    def printLuas2(self) :
        print("Luas = " + str(self.hitungLuas()))

pp=PersegiPanjang()
pp.input()
pp.print()
pp.printLuas1(pp.hitungLuas())
#pp.printLuas2()