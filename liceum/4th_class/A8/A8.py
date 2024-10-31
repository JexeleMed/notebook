#Jakub Majer 4F

print('Podaj x:')
x = input()
x = int(x)

print('Podaj y:')
y = input()
y = int(y)
z = 5

x = x+2

if(x < y):
    x = x*z
    y = y-1
    
elif(x == y):
    y = y-z
    x = x-1
    
else:
    y = y+z
    x = x+1
    
    
print ('x =', x)
print ('y =', y)