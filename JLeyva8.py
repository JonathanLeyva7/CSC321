##Jonathan Leyva
##CSC321
##LAB-8

y = 7

user = input("Pick a number between 0-9: ")
x = int(user)

if(x > 7):
    print("Your guess was greater than")
elif (x < 7):
    print("your guess was less than")
    
if(x == y ):
    print("You Win :)")
else: print("Wrong guess :(")

for i in range(5):
    print("This computer is going to blow up in ", 5-i)

z = 0
while(z < 6):
    print("Fried Shrimp, so yummy")
    z = z + 1
    
