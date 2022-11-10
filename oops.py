class Human:
    def __init__(self,name,age):
        self.__name=name   #by keeping __name the name will be in private access
        self.age=age
    def difplay(self):
        print(self.__name,self.age)
h1=Human("sai",20)
h1.difplay()
