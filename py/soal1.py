# ANGGOTA KELOMPOK
# - Naufal Fahrezi (14081020035)
# - Amalia Nur Fitri (140810200045)
# - Calvin Calfi Montolalu (140810200053)
# - Deani Puteri Virdiana (140810200059)

class Bintang :
    def __init__(self, n) :
        self.__baris=n

    def setBaris(self, n) : self.__baris=n
    def getBaris(self) : return self.__baris

    def printFor(self) :
        counter=0
        for i in range(1, self.__baris+1) :
            counter += 1
            print(str(counter) + ".", end=" ")
            for k in range(i) :
                print(" ", end=" ")
            for j in range(self.__baris-i+1) :
                print("*", end=" ")
            print("\n")

    def printWhile(self) :
        counter=0
        i=1
        while i<=self.__baris :
            k=j=1
            counter+=1
            print(str(counter) + ".", end=" ")
            while k<=i :
                print(" ", end=" ")
                k+=1
            while j<=self.__baris-i+1 :
                print("*", end=" ")
                j+=1
            i += 1
            print("\n")

jumlahBaris=input("Masukkan jumlah baris: ")

bintangFor=Bintang(int(jumlahBaris))
bintangWhile=Bintang(int(jumlahBaris))

print("Print bintang menggunakan for loop: ")
bintangFor.printFor()
print("Print bintang menggunakan while loop: ")
bintangWhile.printWhile()