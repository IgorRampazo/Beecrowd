""" 
   * (🐺) Exercicio 1019 - Beecrowd - "Conversão de Tempo"
"""

# Função para calcular o Tempo
def getConvertedTime(time):
   h = time // 3600
   m = (time % 3600) // 60
   s = (time % 3600) % 60
   return f"{h}:{m:0}:{s:0}"

# Recebendo Valores
N = int(input())
time = getConvertedTime(N)

# Imprimindo o resultado
print(time)

# ————————————————————————————————————————————————————————————————————————————— #
#                                                                               #
# --------------------- Código escrito por [Igor Rampazo] --------------------- #
# ------------------- GitHub:https://github.com/IgorRampazo ------------------- #
#                                                                               #
# ————————————————————————————————————————————————————————————————————————————— #