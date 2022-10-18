p=""
while True:
    p=p+" "+input()
    if len(p.split()) == 6:
        a, b, i, j, x, y=map(float, p.split())
        print("{:.3f}".format((a-b)*(i/j)-(x+y),))
        break