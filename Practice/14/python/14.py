n = int(input('Введите целое число: '))
if n < 0 or n > 10 ** 15:
    print('Число должно быть в промежутке от 0 до 10^15 включительно')
    quit()
a = 0
b = 1
while b <= n:
    b *= 2
    a += 1
print(a)