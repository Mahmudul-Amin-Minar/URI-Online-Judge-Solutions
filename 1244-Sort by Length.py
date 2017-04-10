n = int(input())

for i in range(n):
    string = input()
    words = string.split()
    words.sort(key=len, reverse=True)
    print(' '.join(words))
