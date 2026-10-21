# Kalkulator

![Build](https://github.com/djolyy/kalkulator/actions/workflows/build.yml/badge.svg)

Preprost kalkulator v ukazni vrstici, napisan v C++. Nastal je kot testni projekt za vajo iz Gita pri predmetu Razvoj programske opreme.

## Funkcionalnosti

- seštevanje, odštevanje, množenje in deljenje
- ostanek pri deljenju (`%`) in potenciranje (`^`)
- kvadratni koren (`sqrt`)
- preverjanje napak: deljenje z 0, koren negativnega števila, napačen vnos

## Zahteve

- prevajalnik `g++` (C++17)
- `make`

## Namestitev in prevajanje

```bash
git clone git@github.com:djolyy/kalkulator.git
cd kalkulator
make
```

## Uporaba

```bash
make run
```

Primeri:

```
kalk> 3 + 4
= 7
kalk> sqrt 16
= 4
kalk> pomoc
kalk> q
```

## Struktura projekta

| Datoteka | Opis |
|---|---|
| `kalkulator.cpp` | izvorna koda |
| `Makefile` | navodila za prevajanje |
| `.github/workflows/build.yml` | CI: samodejno prevajanje in test |
| `.github/dependabot.yml` | nastavitve Dependabota |

## Prispevanje

1. Odpri issue z opisom napake ali predloga.
2. Iz veje `main` ustvari novo vejo.
3. Commit sporočila piši po dogovoru Conventional Commits.
4. Odpri pull request. Veja `main` je zaščitena, zato so spremembe mogoče le prek pull requesta.

## Avtor

Đorđe Miletić
