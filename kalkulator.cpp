// Podprte operacije: + - * / % ^ ter sqrt
// Vnos: "a op b" (npr. 3 * 4) ali "sqrt x" (npr. sqrt 16)
// Avtor: Đorđe Miletić
// Predmet: Razvoj programske opreme
// Sprememba na GitHub-u

#include <cmath>
#include <iostream>
#include <sstream>
#include <string>

double sestej(double a, double b) { return a + b; }
double odstej(double a, double b) { return a - b; }
double zmnozi(double a, double b) { return a * b; }
double deli(double a, double b) { return a / b; }
double ostanek(double a, double b) { return std::fmod(a, b); }
double potenca(double a, double b) { return std::pow(a, b); }
double koren(double x) { return std::sqrt(x); }

void izpisiPomoc() {
    std::cout << "Podprte operacije:\n"
              << "  a + b     sestevanje\n"
              << "  a - b     odstevanje\n"
              << "  a * b     mnozenje\n"
              << "  a / b     deljenje\n"
              << "  a % b     ostanek pri deljenju\n"
              << "  a ^ b     potenciranje\n"
              << "  sqrt x    kvadratni koren\n"
              << "  pomoc     izpis te pomoci\n"
              << "  q         izhod\n";
}

int main() {
    std::cout << "Kalkulator v1.0 - vpisi 'pomoc' za seznam operacij, 'q' za izhod.\n";

    std::string vrstica;
    while (true) {
        std::cout << "> ";
        if (!std::getline(std::cin, vrstica)) break;

        std::istringstream vnos(vrstica);
        std::string prvi;
        if (!(vnos >> prvi)) continue;  // prazna vrstica

        if (prvi == "q") break;
        if (prvi == "pomoc") {
            izpisiPomoc();
            continue;
        }

        if (prvi == "sqrt") {
            double x;
            if (!(vnos >> x)) {
                std::cout << "Napacen vnos. Primer: sqrt 16\n";
            } else if (x < 0) {
                std::cout << "Napaka: koren negativnega stevila ni definiran.\n";
            } else {
                std::cout << "= " << koren(x) << '\n';
            }
            continue;
        }

        double a, b;
        char op;
        std::istringstream izraz(vrstica);
        if (!(izraz >> a >> op >> b)) {
            std::cout << "Napacen vnos. Primer: 3 + 4 (vpisi 'pomoc')\n";
            continue;
        }

        switch (op) {
            case '+': std::cout << "= " << sestej(a, b) << '\n'; break;
            case '-': std::cout << "= " << odstej(a, b) << '\n'; break;
            case '*': std::cout << "= " << zmnozi(a, b) << '\n'; break;
            case '/':
                if (b == 0) std::cout << "Napaka: deljenje z 0.\n";
                else std::cout << "= " << deli(a, b) << '\n';
                break;
            case '%':
                if (b == 0) std::cout << "Napaka: deljenje z 0.\n";
                else std::cout << "= " << ostanek(a, b) << '\n';
                break;
            case '^': std::cout << "= " << potenca(a, b) << '\n'; break;
            default:
                std::cout << "Operacija '" << op << "' ni podprta (vpisi 'pomoc').\n";
        }
    }

    std::cout << "Lep pozdrav" << std::endl;
    
    return 0;
}
