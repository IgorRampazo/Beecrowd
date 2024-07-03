""" 
   * (🐺) Exercicio 1021 - Beecrowd - "Notas e Moedas"
"""

# Função para calcular o Tempo
def getNotasMoedas(value):
    # Convertendo o valor para centavos
    value = round(value * 100)
    
    # Vetor de Contagem de Notas e Moedas
    vN = [0, 0, 0, 0, 0, 0]
    vM = [0, 0, 0, 0, 0, 0]
    
    # Vetor Indicador Notas e Moedas em centavos
    notas = [10000, 5000, 2000, 1000, 500, 200]
    moedas = [100, 50, 25, 10, 5, 1]
    
    # Contando as notas
    for i, nota in enumerate(notas):
        while value >= nota:
            value -= nota
            vN[i] += 1
            
    # Contando as moedas
    for i, moeda in enumerate(moedas):
        while value >= moeda:
            value -= moeda
            vM[i] += 1
            
    # Imprimindo o resultado
    print("NOTAS:")
    for i in range(6): print(f"{vN[i]} nota(s) de R$ {notas[i] / 100:.2f}")
    
    print("MOEDAS:")
    for i in range(6): print(f"{vM[i]} moeda(s) de R$ {moedas[i] / 100:.2f}")

# Recebendo Valores
valor = float(input())
getNotasMoedas(valor)

# ————————————————————————————————————————————————————————————————————————————— #
#                                                                               #
# --------------------- Código escrito por [Igor Rampazo] --------------------- #
# ------------------- GitHub:https://github.com/IgorRampazo ------------------- #
#                                                                               #
# ————————————————————————————————————————————————————————————————————————————— #