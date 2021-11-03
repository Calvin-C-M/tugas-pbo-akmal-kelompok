# ANGGOTA KELOMPOK
# - Naufal Fahrezi (14081020035)
# - Amalia Nur Fitri (140810200045)
# - Calvin Calfi Montolalu (140810200053)
# - Deani Puteri Virdiana (140810200059)

class Matriks :
    def __init__(self, b, k) :
        self.baris=b
        self.kolom=k
        self.matriks=[b][k]

    def setBaris(self,b) : self.baris=b
    def setKolom(self,k) : self.kolom=k

    def getBaris(self) : return self.baris
    def getKolom(self) : return self.kolom
    
    def input(self) :
        temp_row=[]
        A = []
        self.baris= int(input("Masukkan jumlah baris: "))
        self.kolom= int(input("Masukkan jumlah kolom: "))
        for i in range(0, self.baris) :
            for j in range(0, self.kolom) :
                elemen=input("Masukkan baris ke-" + str(i+1) + " kolom ke-" + str(j+1) + " : ")
                temp_row.append(elemen)
            A.append(temp_row)
            temp_row=[]
        self.matriks = A

    def print(self) :
        for i in range(0, self.baris) :
            for j in range(0, self.kolom) : 
                print(self.matriks[i][j], end="\t")
            print()

    def getNilaiBaris(self) :
        # jBaris = Matriks(self.baris, 0)
        # temp = []
        # nilaiBaris = 0
        # for i in range(0, self.baris) : 
        #     for j in range(0, self.kolom) :
        #         nilaiBaris += int(self.matriks[i][j])
        #     #print("Jumlah baris ke-" + str(i+1) + " : " + str(nilaiBaris))
        #     temp.append(nilaiBaris)
        #     nilaiBaris = 0
        # jBaris.matriks = temp
        # jBaris.print()
        nilaiB=[]
        for i in range(0, self.baris) :
            temp=0
            for j in range(0, self.kolom) :
                temp += int(self.matriks[i][j])
            nilaiB.append(temp)
        
        for i in range(0, self.baris) :
            print(nilaiB[i])


    def getNilaiKolom(self) :
        # jKolom = Matriks(0, self.kolom)
        # temp = []
        # nilaiKolom = 0
        # for i in range(0, self.baris) : 
        #     for j in range(0, self.kolom) :
        #         nilaiKolom += int(self.matriks[j][i])
        #     #print("Jumlah kolom ke-" + str(i+1) + " : " + str(nilaiKolom))
        #     temp.append(nilaiKolom)
        #     nilaiKolom = 0
        # jKolom.matriks = temp
        # jKolom.print()

        nilaiK=[]
        for i in range(0, self.baris) :
            temp=0
            for j in range(0, self.kolom) :
                temp += self.matriks[j][i]
            nilaiK.append(temp)
        
        for i in range(0, self.kolom) :
            print(nilaiK[i])

A = Matriks(0,0)
A.input()
print("\nMatriks A")
A.print()

print("\nJumlah Nilai Baris Matriks A")
A.getNilaiBaris()
print("\nJumlah Nilai Kolom Matriks A")
A.getNilaiKolom()