#include <iostream>
#include <string>
using namespace std;

class DenganConstructor
{
    public:
        string data;

        DenganConstructor(const char* data)
        {
            DenganConstructor::data = data;
        }

        void Show()
        {
            cout << "Ini " << data << endl;
        }
};

class TanpaConstructor
{
    public:
        string data;
    
    void Show()
        {
            cout << "Ini " << data << endl;
        }
};

int main()
{
    // Cara membuat object tanpa constructor

    TanpaConstructor object1;
    object1.data = "Object 1";
    object1.Show();

    // Cara membuat object dengan constructor

    cout << endl;

    // Menaruh data di memory stack, Cara 1:

    DenganConstructor object2 = DenganConstructor("Object 2");
    object2.Show();

    cout << endl;

    // Menaruh data di memory stack, Cara 2:

    DenganConstructor object3("Object 3");
    object3.Show();

    cout << endl;

    // Menaruh data di memory heap, Cara 3:

    string bufferobject4;
    DenganConstructor* object4 = new DenganConstructor("Object 4");
    (*object4).Show();              // dengan cara dereference
    object4->Show();                // arrow operator, mapping function atau attribute
    string data = object4->data;
    cout << data << endl;           // membuktikan arrow operator

    cout << endl;
    
    // kenapa?
    // karena kalau pake yang ada constructor nya engga bisa di deklarasi dulu
    DenganConstructor* object5;
    object5 = new DenganConstructor("Object 5");
    object5->Show();

    return 0;
}