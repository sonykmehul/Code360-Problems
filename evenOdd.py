oddSum = 0
evenSum = 0

n = input()

for i in n:
    i = int(i)
    if i%2 == 0:
        evenSum += i
    else:
        oddSum += i

print(evenSum, oddSum)