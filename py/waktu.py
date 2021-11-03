class Waktu :
    def __init__(self, jam, menit) :
        self.__jam=jam
        self.__menit=menit

    def setJam(self,jam) : self.__jam=jam
    def setMenit(self,menit) : self.__menit=menit

    def getJam(self) : return self.__jam
    def getMenit(self) : return self.__menit

    # def wrongInput(self) :
    #     return (
    #         (int(self.__jam) > 24 or int(self.__jam < 0))
    #         and
    #         (int(self.__menit) > 59 or int(self.__menit < 0))
    #     )

    def input(self) :
        self.__jam=input("Masukkan jam: ")
        self.__menit=input("Masukkan menit: ")
        # if(self.wrongInput()) :
        #     print("Waktu yang anda input tidak sesuai dengan ketentuan")
        #     return

    def toString(self) : return str(self.__jam) + ":" + str(self.__menit)