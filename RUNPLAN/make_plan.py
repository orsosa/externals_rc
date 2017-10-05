#!/usr/bin/env python
from math import asin, sqrt, degrees
from ast import literal_eval

def NuQ2ToEpTh(Nu,Q2):
    return [E-Nu, 2*degrees(asin( sqrt(Q2/(4*E*(E-Nu))) ))]


def XbQ2ToEpTh(Xb,Q2):
    return [E- Q2/(2*Mp*Xb), 2*degrees(asin( sqrt( Q2/(4*E*(E-Q2/(2*Mp*Xb)) ) ) ) ) ]

print """RUNPLAN for CLAS hadronization experiment
 inclusive:



   E     Ep    theta     W     y     x      Q2"""
f=open("binning_info_elec.txt");
BinsIn=dict()
pairs=()
for l in f:
    l=l.split();
    if l[0][0] in "#!|":
        continue
    if l[0][0] == "(":
        names=literal_eval(l[0])
        BinsIn[names[0]]=0
        BinsIn[names[1]]=0
        pairs=literal_eval(l[1])
        break

    BinsIn[l[0]]=map(lambda x: float(x),l[1:])

Mp=0.93827
E=5.014

BinsOut=[]
if 'Xb' in BinsIn.keys() and 'Q2' in BinsIn.keys():
    if (len(pairs)==0):
        pairs=tuple(  ((x,y) for x in BinsIn["Xb"] for y in BinsIn["Q2"]) )
        pairs=filter(lambda x: sqrt( x[1]/(4*E*(E-x[1]/(2*Mp*x[0])) ) )<=1 ,filter(lambda x: (E - x[1]/2/Mp/x[0])>0,pairs))

    BinsOut=map(lambda x: XbQ2ToEpTh(x[0],x[1]),pairs)        

if 'Nu' in BinsIn.keys() and 'Q2' in BinsIn.keys():
    if (len(pairs)==0):
        pairs=tuple(  ((x,y) for x in BinsIn["Nu"] for y in BinsIn["Q2"]) )
    BinsOut=map(lambda x: NuQ2ToEpTh(x[0],x[1]),pairs)

for Ep,Th in BinsOut:
    print "%.5s %.6s %.7s"%("%05.3f"%E,"%06.3f"%Ep,"%07.4f"%Th)
