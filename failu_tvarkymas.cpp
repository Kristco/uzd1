#include "strukturos.h"
#include "failu_tvarkymas.h"
#include "skaiciavimai.h"

void failo_nuskaitymas(vector<Studentas>& p, int n, vector<double>& laikas){
    string failas;
    failas = "Studentai" + to_string(n) + ".txt";
    auto start = system_clock::now();
    ifstream df(failas);
    df.ignore(65536,'\n');
    p.resize(n+1);
    for(int x = 1; x <= n; x++) {
        p.at(x).nd.resize(7);
        df >> p.at(x).vardas >> p.at(x).pavarde;
        for (int y = 0; y < 7; y++) {
            df >> p.at(x).nd.at(y);
        }
        df >> p.at(x).egz;
        vidurkis_galut(p, 7, x);
    }
    df.close();
    auto end  = system_clock::now();
    duration<double> diff = end - start;
    laikas.at(1) = diff.count();
}

void isvedimas_failas(vector<Studentas> lam, vector<Studentas> fal, int n, vector<double>& laikas){
    ofstream lf("Laimetojai" + to_string(n) + ".txt");
    ofstream ff("Luzeriai" + to_string(n) + ".txt");
    auto start = system_clock::now();
    lf << setw(18) << left << "Vardas" << setw(18)  << left << "Pavarde" << setw(25) << left << "Galutinis (vidurkis)" << "\n";
    lf << "--------------------------------------------------------" << "\n";
    ff << setw(18) << left << "Vardas" << setw(18)  << left << "Pavarde" << setw(25) << left << "Galutinis (vidurkis)" << "\n";
    ff << "--------------------------------------------------------" << "\n";
    for(int x = 0; x < lam.size(); x++)
    {
        lf << setw(18) << lam.at(x).vardas << setw(18) << lam.at(x).pavarde;
        lf << fixed << setprecision(2) << setw(25) << lam.at(x).galut << "\n";
    }
    for(int x = 0; x < fal.size(); x++)
    {
        ff << setw(18) << fal.at(x).vardas << setw(18) << fal.at(x).pavarde;
        ff << fixed << setprecision(2) << setw(25) << fal.at(x).galut << "\n";
    }
    auto end  = system_clock::now();
    duration<double> diff = end - start;
    laikas.at(3) = diff.count();
}