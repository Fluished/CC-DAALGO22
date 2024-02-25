def calculate_power(base, exponent):
    return base ** exponent

base = input("Enter Base number: ")
exponent = input("Enter Exponent: ")
result = calculate_power(int(base), int(exponent))
print(f"{base} raised to the power of {exponent} is: {result}")