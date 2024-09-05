
valores = []


for i in range(10):
    numero = float(input(f"Ingrese el valor {i+1}: "))  
    valores.append(numero)


suma = sum(valores)


promedio = suma / len(valores)


print(f"La suma de los valores es: {suma}")
print(f"El promedio de los valores es: {promedio}")