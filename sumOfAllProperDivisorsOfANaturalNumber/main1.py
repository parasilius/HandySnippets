def d(num):
    total = 0
    li = [1]

    for i in range(2, int(num / 2) + 1):
        if num % i == 0:
            if int(num / i) not in li:
                li.append(int(num / i))
            if i not in li:
                li.append(i)
    return sum(li)
