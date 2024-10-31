def wczytaj_plik(filepath):
    with open(filepath, 'r') as plik:
        zawartosc = plik.readlines()
        # Usunięcie znaków niedrukowalnych i białych znaków z końca linii
        zawartosc = [linia.strip() for linia in zawartosc]
    return zawartosc

def oblicz_statystyki(liczby):
    # Inicjalizacja sumy, ilości liczb i listy liczb parzystych i nieparzystych
    suma = 0
    ilosc_liczb = 0
    parzyste = []
    nieparzyste = []

    # Iteracja po każdej linii i sumowanie liczb oraz zbieranie liczb parzystych i nieparzystych
    for linia in liczby:
        # Dzielimy linię na pojedyncze liczby, korzystając z białych znaków jako separatorów
        liczby_w_linii = linia.split()
        for liczba in liczby_w_linii:
            # Sprawdzamy, czy tekst to liczba, aby uniknąć błędów
            if liczba.isdigit() or (liczba[0] == '-' and liczba[1:].isdigit()):
                liczba = int(liczba)
                suma += liczba
                ilosc_liczb += 1

                # Dodajemy liczbę parzystą lub nieparzystą do odpowiedniej listy
                if liczba % 2 == 0:
                    parzyste.append(liczba)
                else:
                    nieparzyste.append(liczba)

    # Obliczenie średniej
    srednia = suma / ilosc_liczb if ilosc_liczb > 0 else 0

    return suma, srednia, parzyste, nieparzyste

def zapisz_do_pliku(lista, nazwa_pliku):
    with open(nazwa_pliku, 'w') as plik:
        for liczba in sorted(lista):
            plik.write(f"{liczba}\n")

filepath = 'dane.txt'
dane = wczytaj_plik(filepath)

# Wyświetlenie wczytanych danych
print("Wczytane dane:")
for linia in dane:
    print(linia)

# Obliczenie sumy, średniej oraz zebranie liczb parzystych i nieparzystych
suma, srednia, parzyste, nieparzyste = oblicz_statystyki(dane)

# Wyświetlenie wyników
print("\nSuma wszystkich liczb:", suma)
print("Średnia wszystkich liczb:", srednia)

# Zapis liczb parzystych do pliku
nazwa_pliku_parzyste = 'parzyste.txt'
zapisz_do_pliku(parzyste, nazwa_pliku_parzyste)
print(f"Liczby parzyste zostały zapisane do pliku: {nazwa_pliku_parzyste}")

# Zapis liczb nieparzystych do pliku
nazwa_pliku_nieparzyste = 'nieparzyste.txt'
zapisz_do_pliku(nieparzyste, nazwa_pliku_nieparzyste)
print(f"Liczby nieparzyste zostały zapisane do pliku: {nazwa_pliku_nieparzyste}")
