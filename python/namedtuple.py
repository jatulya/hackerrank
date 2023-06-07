from collections import namedtuple

n = int(input())

Student = namedtuple('Student', input().split())
score = 0

for i in range(n):
    
    val1, val2, val3, val4 = input().split()
    stud = Student(val1, val2, val3, val4 )
    score += int(stud.MARKS)
    
print(score/n)