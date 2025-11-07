def power(x, n):
    # Базовый случай
    if n == 0:
        return 1.0
    # Рекурсивный случай
    return x * power(x, n - 1)

# Тестирование
x, n = 2.0, 5
print(f"{x}^{n} = {power(x, n)}")

# Отладочная проверка (pdb)
# import pdb; pdb.set_trace()
# power(2, 5)
