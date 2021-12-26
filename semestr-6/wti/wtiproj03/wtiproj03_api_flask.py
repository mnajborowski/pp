import wtiproj03_data as data
from flask import Flask, request, jsonify
import random
import pandas as pd

app = Flask(__name__)
df = data.merge_tables()
genres = pd.read_table('movie_genres.dat')


@app.route('/ratings', methods=['POST'])
def post():
    global df
    request_json = request.get_json()
    df.append(request_json, ignore_index=True)
    return request_json


@app.route('/ratings', methods=['GET'])
def get():
    return jsonify([row.to_dict() for (_, row) in df.iloc[-10:].iterrows()])


@app.route('/ratings', methods=['DELETE'])
def delete():
    global df
    df = df[0:0]
    return jsonify('Removed all records', 204)


@app.route('/avg-genre-ratings/all-users', methods=['GET'])
def get_avg_genre_ratings_by_all_users():
    return jsonify({genre: round(random.uniform(0.0, 10.0), 1) for genre in genres['genre'].unique()})


@app.route('/avg-genre-ratings/user<float:user_id>', methods=['GET'])
def get_user_avg_genre_ratings(user_id):
    return jsonify({'user': user_id, 'genres': {genre: round(random.uniform(0.0, 10.0), 1) for genre in genres['genre'].unique()}})


if __name__ == '__main__':
    app.run()