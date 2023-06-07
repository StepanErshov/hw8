import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt(fname = 'hw8.txt', delimiter = ' ')

Y = []
X1 = []
X2 = []

for i in range(len(data)):
    for j in range(3):
        if j == 0:
            Y.append(data[i][j])
        elif j == 1:
            X1.append(data[i][j])
        else:
            X2.append(data[i][j])
            
plt.title('График двух зависимостей')
plt.xlabel('Ra')
plt.ylabel('V')
plt.plot(Y, X1, label = "Va")
plt.plot(Y, X2, label = "Vw")
plt.legend()
plt.show()