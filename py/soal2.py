# ANGGOTA KELOMPOK
# - Naufal Fahrezi (14081020035)
# - Amalia Nur Fitri (140810200045)
# - Calvin Calfi Montolalu (140810200053)
# - Deani Puteri Virdiana (140810200059)

class Matriks :
    def __init__(self, b, k) :
        self.baris=b
        self.kolom=k
        self.matriks=[[]]

    def setBaris(self,b) : self.baris=b
    def setKolom(self,k) : self.kolom=k

    def getBaris(self) : return self.baris
    def getKolom(self) : return self.kolom
    
    def input(self) :
        self.baris=input("Masukkan jumlah baris: ")
        self.kolom=input("Masukkan jumlah kolom: ")
        for i in range(0, self.baris) :
            for j in range(0, self.kolom) :
                self.matriks[i][j]=input("Masukkan baris ke-" + i + " kolom ke-" + j + " : ")

    def print(self) :
        for i in range(0, self.baris) :
            for j in range(0, self.kolom) : 
                print(self.matriks[i][j], end="  ")
            print("")

    def getNilaiBaris(self) :
        nilaiBaris=[]
        for i in range(0, self.baris) : 
            for j in range(0, self.kolom) :
                nilaiBaris[i] += self.matriks[i][j]
        return nilaiBaris

    def getNilaiKolom(self) :
        nilaiKolom=[]
        for i in range(0, self.baris) : 
            for j in range(0, self.kolom) :
                nilaiKolom[j] += self.matriks[i][j]
        return nilaiKolom