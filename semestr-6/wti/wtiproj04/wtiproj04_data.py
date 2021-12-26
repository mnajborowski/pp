import pandas as pd
import numpy as np


def merge_tables():
    df_genres = pd.read_table('movie_genres.dat')
    df_ratedmovies = pd.read_table('user_ratedmovies.dat', usecols=['userID', 'movieID', 'rating'])

    df_genres['dummy'] = 1
    df_genres = df_genres.pivot(index='movieID', columns='genre', values='dummy')
    genres = df_genres.columns

    merged = pd.merge(df_ratedmovies, df_genres, on='movieID').fillna(0.0)
    return merged, genres.tolist()


def get_genre_means(ratings, genres):
    means = {genre: ratings['rating'][ratings[genre] == 1].mean() for genre in genres}

    ratings_unbiased = ratings.copy()
    for genre in genres:
        ratings_unbiased.loc[ratings_unbiased[genre] == 1, 'rating'] = ratings_unbiased['rating'] - means[genre]

    return means, ratings_unbiased


def get_user_genre_means(ratings, genres, user_id):
    means = {'user_id': user_id,
             'genre_ratings': {genre: ratings['rating'][(ratings[genre] == 1) & (ratings['userID'] == user_id)].mean()
                               for genre in genres}}
    return means


def get_user_profile_vector(ratings, genres, user_id):
    means, _ = get_genre_means(ratings, genres)
    user_means = get_user_genre_means(ratings, genres, user_id)
    user_profile_vector = {'user_id': user_id,
                           'genre_ratings': {
                               genre: 0.0 if np.isnan(means[genre] - user_means['genre_ratings'][genre]) else
                               means[genre] - user_means['genre_ratings'][genre] for genre in genres}}
    return user_profile_vector


if __name__ == '__main__':
    ratings, genres = merge_tables()
    user_profile_vector = get_user_profile_vector(ratings, genres, 75)
    print(user_profile_vector)
