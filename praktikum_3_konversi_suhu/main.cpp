/*
    PROGRAM KONVERSI SUHU
    Huwaida Rahman Yafie
    A11.2022.14687
    Rabu, 28 September 2022
*/

#include <iostream>

using namespace std;

int main()
{
    cout<< "PROGRAM KONVERSI SUHU"<<endl;
    cout<< "====================================="<<endl;

    //kamus
    float celcius, reamur, kelvin, fahrenheit;

    //input
    cout<< "Masukkan suhu celcius ('C): ";
    cin >> celcius;
    cout<< "====================================="<<endl;

    //algoritma
    reamur = 0.8 * celcius; //nilai 4/5 adalah 0.8
    kelvin = celcius + 273;
    fahrenheit = 1.8 * celcius + 32; //nilai 9/5 adalah 1.8

    //output
    cout << "Hasil konversi derajat reamur: " <<reamur<<"'R"<< endl;
    cout << "Hasil konversi derajat kelvin: " <<kelvin<<"'K"<< endl;
    cout << "Hasil konversi derajat fahrenheit: "<<fahrenheit<<"'F"<< endl;
    cout << ""<<endl;
    cout<< "====================================="<<endl;

    return 0;
}
