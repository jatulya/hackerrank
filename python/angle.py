'''since ABC is a perpendicular triangle,
   BM = (1/2)AC
   BM = (1/2)(AM+CM)
   Since M is the midpoint, 
   AM = CM
   BM = (1/2)(2*CM)
   BM = CM
   Thus tri(MBC) becomes an isosceles triangle
   therefore, 
   angle(MBC) = angle(MCB)
   in tri(ABC) = tan(angle(ACB)) = AB/BC = tan(angle(MCB))
   taking its we get angle(MBC)
   '''
import math

AB, AC = int(input()), int(input())

mcb = round(math.degrees(math.atan(AB/AC)))

print(mcb+chr(176))