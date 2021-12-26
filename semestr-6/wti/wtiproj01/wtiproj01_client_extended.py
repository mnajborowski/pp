import redis

r = redis.StrictRedis(port=6381)

def push(key, value):
    r.lpush(key, value)


def pop(key):
    return r.lpop(key)


def lrange(key, start, stop):
    return r.lrange(key, start, stop)


def flushall():
    r.flushall()