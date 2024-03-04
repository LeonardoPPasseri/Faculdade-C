import numpy as np
import matplotlib.pyplot as plt

def bifurcation_map():
    R = np.linspace(0.5, 4, 20000)
    X = []
    Y = []
    for r in R:
        X.append(r)
        x = np.random.rand()
        for i in range(1000):
            x = x*r*(1-x)
        Y.append(x)
    plt.scatter(X, Y, marker='.', s=1)
    plt.show()
bifurcation_map()