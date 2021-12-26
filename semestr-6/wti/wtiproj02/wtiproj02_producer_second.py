import wtiproj01_client_extended as redis
import time
import pandas as pd

df = pd.read_table('user_ratedmovies.dat')


def produce(row):
    redis.push('queue', row.to_json())


if __name__ == '__main__':
    redis.flushall()
    number = 0
    for (_, row) in df.iterrows():
        produce(row)
        print('Sent: ' + row.to_json())
        time.sleep(0.25)
