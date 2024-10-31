#Jakub Majer 4F

import statistics


f1 = open("instrukcje.txt","r")
napis = []

for line in f1:
	line = line.rstrip()
	temp = line.split(' ')
	if temp[0]=="DOPISZ":
		napis.append(temp[1])
	if temp[0]=="ZMIEN":
		napis.pop()
		napis.append(temp[1])
	if temp[0]=="USUN":
		napis.pop()
	if temp[0] == "PRZESUN":
		if temp[1] == "Z":
			napis[napis.index(temp[1])] = "A"

		else:
			Ascii = ord(temp[1]) + 1
			zmieniony = chr(Ascii)
			napis[napis.index(temp[1])] = zmieniony

print(napis)

#4.1
print(len(napis))

#4.2

instrukcje = []
licznik = 1
maksi = 1

for line in f1:
    line = line.rstrip()
    temp = line.split(' ')
    instrukcje.append(temp[0])
    
for i in range(0, len(instrukcje)):
    if instrukcje[i - 1] == instrukcje[i]:
        licznik+=1
        if licznik > maksi:
            maksi = licznik
            rodzaj = instrukcje[i]
        else:
            licznik = 1
            
print(instrukcje)
print(maksi)
print(rodzaj)

#4.3

literki = [1]
licznik = 1
maksi = 1

for line in f1:
    line = line.rstrip()
    temp = line.split(' ')
    if (temp[0] == "DOPISZ"):
        literki.append(temp[1])
        
print(statistics.mode(literki))
print(literki.count("U"))


#4.4

napis = []

for line in f1:
	line = line.rstrip()
	temp = line.split(' ')
	if temp[0]=="DOPISZ":
		napis.append(temp[1])
	if temp[0]=="ZMIEN":
		napis.pop()
		napis.append(temp[1])
	if temp[0]=="USUN":
		napis.pop()
	if temp[0] == "PRZESUN":
		if temp[1] == "Z":
			napis[napis.index(temp[1])] = "A"

		else:
			Ascii = ord(temp[1]) + 1
			zmieniony = chr(Ascii)
			napis[napis.index(temp[1])] = zmieniony

print(napis)

print(''.join(napis))