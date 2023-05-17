# s = "AAABCADDA", K = 3, , divide s into len(s)/k substrings, remove duplicate characters from it
# output = A, BCA, DA

def merge_the_tools(string, k):

    l = len(string)
    subs = []  #creating an empty list
    i = 0
    
    while(i<l):
        subs.append(string[i:i+k])  #creating the substring and adding the string to the list
        i+=+k   #the iterator goes to the starting of next substring

    for s in subs:  #for every substring in the list
        
        temp = ""   # creating an empty temporary string        
        for ch in s:  #for every character in the substring           
            if ch in temp:#if the letter is present in the temp
                continue  
            else:
                print(ch, end="")  #print the letter in the same line
                temp = temp+ch  #add the letter to the string temp
        print() #newline

s, i = input(), int(input())
merge_the_tools(s,i) 
