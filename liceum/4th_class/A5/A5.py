#Jakub Majer 4F
file_path = 'C:\\Users\\kubam\\Documents\\DEV\\4th_class\\A5\\cytaty.txt' #tutaj nalezy wkleic sciezkę do pliku z cytatami

# 1. Odczytaj cały plik
with open(file_path, 'r', encoding='utf-8') as file:
    file_content = file.read()
    print("Odczytaj cały plik:")
    print(file_content)

# 2. Odczytaj 50 znaków z pliku
with open(file_path, 'r', encoding='utf-8') as file:
    partial_content = file.read(50)
    print("\nOdczytaj 50 znaków z pliku:")
    print(partial_content)

# 3. Odczytaj pierwszą linię pliku
with open(file_path, 'r', encoding='utf-8') as file:
    first_line = file.readline()
    print("\nOdczytaj pierwszą linię pliku:")
    print(first_line)

# 4. Odczytaj plik znak po znaku do końca (EOF)
with open(file_path, 'r', encoding='utf-8') as file:
    print("\nOdczytaj plik znak po znaku do końca (EOF):")
    while True:
        char = file.read(1)
        if not char:
            break
        print(char, end='')
