#KUBA MAJER

a = input("Podaj temperaturę w Kelwinach ")
a = float(a)

def changer(x):
    x = x -273.15
    x = round(x, 8)
    print("Twoja temperatura w Celsjuszach to: ", x)

    
if a<0:
    print("Nie można wyznaczyć temperatury")
else:    
    changer(a)