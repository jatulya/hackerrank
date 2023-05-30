import math
from datetime import datetime as dt

def time_Delta(time1, time2):
    
    t1 = dt.strptime(time1, "%a %d %b %Y %H:%M:%S %z")
    t2 = dt.strptime(time2, "%a %d %b %Y %H:%M:%S %z")
    
    return (abs(int((t1-t2).total_seconds())))
    
cases = int(input())

for i in range(cases):
    
    time1, time2 = input(), input()
    print(time_Delta(time1, time2))

'''
Input Format: Sun 10 Dec 2034 15:45:28 +7000
to turn it into time so as to calculate the seconds difference, we use
%a -> when week is given in abbr form
%d -> when date is given in zero-padded(00,01,08)
%b -> when month is given in abbr form 
(after running testcases, we can see they're using Jan instead of January)
%Y -> year in full zero-padded form
%H -> Hour in 24 hr format
%M -> minutes in zero-padded form
%S -> seconds in zero-padded form
:  -> we use colon because that's HH:MM:SS is the format with which time if stored
%z -> to indicate time zone

t1-t2  -> taking the difference which would be in days hour:minutes:seconds format
(t1-t2).total_seconds() -> converting it into seconds
int((t1-t2).total_seconds()) -> converting it to integer so as to get the absolute value
'''