#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS]; // konstans el van irva
    std::cout << '1-100 ertekek duplazasa' // hianyzo endl
        for (int i = 0;) // befejezetlen for ciklus
        {
            b[i] = i * 2;
        }
    for (int i = 0; i; i++) // befejezetlen for ciklus
    {
        std::cout << "Ertek:" // lezaratlan ln es nem ir ki erteket
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // nem float es nincs inicializalva
    for (int i = 0; i < N_ELEMENTS, i++) // elirt for ciklus
    {
        atlag += b[i] // hianyzo ;
    }
    atlag /= N_ELEMENTS; 
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}