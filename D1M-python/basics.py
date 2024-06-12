def palindrome(x):
    temp = x
    rev = 0
    while  temp != 0:
        rev = (rev * 10) + temp % 10
        temp = temp // 10
    if x == rev: 
        print('palindrome')
    else: 
        print('not palindrome')

def isPrime(n):
    for i in range(2, n//2):
        if n % i == 0: return False
    return True

def primes(n):
    if n < 2: return
    for i in range(2, n):
        if isPrime(i): print(i)


def p1(n):
    for x in range(0, n):
        print('* ' * n)

def p2(n):
    for x in range(0, n):
        print(' ' * x, end='')
        for y in range(0, n-x):
            print(str(n-x-y) + ' ', end='')
        print()

def p3(n):
    for x in range(1, n+1):
        for y in range(1, n+1):
            if x == y or x + y == n+1:
                print('x ', end='')
            else: 
                print('  ' , end='')
        print()


print('-----------------------')
p1(5)
print('-----------------------')
p2(5)
print('-----------------------')
p3(5)
print('-----------------------')
