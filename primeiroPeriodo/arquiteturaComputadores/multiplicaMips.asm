; programa de multiplica a e b com a sendo o valor no registrador $2 e b o valor no registrador $3
addi $0, $0, 100

lw $2, 0($0) ; pega o valor armazenado na posição ($0)
lw $3, 4($0) ; pega o valor armazenado na posição ($0 + 4) 
TESTE:
beq $4, $3, ARMAZENA ;verifica se $4 == $3, se for ele vai para o bloco ARMAZENA
add $5 , $5 , $2 ; Soma ao $5 o valor do registrador $2
addi $4, $4, 1 ; soma +1 ao $4
j TESTE

ARMAZENA:
sw $5, 8($0) ; armazena o valor da multiplicação no ($0+8)
FIM:
j FIM