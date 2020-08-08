#!/usr/bin/env python
# coding: utf-8


ONU = 64
CHANNEL = 4
GROUP = 4

J = ONU
G= GROUP
W = CHANNEL
Slot = GROUP * CHANNEL



# import numpy as np
import csv

# make output file
path = f'test_{ONU}_{GROUP}_{CHANNEL}.cnf.txt'
with open(path, mode='w') as outfile:
    outfile.write('')


#
# $$ x_{i} \lor \lnot y_{i,p} \quad \forall i,p $$

# In[4]:


for i in range(J):
    tmp_one = 1 + i
    for p in range(Slot):
        tmp_l = tmp_one
        tmp_r = - (1 + ONU + i*Slot + p)
        with open(path, mode='a') as outfile:
            outfile.write(str(tmp_l) + ' ' + str(tmp_r) + ' 0\n')


#
# $$ \lnot x_{i} \lor y_{i,1} \lor y_{1,2} \lor \dots  \lor y_{i,N_{p}}$$


for i in range(J):
    tmp_one = -(1 + i)
    with open(path, mode='a') as outfile:
        outfile.write(str(tmp_one) + ' ')
    for p in range(Slot):
        tmp_p = p + i*Slot + 1 + ONU
        with open(path, mode='a') as outfile:
            outfile.write(str(tmp_p) + ' ')
    with open(path, mode='a') as outfile:
        outfile.write('0\n')


#
# $$ \lnot y_{i,p} \lor \lnot y_{i,q} \quad \forall i,p,q $$


for i in range(J):
    tmp_one = 1 + i * Slot + ONU
    for p in range(Slot):
        for q in range(p+1, Slot):
            tmp_p = - (tmp_one + p)
            tmp_q = - (tmp_one + q)
            with open(path, mode='a') as outfile:
                outfile.write(str(tmp_p) + ' ' + str(tmp_q) + ' 0\n')


#
# $$ \lnot y_{i,p} \lor \lnot y_{j,p} \quad \forall i,j,p $$


for i in range(J):
    for j in range(i+1,J):
        tmp_one_i = 1 + i * Slot + ONU
        tmp_one_j = 1 + j * Slot + ONU
        for p in range(Slot):
            tmp_p = - (tmp_one_i + p)
            tmp_q = - (tmp_one_j + p)
            with open(path, mode='a') as outfile:
                outfile.write(str(tmp_p) + ' ' + str(tmp_q) + ' 0\n')
