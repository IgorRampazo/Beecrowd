""" 
   * (🐺) Exercicio 1014 - Beecrowd - "Consumo"
"""

# Função para calcular o Consumo
def getConsumo(dist, comb):
    return (dist / comb)
 
# Recebendo Valores
X = int(input())
Y = float(input())

# Calculando o Consumo
result = getConsumo(X, Y)

# Imprimindo o resultado
print(f"{result:.3f} km/l")

# ————————————————————————————————————————————————————————————————————————————— #
#                                                                               #
# --------------------- Código escrito por [Igor Rampazo] --------------------- #
# ------------------- GitHub:https://github.com/IgorRampazo ------------------- #
#                                                                               #
# ————————————————————————————————————————————————————————————————————————————— #