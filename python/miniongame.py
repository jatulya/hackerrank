def minion_game(s):

    vow = {'A', 'E', 'I', 'O', 'U'}
    cons = set(map(chr, range(65,91)))
    cons = cons - vow

    stu = 0
    edd = 0
    slen = len(s)

    for i in range(0, slen):
        
        if s[i] in vow:
            for j in range(i,slen):
                sub = s[i: j+1]
                sublen = len(sub)
                print(sub)
                # checking how many times the substrings exist
                for k in range(0, slen - sublen): 
                    if sub == s[k: k+sublen]:
                        edd+=+1 #increment
        
        else:
            for j in range(i,slen):
                sub = s[i: j+1]
                sublen = len(sub)
                print(sub)
                for k in range(0, slen - sublen): 
                    if sub == s[k: k+sublen]:
                        stu+=+1 
        
    print("Eddy ", edd)
    print("Stuart ", stu)
    
    
if __name__ == '__main__':
    s = input() 
    minion_game(s)
