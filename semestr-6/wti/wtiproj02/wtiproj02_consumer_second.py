import wtiproj01_client_extended as redis
import json
import time


def consume():
    return json.loads(redis.pop('queue'))


if __name__ == '__main__':
    start = time.time()
    while time.time() - start < 10:
        print(consume())
        time.sleep(0.25)
