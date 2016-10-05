while True:
    n = input('Find n! where: \nn = ')

    if n.isdigit():
        n = int(n)
        break

if n == 1:
    print(1)
elif n > 1:
    counter = 1
    for i in range(1, n + 1):
        counter *= i
    print(counter)
else:
    print('Expected a positive integer.')
