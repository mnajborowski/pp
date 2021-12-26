import redis
import json

data = {
    'foo': 'bar',
    'ans': 42
}

r = redis.StrictRedis(port=6381)

if __name__ == '__main__':
    r.set('object', json.dumps(data))
    result = json.loads(r.get('object'))
    print(result)