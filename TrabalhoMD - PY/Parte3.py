import numpy as np
import matplotlib.pyplot as plt

def atrator2D(r):
    x = np.random.rand()
    X = [x]

    for i in range(1999):
        x = r * x * (1 - x)
        X.append(x)

    A = X[:-1]
    B = X[1:]

    plt.scatter(A, B, marker='.', s=5)
    plt.show()

atrator2D(3.99)