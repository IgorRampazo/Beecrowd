""" 
   * (🐺) Exercicio 1020 - Beecrowd - "Idade em Dias"
"""

# Função para calcular o Tempo
def getConvertedAge(days):
    y = days // 365
    m = (days % 365) // 30
    d = (days % 365) % 30
    return f"{y} ano(s)\n{m} mês(es)\n{d} dia(s)"

# Recebendo Valores
dias = int(input())
age = getConvertedAge(dias)

# Imprimindo o resultado
print(age)

# ————————————————————————————————————————————————————————————————————————————— #
#                                                                               #
# --------------------- Código escrito por [Igor Rampazo] --------------------- #
# ------------------- GitHub:https://github.com/IgorRampazo ------------------- #
#                                                                               #
# ————————————————————————————————————————————————————————————————————————————— #