""" 
   * (🐺) Exercicio 1012 - Beecrowd - "Área"
"""

# Recebendo Valores
put = input()
A, B, C = put.split()

A = float(A)
B = float(B)
C = float(C)

# Imprimindo Resultado dos Cáculos
print(f"TRIANGULO: {((A * C) / 2):.3f}")
print(f"CIRCULO: {((C ** 2) * 3.14159):.3f}")
print(f"TRAPEZIO: {((A + B) * (C / 2)):.3f}")
print(f"QUADRADO: {(B ** 2):.3f}")
print(f"RETANGULO: {(A * B):.3f}")

# ————————————————————————————————————————————————————————————————————————————— #
#                                                                               #
# --------------------- Código escrito por [Igor Rampazo] --------------------- #
# ------------------- GitHub:https://github.com/IgorRampazo ------------------- #
#                                                                               #
# ————————————————————————————————————————————————————————————————————————————— #