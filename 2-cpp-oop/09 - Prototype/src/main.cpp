#include <iostream>
#include <string>
using namespace std;
/*

    Deklarasi class prototype

*/
class Player 
{
    public:
        string name;
        float hitpoints;

        // Prototype Contructor
        Player(const char*, float);

        // Display Prototype Method
        void display();

        void setName(const char*);
        void setHitpoints(float);

        string getName();
        float getHitpoints();
};
/*

    Main Method

*/
int main()
{
    Player* player1 = new Player("Marni", 100);

    player1->display();
    player1->setName("Ucup");
    player1->setHitpoints(200);

    cout << player1->getName() << endl;
    cout << player1->getHitpoints() << endl;

    return 0;
}

/*

    Penjabaran dari prototype class Player

*/
Player::Player(const char* name, float hitpoints)
{
    this->name = name;
    this->hitpoints = hitpoints;
}

void Player::display()
{
    cout << "Name      : " << this->name << endl;
    cout << "Hitpoints : " << this->hitpoints << endl;
}

void Player::setName(const char* name)
{
    this->name = name;
}

void Player::setHitpoints(float hitpoints)
{
    this->hitpoints = hitpoints;
}

string Player::getName()
{
    return this->name;
}

float Player::getHitpoints()
{
    return this->hitpoints;
}