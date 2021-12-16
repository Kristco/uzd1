#include "list/strukturos.h"
#include "list/duomenu_apdorojimas.h"
#include "list/failu_tvarkymas.h"
#include "list/antras_duomenu_apdorojimas.h"
#include "list/antras_failu_tvarkymas.h"

#include "vector/strukturos_vector.h"
#include "vector/duomenu_apdorojimas_vector.h"
#include "vector/failu_tvarkymas_vector.h"
#include "vector/antras_duomenu_apdorojimas_vector.h"
#include "vector/antras_failu_tvarkymas_vector.h"




int main()
{
    double sum;
    int kartai = 5;
    int studentu_kiekis = 1000;
    vector <double> laikas;
    laikas.resize(4);
    ofstream rf("laikas.txt");
    list<Studentas> p; list<Studentas> lam; list<Studentas> fal;
    cout << "\nList---------- \n \n";
    for(int x = 0; x < kartai; x++) {
        generavimas(studentu_kiekis, laikas);
        failo_nuskaitymas(p, studentu_kiekis, laikas);
        rusiavimas(p, lam, fal, laikas);
        isvedimas_failas(lam, fal, studentu_kiekis, laikas);
        cout << studentu_kiekis << " rusiavimas i 2 skirtingus grupes uztruko " << laikas.at(2) << " sekundziu \n";
        rf << studentu_kiekis << " " << fixed << setprecision(5) << sum << "\n";
        studentu_kiekis *= 10;
        p.clear();
        fal.clear();
        lam.clear();
    }
    cout << "\nAntras budas \n";
    studentu_kiekis = 1000;
    for(int x = 0; x < kartai; x++) {
        int d = 0;
        failo_nuskaitymas(p, studentu_kiekis, laikas);
        rusiavimas_antras(p, fal, laikas, d);
        antras_isvedimas_failas(p, fal, studentu_kiekis, laikas, d);
        cout << studentu_kiekis << " rusiavimas i 2 skirtingus grupes uztruko " << laikas.at(2) << " sekundziu \n";
        rf << studentu_kiekis << " " << fixed << setprecision(5) << sum << "\n";
        studentu_kiekis *= 10;
        p.clear();
        fal.clear();
        lam.clear();
    }
    cout << "\nVector--------- \n \n";

    studentu_kiekis = 1000;
    vector<Studentas_V> v; vector<Studentas_V> lem; vector<Studentas_V> fel;
    for(int x = 0; x < kartai; x++) {
        failo_nuskaitymas_vector(v, studentu_kiekis, laikas);
        rusiavimas_vector(v, lem, fel, studentu_kiekis, laikas);
        isvedimas_failas_vector(lem, fel, studentu_kiekis, laikas);
        cout << studentu_kiekis << " rusiavimas i 2 skirtingus grupes uztruko " << laikas.at(2) << " sekundziu \n";
        studentu_kiekis *= 10;
        v.clear();
        fel.clear();
        lem.clear();
    }
    cout << "\nAntras budas \n";
    studentu_kiekis = 1000;
    for(int x = 0; x < kartai; x++) {
        int d = 0;
        failo_nuskaitymas_vector(v, studentu_kiekis, laikas);
        rusiavimas_vector_antras(v, fel, studentu_kiekis, laikas, d);
        antras_isvedimas_failas_vector(v, fel, studentu_kiekis, laikas, d);
        cout << studentu_kiekis << " rusiavimas i 2 skirtingus grupes uztruko " << laikas.at(2) << " sekundziu \n";
        studentu_kiekis *= 10;
        v.clear();
        fel.clear();
        lem.clear();
    }
}