""" 
   * (🐺) Exercicio 1015 - Beecrowd - "Distância Entre Dois Pontos"
"""

# Biblioteca(s)
import math

# Função para calcular a distância entre dois pontos p1(x1, y1), p2(x2, y2)
def getDistancia(x1, y1, x2, y2):
    return math.sqrt(((x2 - x1) ** 2) + ((y2 - y1) ** 2))

# Recebendo Valores
p1 = input()
p2 = input()

x1, y1 = map(float, p1.split())
x2, y2 = map(float, p2.split())

# Calculando a Distância
result = getDistancia(x1, y1, x2, y2)

# Imprimindo o resultado
print(f"{result:.4f}")

# ————————————————————————————————————————————————————————————————————————————— #
#                                                                               #
# --------------------- Código escrito por [Igor Rampazo] --------------------- #
# ------------------- GitHub:https://github.com/IgorRampazo ------------------- #
#                                                                               #
# ————————————————————————————————————————————————————————————————————————————— #