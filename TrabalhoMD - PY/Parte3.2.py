import matplotlib.pyplot as plt
import numpy as np

def atrator(r):
    x = np.random.rand()
    X = [x]
    for i in range(999):
        x = r * x * (1 - x)
        X.append(x)

    A = X[:-2]
    B = X[1:-1]
    C = X[2:]

    plt.figure()
    plt.plot(X)
    plt.savefig("./Sequencia.png")
    ax = fig.add_subplot(111, projection='3d')
    fig = plt.figure()
    
    ax.scatter(A, B, C, marker='o')
    plt.savefig("./Atrator.png")

atrator(3.99)