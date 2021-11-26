/*
    TIPE DATA FUNDAMENTAL

    1 byte = 8-bit
    1-bit = [ 0 ]                 =>  binary number
    [ 0 ][ 0 ][ 0 ][ 0 ][ 0 ][ 0 ][ 0 ][ 0 ]    =>  1 byte 

    binary number:
    [ 0 ][ 0 ][ 0 ]         =   0
    [ 0 ][ 0 ][ 1 ]         =   1
    [ 0 ][ 1 ][ 0 ]         =   2
    [ 0 ][ 1 ][ 1 ]         =   3
    [ 1 ][ 0 ][ 0 ]         =   4


    int => 32-bit 
    bit didepan dipake untuk tanda (+/-) jadi sisa 31-bit

*/

#include <limits>
#include <iostream>

using namespace std;

int main() {

    // deklarasi integer a
    int a = 2;

    /*
    =============================================================
        Zona Pembuktian
    =============================================================
    */
    cout << "nilai a: " << a << endl;
    // untuk melihat ukuran dari a satuan byte
    cout << sizeof(a) << " byte" << endl;
    // Untuk melihat nilai maksimumm
    cout << "Nilai Maksimum: ";
    cout << numeric_limits<int>::max() << endl;
    // Untuk melihat nilai minimum
    cout << "Nilai Minimum: ";
    cout << numeric_limits<int>::min() << endl;

    /*
    =============================================================
        List Tipe Data
    =============================================================
    */
    // Bilangan Bulat
    unsigned int bulatTanpaTanda = 4;    
    int bulat1 = 1;                     // 4 byte = 32-bit
    short bulat2 = 2;                   // 2 byte = 16-bit
    long bulat3 = 3;                    // 8 byte = 64-bit

    // Bilangan Desimal
    float desimal1 = 1.1;               // 4 byte
    double desimal2 = 2.2;              // 8 byte

    // Character 1-byte
    char huruf = 'a';

    // Boolean (true/false) 8-byte
    bool kondisi = true;

    return 0;
}