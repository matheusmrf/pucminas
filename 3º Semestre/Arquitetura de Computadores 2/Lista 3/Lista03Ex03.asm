 LW -> tempo = 4+1+1+1+2+4  = 13ns
 SW -> tempo = 4+1+1+2+4 = 12ns
 BEQ -> tempo = 4+1+2 = 7ns
 ADD -> tempo = 4+1+1+2+1 = 9ns




    GCC = 22%lw, 11%sw, 49%alu, 16%beq, 2%j
= 0,22.13 + 0,11.12 + 0,99.2 + 0,16.7 + 0,02.1
= 6,3ns

Speedup = multiciclo / 6,3
