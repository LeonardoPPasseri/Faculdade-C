import matplotlib.pyplot as plt

def populacao(r, x, n):
    populacao = [x]
    for i in range(1, n):
        x = r * x * (1 - x)
        populacao.append(x)
    print(f"População final: {populacao[-1]}")
    eixo_x = list(range(1, n+1))
    plt.plot(eixo_x, populacao)
    plt.show()


n = 100

r = float(input("Digite o valor de r: "))
x = float(input("Digite o valor de x: "))

populacao(r, x, n)