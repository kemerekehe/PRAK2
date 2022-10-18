import math
p=""
while True:
    p=p+" "+input()
    if len(p.split()) == 2:
        jari, tinggi=map(float, p.split())
        a,b=map(int, p.split())
        c=math.sqrt(b**2-a**2)
        print("Alas = {} cm".format(int(c)))
        print("Tinggi = %d cm" %(int(a)))
        print("Keliling = {} cm".format(int(a+b+c)))
        print("Luas = %d cm^2" %(int(a*c/2)))
        break