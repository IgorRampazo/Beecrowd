""" 
   * (🐺) Exercicio 1017 - Beecrowd - "Gasto de Combustível"
"""

# Função para calcular o tempo p/ tomar distancia do outro carro
def getDistancia(hrs, vel):
    return (hrs * vel) / 12

# Recebendo Valores
horas = int(input())
velMd = int(input())

# Calculando a Distância
qtdLts = float(getDistancia(horas, velMd))

# Imprimindo o resultado
print(f"{qtdLts:.3f}")

# ————————————————————————————————————————————————————————————————————————————— #
#                                                                               #
# --------------------- Código escrito por [Igor Rampazo] --------------------- #
# ------------------- GitHub:https://github.com/IgorRampazo ------------------- #
#                                                                               #
# ————————————————————————————————————————————————————————————————————————————— #