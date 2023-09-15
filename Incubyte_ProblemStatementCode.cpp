#include <bits/stdc++.h>
using namespace std;

class Space_Craft
{
private:
    int x, y, z;    // Current position (x, y, z)
    char direction; // Current direction (N, S, E, W, U, D)
    char origin;

public:
    // Declaring Constructor SpaceCraft with x,y,z co-ordinates and directon.
    Space_Craft(int initX, int initY, int initZ, char init_Direction, char org)
    {
        x = initX;
        y = initY;
        z = initZ;
        direction = init_Direction;
        origin = org;
    }

    // Moving Backward SpaceCraft
    void Back() // b
    {
        switch (direction)
        {
        case 'N':
            y--;
            break;
        case 'S':
            y++;
            break;
        case 'E':
            x--;
            break;
        case 'W':
            x++;
            break;
        case 'U':
            z--;
            break;
        case 'D':
            z++;
            break;
        }
    }

    // Moving Forward SpaceCraft
    void Forward() // f
    {
        switch (direction)
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        case 'U':
            z++;
            break;
        case 'D':
            z--;
            break;
        }
    }

    // Moving SpaceCraft left
    void Left() // l
    {
        switch (direction)
        {
        case 'N':
            direction = 'W';
            origin = 'W';
            break;
        case 'S':
            direction = 'E';
            origin = 'E';
            break;
        case 'E':
            direction = 'N';
            origin = 'N';
            break;
        case 'W':
            direction = 'S';
            origin = 'S';
            break;
        case 'D':
            if (origin == 'N')
            {
                direction = 'W';
                origin = 'W';
                break;
            }
            else if (origin == 'S')
            {
                direction = 'E';
                origin = 'E';
                break;
            }
            else if (origin == 'E')
            {
                direction = 'N';
                origin = 'N';
                break;
            }
            else
            {
                direction = 'S';
                origin = 'S';
                break;
            }
        case 'U':
            if (origin == 'N')
            {
                direction = 'W';
                origin = 'W';
                break;
            }
            else if (origin == 'S')
            {
                direction = 'E';
                origin = 'E';
                break;
            }
            else if (origin == 'E')
            {
                direction = 'N';
                origin = 'N';
                break;
            }
            else
            {
                direction = 'S';
                origin = 'S';
                break;
            }
        }
    }

    // Moving SpaceCraft Right
    void Right() // r
    {

        switch (direction)
        {
        case 'N':
            direction = 'E';
            origin = 'E';
            break;
        case 'S':
            direction = 'W';
            origin = 'W';
            break;
        case 'E':
            direction = 'S';
            origin = 'S';
            break;
        case 'W':
            direction = 'N';
            origin = 'N';
            break;
        case 'D':
            if (origin == 'N')
            {
                direction = 'E';
                origin = 'E';
                break;
            }
            else if (origin == 'S')
            {
                direction = 'W';
                origin = 'W';
                break;
            }
            else if (origin == 'E')
            {
                direction = 'S';
                origin = 'S';
                break;
            }
            else
            {
                direction = 'N';
                origin = 'N';
                break;
            }
        case 'U':
            if (origin == 'N')
            {
                direction = 'E';
                origin = 'E';
                break;
            }
            else if (origin == 'S')
            {
                direction = 'W';
                origin = 'W';
                break;
            }
            else if (origin == 'E')
            {
                direction = 'S';
                origin = 'S';
                break;
            }
            else
            {
                direction = 'N';
                origin = 'N';
                break;
            }
        }
    }

    // Moving SpaceCraft Up
    void Up() // u
    {
        if (direction != 'U')
        {
            direction = 'U';
        }
    }

    // Moving SpaceCraft Down
    void Down() // d
    {
        if (direction != 'D')
        {
            direction = 'D';
        }
    }

    // Printing x,y,z co-ordinates and direction
    void Position()
    {
        cout << "Current Position: (" << x << ", " << y << ", " << z << "), Direction: " << direction << endl;
    }
};

int main()
{

    Space_Craft Chandrayaan(0, 0, 0, 'N', 'N');

    string instruct;
    cin >> instruct;
    cout << endl;
    for (int i = 0; i < instruct.length(); i++)
    {
        char code = instruct[i];
        switch (code)
        {
        case 'f':
            Chandrayaan.Forward();
            Chandrayaan.Position();
            break;
        case 'b':
            Chandrayaan.Back();
            Chandrayaan.Position();
            break;
        case 'l':
            Chandrayaan.Left();
            Chandrayaan.Position();
            break;
        case 'r':
            Chandrayaan.Right();
            Chandrayaan.Position();
            break;
        case 'u':
            Chandrayaan.Up();
            Chandrayaan.Position();
            break;
        case 'd':
            Chandrayaan.Down();
            Chandrayaan.Position();
            break;
        }
    }
    cout << endl;
    cout << "Final Position and Final Direction:- " << endl;
    Chandrayaan.Position();

    return 0;
}