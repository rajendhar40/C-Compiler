.data
a:  .space 4  #type integer
k:  .space 4  #type integer
c:  .space 4  #type integer
t0:  .space 4  #type integer
t1:  .space 4  #type integer
t2:  .space 4  #type integer
t3:  .space 4  #type integer
t4:  .space 4  #type integer
t5:  .space 4  #type integer
t6:  .space 4  #type integer
t7:  .space 4  #type integer
.text
li   $t0,10
sw   $t0,a
main:
li   $t0,5
sw   $t0,c
li   $t0,10
li   $t1,10
slt   $t2,$t0,$t1
slt   $t0,$t1,$t0
xor $t0,$t0,$t2
sw   $t0,t0
lw   $t0,t0
blez   $t0,else1
li   $t0,100
sw   $t0,k
j endif1
else1:
li   $t0,32
sw   $t0,k
endif1:
