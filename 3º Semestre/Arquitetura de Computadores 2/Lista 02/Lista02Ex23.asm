# Lista - ativ_23
.data
	msg0:.asciiz "\nColoque dois numeros"
	msg1:.asciiz "\nPrimeiro numero: "
	msg2:.asciiz "Segundo numero: "
	msg3:.asciiz "\n\tOpcoes\n(0)Finalizar \n(1) Continuar \nDigite: "
	msg4:.asciiz "\nResultado: "
	msg5:.asciiz "\nPrograma finalizado! "

.text
	Loop:
	li $v0, 4
	la $a0, msg0
	syscall # Printar "Coloque dois numeros"
	# - - -
	li $v0, 4
	la $a0, msg1
	syscall # Printar "Primeiro numero: "
	li $v0, 5
	syscall # Ler o valor
	add $s0, $zero, $v0
	# - - -
	li $v0, 4
	la $a0, msg2
	syscall # Printar "Segundo numero: "
	li $v0, 5
	syscall # Ler o valor
	add $s1, $zero, $v0
	# - - -
	addi $v1, $zero, 0
	jal Potencia # Fazer a operação
	# - - -
	li $v0, 4
	la $a0, msg4
	syscall # Printar "Resultado: "
	li $v0, 1
	move $a0, $v1
	syscall # Mostrar resultado
	# - - -
	li $v0, 4
	la $a0, msg3
	syscall # Printar "\n\tOpcoes\n(0)Finalizar \n(1) Continuar \nDigite: "
	li $v0, 5
	syscall # Ler o valor
	add $s2, $zero, $v0
	# - - -
	bne $s2, $zero, Loop
	j FIM

	Potencia:
	add $v1, $zero, $s0
	addi $s1, $s1, -1
	bne $s1, $zero, Loop2
	jr $ra
	Loop2:
	mult $v1, $s0
	mflo $v1
	addi $s1, $s1, -1
	bne $s1, $zero, Loop2
	jr $ra

	FIM:
	li $v0, 4
	la $a0, msg5 # Printar "Programa finalizado! "
	syscall
