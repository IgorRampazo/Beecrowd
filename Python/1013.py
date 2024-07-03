""" 
   * (🐺) Exercicio 1013 - Beecrowd - "O Maior"
"""

# Função para calcular o maior entre dois números
def maior_ab(a, b):
    return (a + b + abs(a - b)) // 2
 
# Recebendo Valores
put = input()
a, b, c = put.split()

a = int(a)
b = int(b)
c = int(c)

# Calculando o maior
maior = maior_ab(a, b)
maior = maior_ab(maior, c)

# Imprimindo o resultado
print(f"{maior} eh o maior")

# ————————————————————————————————————————————————————————————————————————————— #
#                                                                               #
# --------------------- Código escrito por [Igor Rampazo] --------------------- #
# ------------------- GitHub:https://github.com/IgorRampazo ------------------- #
#                                                                               #
# ————————————————————————————————————————————————————————————————————————————— #