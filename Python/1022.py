""" 
   * (🐺) Exercicio 1022 - Beecrowd - "TDA Racional"
"""

# Biblioteca(s)
import math 
from functools import reduce

# Função para pegar o MDC depois a Fração Final
def getMdcFFinal(numerador, denomidador):
    mdc = reduce(math.gcd, [numerador, denomidador])  
    nf = int(round(numerador / mdc))
    df = int(round(denomidador / mdc))
    
    # Imprimindo o resultado
    print(f"{numerador}/{denomidador} = {nf}/{df}")

# Função para calcular o Tempo
def getTDARacional(nLines):
    for i in range(nLines):
        # Recebendo valores
        put = input().strip().split()
        
        n1 = int(put[0])
        b1 = put[1]
        d1 = int(put[2])
        
        opt = put[3]
        
        n2 = int(put[4])
        b2 = put[5]
        d2 = int(put[6])
        
        if opt == '+':
            numerador = (n1 * d2) + (n2 * d1)
            denomidador = (d1 * d2)
            getMdcFFinal(numerador, denomidador)
            
        if opt == '-':
            numerador = (n1 * d2) - (n2 * d1)
            denomidador = (d1 * d2)
            getMdcFFinal(numerador, denomidador)
            
        if opt == '*':
            numerador = (n1 * n2)
            denomidador = (d1 * d2)
            getMdcFFinal(numerador, denomidador)
            
        if opt == '/':
            numerador = (n1 * d2)
            denomidador = (n2 * d1)
            getMdcFFinal(numerador, denomidador)

# Recebendo o Numero de Repetições
nLines = int(input())
getTDARacional(nLines)

# ————————————————————————————————————————————————————————————————————————————— #
#                                                                               #
# --------------------- Código escrito por [Igor Rampazo] --------------------- #
# ------------------- GitHub:https://github.com/IgorRampazo ------------------- #
#                                                                               #
# ————————————————————————————————————————————————————————————————————————————— #