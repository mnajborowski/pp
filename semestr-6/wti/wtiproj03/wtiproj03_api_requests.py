import requests
import time

path = 'http://127.0.0.1:5000'


def print_request(r):
    print(f'''
--------------------------------------------------------
request url: {r.url}
request body: {r.request.body}

response status: {r.status_code}`
response headers: {r.headers}
response body: {r.json()}
--------------------------------------------------------
''')


def post():
    payload = {
        "userID": 199282.0,
        "movieID": 260.0,
        "rating": 5.0,
        "Action": 1.0,
        "Adventure": 1.0,
        "Animation": 0.0,
        "Children": 0.0,
        "Comedy": 0.0,
        "Crime": 0.0,
        "Documentary": 0.0,
        "Drama": 0.0,
        "Fantasy": 0.0,
        "Film-Noir": 0.0,
        "Horror": 0.0,
        "IMAX": 0.0,
        "Musical": 0.0,
        "Mystery": 0.0,
        "Romance": 0.0,
        "Sci-Fi": 1.0,
        "Short": 0.0,
        "Thriller": 0.0,
        "War": 0.0,
        "Western": 0.0
    }
    r = requests.post(f'{path}/ratings', json=payload)
    print_request(r)


def get():
    r = requests.get(f'{path}/ratings')
    print_request(r)


def delete():
    r = requests.delete(f'{path}/ratings')
    print_request(r)


def get_avg_genre_ratings_by_all_users():
    r = requests.get(f'{path}/avg-genre-ratings/all-users')
    print_request(r)


def get_user_avg_genre_ratings(user_id):
    r = requests.get(f'{path}/avg-genre-ratings/user{user_id}')
    print_request(r)


if __name__ == '__main__':
    post()
    time.sleep(0.01)
    get()
    time.sleep(0.01)
    get_avg_genre_ratings_by_all_users()
    time.sleep(0.01)
    get_user_avg_genre_ratings(10.0)
    time.sleep(0.01)
    delete()












