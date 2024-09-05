import random


sucursales = [f"Sucursal {i+1}" for i in range(25)]
ventas = [random.randint(1000, 10000) for _ in range(25)]  


promedio_ventas = sum(ventas) / len(ventas)


print(f"Promedio de ventas: {promedio_ventas:.2f}\n")


print("Sucursales con ventas mayores al promedio:")
for i in range(len(sucursales)):
    if ventas[i] > promedio_ventas:
        print(f"{sucursales[i]} - Ventas: {ventas[i]}")