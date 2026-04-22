##Jonathan Leyva
##CSC321
##LAB-12

import math

def areaRec(base, height):
    return base * height

def areaC(radius):
    return math.pi * (radius * radius)

base = float(input("Enter the base: "))
height = float(input("Enter the height: "))

areaR = areaRec(base, height)

print("The area of the rectangle is: ", areaR)

circleR = float(input("Enter radius: "))

cirlceA = areaC(circleR)

print("The area of the circle is : ", cirlceA)

