import random


valores = [random.randint(50, 100) for _ in range(500)]


pares = sum(1 for numero in valores if numero % 2 == 0)
impares = sum(1 for numero in valores if numero % 2 != 0)


print(f"Se generaron {pares} números pares.")
print(f"Se generaron {impares} números impares.")