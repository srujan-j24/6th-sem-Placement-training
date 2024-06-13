# write a program given a sorted array of size N
# and a number X, you need to find the number of occurrences of X in array
# 1 <= N <= 1051 <= arr[i] <= 1061 <= X <= 106

def occurences(x, n, array):
    if x > 106:
        return 0
    if n > 1051:
        return 0
    count = 0
    j = 0
    for i in range(n):
        if array[j] > x:
            break
        elif array[j] != x and array[j+1] != x:
            j+=2
        elif  array[j] == x and array[j+1] == x:
            count+=2
            j+=2
        elif array[j] == x:
            count+=1
            j+=1
    return count

# a = [1, 1, 2, 2, 2, 2, 3]
# print(occurences(2, 7, a))

def addw(a, b):
    return a - (-b)

# print(addw(-10 , 5))

def modd(a, b):
    
    return a - ( (a // b) * b)

def div(a, b):
    # 13 2 6 
    # 14 -2 -7
    # -11 2 -5
    q = 0
    sign = (a//a) * (b//b)
    a = abs(a)
    b = abs(b)
    while(a > b):
        q+=1
        a -= b

    return q * sign

# print(div(13, 2))




def highestPrimeFactor(n):
    primes = [2, 3, 5, 7, 9]
    for x in primes:
        while(n % x == 0):
            n = n // x
            if n == 1:
                return x
    return n

# print(highestPrimeFactor(49))


def missingNum():
    n = int(input("enter n: "))
    ary = []
    print("Enter array values")
    for j in range(n-1):
        ary.append(int(input()))

    ary.sort()
    prev = 0
    for x in ary:
        if x == prev + 1:
            prev = x
        else:
            return prev+1
    return n

# print("misssing num is" , missingNum())


def morethanonce():
    n = int(input("enter n: "))
    a = []
    print("Enter array values")
    for j in range(n-1):
        a.append(int(input()))

    occurences = []
    for _ in range(n):
        occurences.append(0)

    for x in a:
        occurences[x] = occurences[x] + 1

    flag = 0
    for i in range(n):
        if(occurences[i] > 1):
            flag += 1
            print(i)

    if flag == 0:
        print(-1)



morethanonce()
