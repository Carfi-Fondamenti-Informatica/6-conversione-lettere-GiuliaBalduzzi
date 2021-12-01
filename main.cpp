#include <iostream>
#include "prototipoconversionee.h"

using namespace std;

int main() {
    char imput;
    char valore;
    cin >> imput;
    valore = conversionelettere (imput);
    conversionelettere (imput) ? cout<<valore : cout << "errore";
    return 0;
}
