mnemonic|imm<br />code|<br />cyc|abs<br />code|<br />cyc|zp<br />code|<br />cyc|accum<br />code|<br />cyc|impl<br />code|<br />cyc|(zp,x)<br />code|<br />cyc|(zp),y<br />code|<br />cyc|zp,x<br />code|<br />cyc|zp,y<br />code|<br />cyc|abs,x<br />code|<br />cyc|abs,y<br />code|<br />cyc|rel<br />code|<br />cyc|(abs)<br />code|<br />cyc|(abs,x)<br />code|<br />cyc|(zp)<br />code|<br />cyc|rell<br />code|<br />cyc|s<br />code|<br />cyc|[d]<br />code|<br />cyc|[d],y<br />code|<br />cyc|absl<br />code|<br />cyc|absl,x<br />code|<br />cyc|d,s<br />code|<br />cyc|(d,s),y<br />code|<br />cyc|xyc<br />code|<br />cyc
---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---
ADC|69 |2|6D |4|65 |3|||||61 |6|71 |5|75 |4|||7D |4|79 |4|||||||72 |5*|||||67 |6*|77 |6*|6F |5*|7F |5*|63 |4*|73 |7*||
AND|29 |2|2D |4|25 |3|||||21 |6|31 |5|35 |4|||3D |4|39 |4|||||||32 |5*|||||27 |6*|37 |6*|2F |5*|3F |5*|23 |4*|33 |7*||
ASL|||0E |6|06 |5|0A |2|||||||16 |6|||1E |6||||||||||||||||||||||||||||
BCC|||||||||||||||||||||||90 |2||||||||||||||||||||||||
BCS|||||||||||||||||||||||B0 |2||||||||||||||||||||||||
BEQ|||||||||||||||||||||||F0 |2||||||||||||||||||||||||
BIT|89 |2*|2C |4|24 |3|||||||||34 |4*|||3C |4*||||||||||||||||||||||||||||
BMI|||||||||||||||||||||||30 |2||||||||||||||||||||||||
BNE|||||||||||||||||||||||D0 |2||||||||||||||||||||||||
BPL|||||||||||||||||||||||10 |2||||||||||||||||||||||||
BRA|||||||||||||||||||||||80 |2*||||||||||||||||||||||||
BRK|00 |7||||||||||||||||||||||||||||||||||||||||||||||
BVC|||||||||||||||||||||||50 |2||||||||||||||||||||||||
BVS|||||||||||||||||||||||70 |2||||||||||||||||||||||||
CLC|||||||||18 |2||||||||||||||||||||||||||||||||||||||
CLD|||||||||D8 |2||||||||||||||||||||||||||||||||||||||
CLI|||||||||58 |2||||||||||||||||||||||||||||||||||||||
CLV|||||||||B8 |2||||||||||||||||||||||||||||||||||||||
CMP|C9 |2|CD |4|C5 |3|||||C1 |6|D1 |5|D5 |4|||DD |4|D9 |4|||||||D2 |5*|||||C7 |6*|D7 |6*|CF |5*|DF |5*|C3 |4*|D3 |7*||
CPX|E0 |2|EC |4|E4 |3||||||||||||||||||||||||||||||||||||||||||
CPY|C0 |2|CC |4|C4 |3||||||||||||||||||||||||||||||||||||||||||
DEC|||CE |6|C6 |5|3A |2*|||||||D6 |6|||DE |6||||||||||||||||||||||||||||
DEX|||||||||CA |2||||||||||||||||||||||||||||||||||||||
DEY|||||||||88 |2||||||||||||||||||||||||||||||||||||||
EOR|49 |2|4D |4|45 |3|||||41 |6|51 |5|55 |4|||5D |4|59 |4|||||||52 |5*|||||47 |6*|57 |6*|4F |5*|5F |5*|43 |4*|53 |7*||
INC|||EE |6|E6 |5|1A |2*|||||||F6 |6|||FE |6||||||||||||||||||||||||||||
INX|||||||||E8 |2||||||||||||||||||||||||||||||||||||||
INY|||||||||C8 |2||||||||||||||||||||||||||||||||||||||
JMP|||4C |3|||||||||||||||||||||6C |6|7C |6*|||||||||||5C |4*||||||||
JSR|||20 |6|||||||||||||||||||||||FC |8*||||||||||||||||||||
LDA|A9 |2|AD |4|A5 |3|||||A1 |6|B1 |5|B5 |4|||BD |4|B9 |4|||||||B2 |5*|||||A7 |6*|B7 |6*|AF |5*|BF |5*|A3 |4*|B3 |7*||
LDX|A2 |2|AE |4|A6 |3|||||||||||B6 |4|||BE |4||||||||||||||||||||||||||
LDY|A0 |2|AC |4|A4 |3|||||||||B4 |4|||BC |4||||||||||||||||||||||||||||
LSR|||4E |6|46 |5|4A |2|||||||56 |6|||5E |6||||||||||||||||||||||||||||
NOP|||||||||EA |2||||||||||||||||||||||||||||||||||||||
ORA|09 |2|0D |4|05 |3|||||01 |6|11 |5|15 |4|||1D |4|19 |4|||||||12 |5*|||||07 |6*|17 |6*|0F |5*|1F |5*|03 |4*|13 |7*||
PHA|||||||||48 |3||||||||||||||||||||||||||||||||||||||
PHP|||||||||08 |3||||||||||||||||||||||||||||||||||||||
PHX|||||||||DA |3*||||||||||||||||||||||||||||||||||||||
PHY|||||||||5A |3*||||||||||||||||||||||||||||||||||||||
PLA|||||||||68 |4||||||||||||||||||||||||||||||||||||||
PLP|||||||||28 |4||||||||||||||||||||||||||||||||||||||
PLX|||||||||FA |4*||||||||||||||||||||||||||||||||||||||
PLY|||||||||7A |4*||||||||||||||||||||||||||||||||||||||
ROL|||2E |6|26 |5|2A |2|||||||36 |6|||3E |6||||||||||||||||||||||||||||
ROR|||6E |6|66 |5|6A |2|||||||76 |6|||7E |6||||||||||||||||||||||||||||
RTI|||||||||40 |6||||||||||||||||||||||||||||||||||||||
RTS|||||||||60 |6||||||||||||||||||||||||||||||||||||||
SBC|E9 |2|ED |4|E5 |3|||||E1 |6|F1 |5|F5 |4|||FD |4|F9 |4|||||||F2 |5*|||||E7 |6*|F7 |6*|EF |5*|FF |5*|E3 |4*|F3 |7*||
SEC|||||||||38 |2||||||||||||||||||||||||||||||||||||||
SED|||||||||F8 |2||||||||||||||||||||||||||||||||||||||
SEI|||||||||78 |2||||||||||||||||||||||||||||||||||||||
STA|||8D |4|85 |3|||||81 |6|91 |6|95 |4|||9D |5|99 |5|||||||92 |5*|||||87 |6*|97 |6*|8F |5*|9F |5*|83 |4*|93 |7*||
STX|||8E |4|86 |3|||||||||||96 |4||||||||||||||||||||||||||||||
STY|||8C |4|84 |3|||||||||94 |4||||||||||||||||||||||||||||||||
STZ|||9C |4*|64 |3*|||||||||74 |4*|||9E |5*||||||||||||||||||||||||||||
TAX|||||||||AA |2||||||||||||||||||||||||||||||||||||||
TAY|||||||||A8 |2||||||||||||||||||||||||||||||||||||||
TRB|||1C |6*|14 |5*||||||||||||||||||||||||||||||||||||||||||
TSB|||0C |6*|04 |5*||||||||||||||||||||||||||||||||||||||||||
TSX|||||||||BA |2||||||||||||||||||||||||||||||||||||||
TXA|||||||||8A |2||||||||||||||||||||||||||||||||||||||
TXS|||||||||9A |2||||||||||||||||||||||||||||||||||||||
TYA|||||||||98 |2||||||||||||||||||||||||||||||||||||||
BRL|||||||||||||||||||||||||||||||82 |4*||||||||||||||||
COP|||||02 |7*||||||||||||||||||||||||||||||||||||||||||
JML|||||||||||||||||||||||||DC |6*||||||||||||||||||||||
JSL|||||||||||||||||||||||||||||||||||||||22 |8*||||||||
MVN|||||||||||||||||||||||||||||||||||||||||||||||54 |7*
MVP|||||||||||||||||||||||||||||||||||||||||||||||44 |7*
PEA|||F4 |5*||||||||||||||||||||||||||||||||||||||||||||
PEI|||||||||||||||||||||||||||||D4 |6*||||||||||||||||||
PER|||62 |6*||||||||||||||||||||||||||||||||||||||||||||
PHB|||||||||||||||||||||||||||||||||8B |3*||||||||||||||
PHD|||||||||||||||||||||||||||||||||0B |4*||||||||||||||
PHK|||||||||||||||||||||||||||||||||4B |3*||||||||||||||
PLB|||||||||||||||||||||||||||||||||AB |4*||||||||||||||
PLD|||||||||||||||||||||||||||||||||2B |5*||||||||||||||
REP|C2 |3*||||||||||||||||||||||||||||||||||||||||||||||
RTL|||||||||||||||||||||||||||||||||6B |6*||||||||||||||
SEP|E2 |3*||||||||||||||||||||||||||||||||||||||||||||||
TCD|||||||||5B |2*||||||||||||||||||||||||||||||||||||||
TCS|||||||||1B |2*||||||||||||||||||||||||||||||||||||||
TDC|||||||||7B |2*||||||||||||||||||||||||||||||||||||||
TSC|||||||||3B |2*||||||||||||||||||||||||||||||||||||||
TXY|||||||||9B |2*||||||||||||||||||||||||||||||||||||||
TYX|||||||||BB |2*||||||||||||||||||||||||||||||||||||||
WAI|||||||||CB |3*||||||||||||||||||||||||||||||||||||||
WDM|||||||||42 |2*||||||||||||||||||||||||||||||||||||||
XBA|||||||||EB |3*||||||||||||||||||||||||||||||||||||||
XCE|||||||||FB |2*||||||||||||||||||||||||||||||||||||||
