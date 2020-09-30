gcc -o %1.exe %1.c
%1.exe < pub_in_0%2.txt > pub_out_0%2.txt
type pub_out_0%2.txt
