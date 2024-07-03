""" 
   * (🐺) Exercicio 1018 - Beecrowd - "Cédulas"
"""

# Função para calcular o numero de notas
def getNCedulas(value):
    # Imprimindo o resultado
    contC100 = 0
    contC050 = 0
    contC020 = 0 
    contC010 = 0
    contC005 = 0 
    contC002 = 0
    contC001 = 0
    
    cedulas = [100, 50, 20, 10, 5, 2, 1]
    vo = value
    
    for cedula in cedulas:
        while value >= cedula:
            value -= cedula
            if cedula == 100: contC100 += 1
            elif cedula == 50: contC050 += 1
            elif cedula == 20: contC020 += 1
            elif cedula == 10: contC010 += 1
            elif cedula == 5: contC005 += 1
            elif cedula == 2: contC002 += 1
            elif cedula == 1: contC001 += 1
                
    print(vo)
    
    print(f"{contC100} nota(s) de R$ 100,00")
    print(f"{contC050} nota(s) de R$ 50,00")
    print(f"{contC020} nota(s) de R$ 20,00")
    print(f"{contC010} nota(s) de R$ 10,00")
    print(f"{contC005} nota(s) de R$ 5,00")
    print(f"{contC002} nota(s) de R$ 2,00")
    print(f"{contC001} nota(s) de R$ 1,00")
    

# Recebendo Valores
valor = int(input())

# Calculando o numero de notas
if (valor > 0 and valor < 1000000):
    getNCedulas(valor)

# ————————————————————————————————————————————————————————————————————————————— #
#                                                                               #
# --------------------- Código escrito por [Igor Rampazo] --------------------- #
# ------------------- GitHub:https://github.com/IgorRampazo ------------------- #
#                                                                               #
# ————————————————————————————————————————————————————————————————————————————— #