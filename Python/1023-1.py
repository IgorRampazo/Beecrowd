# Número de cidades
cont_cidades = 0

# Número de Linhas
n_linhas = 1

# Cidades
cidades = []

while n_linhas != 0:
   # Recebe o número  de linhas
   n_linhas = int(input())
   
   if (1 <= n_linhas <= (1 * (10**6))):
      n, d = [0, 0]
   
      for i in range(n_linhas):
         x, y = map(int, input().split())
         
         if (1 <= x <= 10) and (1 <= y <= 200):
            n += y
            d += x
            y = y // x
            cidades.append([x, y])

      cidades.sort(key=lambda cidade: cidade[1])
      consumo_medio = n / d
      
      print(f'Cidade# {cont_cidades + 1}:')
      
      for i in range(len(cidades)):
         if i == len(cidades) - 1:
            print(f'{cidades[i][0]}-{cidades[i][1]}')
         else:
            print(f'{cidades[i][0]}-{cidades[i][1]}', end=' ')
      
      print(f'Consumo medio: {consumo_medio:.2f} m3.')
      
      cidades = []
      cont_cidades += 1