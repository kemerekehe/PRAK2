p=""
while True:
    p=p+" "+input()
    if len(p.split()) == 2:
        jari, tinggi=map(float, p.split())
        if jari % 7 == 0 :
            volume=jari*jari*22/7*tinggi
            luas=2*(jari*jari*22/7)+(tinggi*2*jari*22/7)
            keliling_alas=2*jari*22/7
        else:
            volume=jari*jari*3.14286*tinggi
            luas=2*(jari*jari*3.14286)+(tinggi*2*jari*22/7)
            keliling_alas=2*jari*3.14286
        print("Volume = {:.2f}".format(volume))
        print("Luas = {:.2f}".format(luas))
        print("Keliling = {:.2f}".format(keliling_alas))
        break
