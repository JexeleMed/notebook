
def alkomat(LK, WK, M, SM, CZP):
    print("Wartosc promili we krwi: ")
    print((0.806 * LK * 1.2)/ (WK * M) - (SM * CZP) * 10)



LK = input("Podaj liczba kolejek zawierających po 10 gram czystego alkoholu etylowego ")
LK = float(LK)
WK = input("Podaj zawartość wody w ciele człowieka (0,58 dla mężczyzn i 0,49 dla kobiet) ")
WK = float(WK)
M = input("Podaj mase ciala ")
M = float(M)
SM = input("Podaj stała metabolizmu alkoholu (0,015 dla mężczyzn i 0,017 dla kobiet) ")
SM = float(SM)
CZP = input("Podaj czas picia w godzinach ")
CZP = float(CZP)



alkomat(LK, WK, M, SM, CZP)