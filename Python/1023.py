""" 
   * (🐺) Exercicio 1023 - Beecrowd - "Estiagem"
"""

city_counter = 1  # Contador de cidades
N = 1  # Número de Imóveis

while N != 0:
    N = int(input())  # Lendo o número de imóveis
    
    if N != 0 and (1 <= N <= 1 * (10 ** 6)):
        num = 0  # Numerador da média ponderada
        den = 0  # Denominador da média ponderada
        imoveis = []  # Lista para armazenar os imóveis
        
        for i in range(N):
            X, Y = map(int, input().split())  # (X) n° de moradores e (Y) consumo total
            
            if (1 <= X <= 10) and (1 <= Y <= 200):
                cp = Y // X  # Consumo por Morador
                imoveis.append((cp, X))
                
                num += Y
                den += X
        
        # Ordenando os imóveis por consumo por morador (em ordem crescente)
        imoveis.sort()
        
        consumo_medio = num / den  # Calculando a média ponderada
        
        # Imprimindo a saída formatada
        print(f"Cidade# {city_counter}:")
        for consumo, moradores in imoveis:
            print(f"{moradores}-{consumo} ", end='')
        print(f"\nConsumo medio: {consumo_medio:.2f} m3.")
        
        city_counter += 1 # Incrementar Contador de Imóveis
        
# ————————————————————————————————————————————————————————————————————————————— #
#                                                                               #
# --------------------- Código escrito por [Igor Rampazo] --------------------- #
# ------------------- GitHub:https://github.com/IgorRampazo ------------------- #
#                                                                               #
# ————————————————————————————————————————————————————————————————————————————— #