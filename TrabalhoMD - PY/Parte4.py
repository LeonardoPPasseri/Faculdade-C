import numpy as np 

import matplotlib.pyplot as plt 

def automato_celular_elementar(R, MAX, tamanho): 

    g = np.zeros(tamanho, dtype=np.int8) 

    ng = np.zeros(tamanho, dtype=np.int8) 

    codigo = bin(R)[2:].zfill(8) 

    codigo = np.array(list(codigo), dtype=np.int8) 

    print(codigo) 

    matriz_evolucao = np.zeros((MAX, tamanho), dtype=np.int8) 

    g[tamanho // 2] = 1 

    for i in range(MAX): 

        matriz_evolucao[i, :] = g 

        for j in range(1, tamanho - 1): 

            if j == 1: 

                previo = tamanho - 1 

            else: 

                previo = j - 1 

            if j == tamanho - 1: 

                prox = (j + 1) % tamanho 

            else: 

                prox = j + 1 

            if g[previo] == 0 and g[j] == 0 and g[prox] == 0: 

                ng[j] = codigo[7] 

            elif g[previo] == 0 and g[j] == 0 and g[prox] == 1: 

                ng[j] = codigo[6] 

            elif g[previo] == 0 and g[j] == 1 and g[prox] == 0: 

                ng[j] = codigo[5] 

            elif g[previo] == 0 and g[j] == 1 and g[prox] == 1: 

                ng[j] = codigo[4] 

            elif g[previo] == 1 and g[j] == 0 and g[prox] == 0: 

                ng[j] = codigo[3] 

            elif g[previo] == 1 and g[j] == 0 and g[prox] == 1: 

                ng[j] = codigo[2] 

            elif g[previo] == 1 and g[j] == 1 and g[prox] == 0: 

                ng[j] = codigo[1] 

            elif g[previo] == 1 and g[j] == 1 and g[prox] == 1: 

                ng[j] = codigo[0] 

        g = np.copy(ng) 

    plt.imshow(matriz_evolucao, cmap='binary') 

    plt.show()

R = int(input("Digite o valor de r: "))
MAX = int(input("Digite o valor de MAX: "))
tamanho = int(input("Digite o valor de tamanho: "))

automato_celular_elementar(R, MAX, tamanho) 