# here we need to count the number of distinct countries 

num = int(input())
con = set()    #an empty set is created

for i in range(num):
    s = input()  #taking num no.of inputs
    con.add(s)   #adding it to the set -> duplicate elements will not be added

print(len(con))  #length of the set gives no.of distinct countries