#include <iostream>
#include <string>

using namespace std;

class Player
{
    public:
        string nama;

        // Constructor
        Player(const char* nama)
        {
            Player::nama = nama;
            cout << "Player " << Player::nama << " dibikin." << endl;
        }
        // Destructor
        ~Player()
        {
            cout << "Player " << Player::nama << " dihapus." << endl;
        }

};

void membuatPlayerStack()
{
    Player stackPlayer = Player("Andy.Stack");
    // Stack automatis terdelete ketika akhir dari kurung kurawal
}

void membuatPlayerHeap()
{
    Player* heapPlayer = new Player("Andy.Heap");
    // Heap harus didelete manual mungkin(?)
    delete heapPlayer;
}

void membuatPlayerStackPointer(Player* &playerPointer)
{
    Player stackPlayer = Player("stack");
    playerPointer = &stackPlayer;
}

void membuatPlayerHeapPointer(Player* &playerPointer)
{
    Player* heapPlayer = new Player("stack");
    playerPointer = heapPlayer;
    // delete heapPlayer;
}

Player createStackPlayer()
{
    Player stackPlayer = Player("stack di create");
    return stackPlayer;
}

Player* createHeapPlayer()
{
    Player* heapPlayer = new Player("heap di create");
    return heapPlayer;
}

int main()
{
    membuatPlayerStack();
    membuatPlayerHeap();

    // simulasi MEMORY LEAK
    cout << "\nMemory Leak" << endl;
    Player* playerPointer1;
    membuatPlayerStackPointer(playerPointer1);
    // cout << (*playerPointer1).nama << endl; // TIDAK TERJADI APA APA 

    Player* playerPointer2;
    membuatPlayerHeapPointer(playerPointer2);
    cout << playerPointer2->nama << endl; // LEAK MEMORY
    playerPointer2->nama = "Acak-Acakan";
    cout << playerPointer2->nama << endl; // LEAK MEMORY
    delete playerPointer2;
    // cout << playerPointer2->nama << endl; // Memory Freed

    cout << "\nReturn Object" << endl;
    Player playerReturnStack = createStackPlayer();
    cout << playerReturnStack.nama << endl;

    Player* playerReturnHeap = createHeapPlayer();
    cout << playerReturnHeap->nama << endl;
    delete playerReturnHeap;

    return 0;
}