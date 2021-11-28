#include <iostream>

using namespace std;

int main() {
    // input data from user
    double a, b;
    // input operator that user selected
    char arithmetic;
    // output for the final calculation
    double result;
    
    // Main Menu
    cout << "_______________________\n";
    cout << "|                     |\n";
    cout << "|   ______________    |\n";
    cout << "|   |Calculate it|    |\n";
    cout << "|   |____________|    |\n";
    cout << "|                     |\n";
    cout << "|      \\______/       |\n";
    cout << "|_____________________|\n\n";

    // input first data
    cout << "_______________________\n";
    cout << "|Masukan Nilai Pertama|\n";
    cout << "|_____________________|\n\n";
    cin >> a;

    // input operators
    cout << "_______________________\n";
    cout << "|   Pilih  Operator   |\n";
    cout << "|   (  +  -  *  /  )  |\n";
    cout << "|_____________________|\n\n";
    cin >> arithmetic;

    // input second data
    cout << "_______________________\n";
    cout << "| Masukan Nilai Kedua |\n";
    cout << "|_____________________|\n\n";
    cin >> b;

    // Calculation Program
    switch(arithmetic){
        case '+':
            result = a + b;
            cout << "\n===========================\n";
            cout << "    ";
            cout << a;
            cout << " ";
            cout << arithmetic;
            cout << " ";
            cout << b;
            cout << " = ";
            cout << result;
            break;
        case '-':
            result = a - b;
            cout << "\n===========================\n";
            cout << "    ";
            cout << a;
            cout << " ";
            cout << arithmetic;
            cout << " ";
            cout << b;
            cout << " = ";
            cout << result;
            break;
        case '*':
            result = a * b;
            cout << "\n===========================\n";
            cout << "    ";
            cout << a;
            cout << " ";
            cout << arithmetic;
            cout << " ";
            cout << b;
            cout << " = ";
            cout << result;
            break;
        case '/':
            result = a / b;
            // Result Console Out
            cout << "\n===========================\n";
            cout << "    ";
            cout << a;
            cout << " ";
            cout << arithmetic;
            cout << " ";
            cout << b;
            cout << " = ";
            cout << result;
            break;
        default:
            cout << "\n=======|   !!!   |=========\n";
            cout << "====| Invalid Input |======\n";
            cout << "=======|   !!!   |=========\n";
    }
    
    cout << "\n\n\n";
    cin.get();
    return 0;
}