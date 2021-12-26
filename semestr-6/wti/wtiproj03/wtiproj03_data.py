import pandas as pd


def merge_tables():
    df_genres = pd.read_table('movie_genres.dat')
    df_ratedmovies = pd.read_table('user_ratedmovies.dat', usecols=['userID', 'movieID', 'rating'])

    df_genres['dummy'] = 1
    df_genres = df_genres.pivot(index='movieID', columns='genre', values='dummy')

    merged = pd.merge(df_ratedmovies, df_genres, on='movieID').fillna(0.0)
    return merged


if __name__ == '__main__':
    data = merge_tables()
    for (_, row) in data.iterrows():
        print(row.to_json())