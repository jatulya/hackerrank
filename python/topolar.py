import cmath

complex_num = complex(input())

tup = cmath.polar(complex_num) #polar() returns a tuple (r, theta)

print(tup[0])
print(tup[1])