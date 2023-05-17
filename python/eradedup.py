# s = "AAABCADDA", K = 3, , divide s into len(s)/k substrings, remove duplicate characters from it
# output = A, BCA, DA

def merge_the_tools(string, k):

    l = len(string)
    subs = []
    i = 0
    
    while(i<l):
        subs.append(string[i:i+k])
        i+=+k

    for s in subs:
        
        temp = ""
        
        for ch in s:
            if ch in temp:
                continue
            else:
                print(ch, end="")
                temp = temp+ch

        print()

s, i = input(), int(input())
merge_the_tools(s,i) 
