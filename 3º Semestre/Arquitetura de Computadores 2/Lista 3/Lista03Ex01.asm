main:
    #define params int $a0 and $a1
    jal question22

question22:
    sw $a0, $s0 #address
    sw  $a1, $s1 #quantity
    addi $t0, $zero, 1 #counter
    addi $s2, $zero, 1 #aux



   LOOP:
        andi $t1, $t0, 1 #if t0 is even, returns 0 to t1
        sll $t3, $t0, 2 #multiplies 4x
        beq $t0, $zero, L1
        sll $t2, $t0, 1 #t2 has count x2
        sub $t2, t2, $s2 #t2 now has desired value for odd cases
        sw $t2, $t3($s0)
        addi $t0, $zero, 1
        bgt $t0, $s1, EXIT
        j LOOP

    L2: sw $t0, $t3($s0)
        addi $t0, $zero, 1
        bgt $t0, $s1, EXIT
        j LOOP

    EXIT:
        sw $zero, $t0 #reset counter
        sw $v0, $zero

    LOOP2:
        sll $t3, $t0, 2 #multiplies 4x
        add $v0, $v0, $t3($s0)
        bgt $t0, $s1, EXIT2
        j LOOP2

    EXIT2:
        jr $ra
