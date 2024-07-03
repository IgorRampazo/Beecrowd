""" 
   * (🐺) Exercicio 1010 - Beecrowd - "Cálculo Simples"
"""

# Recebendo Valores
pc1 = input()
pc2 = input()

cod1, nmp1, vlu1 = pc1.split()
cod2, nmp2, vlu2 = pc2.split()

nmp1 = int(nmp1)
vlu1 = float(vlu1)
nmp2 = int(nmp2)
vlu2 = float(vlu2)

# Realizando o Cálculo do Valor da Compra
valor_a_pagar = float((nmp1 * vlu1) + (nmp2 * vlu2))

# Imprimindo Resultado
print(f"VALOR A PAGAR: R$ {valor_a_pagar:.2f}")

# ————————————————————————————————————————————————————————————————————————————— #
#                                                                               #
# --------------------- Código escrito por [Igor Rampazo] --------------------- #
# ------------------- GitHub:https://github.com/IgorRampazo ------------------- #
#                                                                               #
# ————————————————————————————————————————————————————————————————————————————— #