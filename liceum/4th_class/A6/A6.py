def alkomat(LK, WK, M, SM, CZP):
    try:
        LK = float(LK)
        WK = float(WK)
        M = float(M)
        SM = float(SM)
        CZP = float(CZP)

        if WK < 0 or WK > 1 or SM < 0 or SM > 1:
            print("Nieprawidłowa zawartość wody lub stała metabolizmu alkoholu.")
            return
        if M <= 0 or CZP < 0:
            print("Nieprawidłowa masa ciała lub czas picia.")
            return

        BAC = ((0.806 * LK * 1.2) / (WK * M)) - (SM * CZP) * 10
        if BAC < 0:
            result = "Alkohol we krwi: 0 (Jesteś trzeźwy/a)"
        else:
            result = f"Alkohol we krwi: {BAC:.2f} promila10"

        with open('wynik.txt', 'w') as file:
            file.write("Wprowadzone dane:\n")
            file.write(f"LK: {LK}\nWK: {WK}\nM: {M}\nSM: {SM}\nCZP: {CZP}\n\n")
            file.write("Wynik:\n")
            file.write(result)

        print("Wyniki zapisane w pliku 'wynik.txt'.")

    except ValueError:
        print("Proszę wprowadzić poprawne wartości liczbowe.")

# Wprowadzanie danych
LK = input("Podaj liczbę kolejek zawierających po 10 gram czystego alkoholu etylowego: ")
WK = input("Podaj zawartość wody w ciele człowieka (0.58 dla mężczyzn i 0.49 dla kobiet): ")
M = input("Podaj masę ciała: ")
SM = input("Podaj stałą metabolizmu alkoholu (0.015 dla mężczyzn i 0.017 dla kobiet): ")
CZP = input("Podaj czas picia w godzinach: ")

# Obliczanie i wyświetlanie wyniku, zapisanie wyniku do pliku
alkomat(LK, WK, M, SM, CZP)
