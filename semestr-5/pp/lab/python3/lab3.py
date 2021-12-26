import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
import seaborn as sns

from sklearn.datasets import load_boston
from sklearn.model_selection import train_test_split
boston_dataset = load_boston()

df = pd.DataFrame(data=boston_dataset.get('data'), columns=boston_dataset.get('feature_names'))
df['MEDV'] = boston_dataset.get('target')

if __name__ == '__main__':
    print(boston_dataset.keys())

    print(df.head(10))
    print(df.tail(10))

    print(df.info())
    # a) W zbiorze jest 14 probek.
    # b) W kazdej kolumnie sa dane typu float64.
    # c) Nie ma kolumn zawierajacych puste wartosci.

    print(df.describe())
    # a) Srednia wspolczynnika przestepczosci wynosi 3.613524, a jego odchylenie standardowe wynosi 8.601545.
    # b) Maksymalna cena nieruchomosci wynosi 50, a minimalna cena nieruchomosci wynosi 5.
    # c) Mediana osob o najnizszym statusie spolecznym wynosi 391.440000.

    sns.distplot(df.MEDV)
    plt.show()

    matrix = df.corr()
    sns.heatmap(data=matrix, annot=True, fmt='.2')
    plt.show()
    # a) Z cena mocno skorelowane sa atrybuty ZN, RM i B.
    # b) Z cena niepowiazany jest atrybut LSTAT.
    # c) Tak, sa to atrybuty TAX i RAD.

    sns.regplot(df.MEDV, df.ZN)
    plt.show()
    sns.regplot(df.MEDV, df.INDUS)
    plt.show()
    sns.regplot(df.MEDV, df.LSTAT)
    plt.show()
    # Najbardziej przydatne podczas predykcji cen bedzie cecha najbardziej skorelowana dodatnio z cenami, czyli RM.

    X = df[['ZN', 'RM', 'B']]
    y = df['MEDV']
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2)