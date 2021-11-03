# ANGGOTA KELOMPOK
# - Naufal Fahrezi (140810200035)
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
        print("RATA KIRI")
        for i in reversed(range(1, self.__baris+1)) :
            counter += 1
            print(str(counter) + ".", end=" ")
            for j in range(0, i) :
                print("*", end=" ")
            print()

        print("RATA KANAN")
        counter=0
        for i in range(1, self.__baris+1) :
            counter += 1
            print(str(counter) + ".", end=" ")
            for k in range(i) :
                print(" ", end=" ")
            for j in range(self.__baris-i+1) :
                print("*", end=" ")
            print()

    def printWhile(self) :
        counter=0
        print("RATA KIRI")
        i=self.__baris
        while i >= 1 :
            j=1
            counter+=1
            print(str(counter) + ".", end=" ")
            while j<=i : 
                print("*", end=" ")
                j += 1
            i -= 1
            print()
        
        print("RATA KANAN")
        i=1
        counter=0
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
            print()

jumlahBaris=input("Masukkan jumlah baris: ")

bintangFor=Bintang(int(jumlahBaris))
bintangWhile=Bintang(int(jumlahBaris))

print("\nPrint bintang menggunakan for loop: ")
bintangFor.printFor()
print("\nPrint bintang menggunakan while loop: ")
bintangWhile.printWhile()