n = int(input('Введите число: '))
if n < 0 or n > 10**9:
    print('Вводимое число должно быть в пределах от 0 до 10^9 включительно')
    quit()
b = 1
while n > 1:
    b *= n
    n -= 1
print(b)