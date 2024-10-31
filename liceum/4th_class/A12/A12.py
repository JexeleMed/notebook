def zlicz_wystapienia_gulden(plik):
    
    licznik = 0

    # Otwieranie pliku
    with open(plik, 'r', encoding='utf-8') as plik_txt:
        # Iteracja przez linie pliku
        for linia in plik_txt:
            # Dzielenie linii na słowa
            slowa = linia.split()

            
            licznik += slowa.count('gulden')


    return licznik


nazwa_pliku = 'slownik2.txt'


wynik = zlicz_wystapienia_gulden(nazwa_pliku)
print(f"Liczba wystąpień słowa 'gulden' w pliku {nazwa_pliku}: {wynik}")
