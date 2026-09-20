class Solution:
    def countIntersectingIntervals(self, intervals: list[list[int]]) -> int:
        ev=[]
        for s,e in intervals:
            ev.append((s,0))
            ev.append((e,1))
        ev.sort(key=lambda x:(x[0],x[1]))
        i=0
        a=0
        for  c,t in ev:
            if t==0:
                i+=a
                a+=1
            else:
                a-=1
        return i
        
        