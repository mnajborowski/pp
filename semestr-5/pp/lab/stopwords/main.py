import functools
import collections


def increment(iterable):
    genexpr = (x + 1 for x in iterable)
    return list(genexpr)


def product(numbers):
    return functools.reduce(lambda x, y: x * y, numbers)


def palindrome(text):
    text = ''.join(list(filter(str.isalpha, text))).lower()
    return text == text[::-1]


def tokenize(text):
    words = [''.join(char for char in element if char.isalpha()) for element in text.split()]
    return [word.lower() for word in words if len(word) > 0]


def remove_stop_words(words):
    stopwords = [stopword for stopword in open('stopwords-pl.txt', encoding='utf8').read().split(', ')]
    return [str(word) for word in words if word not in stopwords and len(word) >= 2]


def count_most_frequent(text, n):
    return collections.Counter(remove_stop_words(tokenize(text))).most_common(n)


def zad1():
    print(increment([1, 2, 3, 4, 5]))


def zad2():
    print(product([1, 2, 3, 4]))


def zad3():
    print(palindrome('Tolo ma samolot'))


def zad4():
    print(tokenize('To be, or not to be - that is the question [...]'))


def zad5():
    print(remove_stop_words(tokenize('Ale urwał, ale to było dobre.')))


def zad6():
    text = open('trurl.txt', encoding='utf8').read().lower()
    print(count_most_frequent(text, 20))


def zad7():
    words = open('unixdict.txt', encoding='utf8').read().split('\n')
    dictionary = {word: ''.join(sorted(word)) for word in words}
    rev_dictionary = {}
    for key, value in dictionary.items():
        rev_dictionary.setdefault(value, set()).add(key)
    anagrams = [list(values) for key, values in rev_dictionary.items() if len(values) > 1]
    max_len = 0
    longest_anagrams = []
    for elements in anagrams:
        if len(elements[0]) > max_len:
            max_len = len(elements[0])
            longest_anagrams = elements
    print(longest_anagrams)


if __name__ == '__main__':
    zad1()
    zad2()
    zad3()
    zad4()
    zad5()
    zad6()
    zad7()
