#include <bits/stdc++.h>
#include <ncurses.h>
using namespace std;

class Zombie
{
    private:
        int hit_point;
        int speed;
        int damage;
        int x_coord;
        int y_coord;

    public:
        // we have this contructor to prevent some bug where the zombie are not intiallized.
        Zombie(int hit_point = 0 , int speed = 0 , int damage = 0 , int x_coord = 0 , int y_coord = 0);
        
        bool is_dead();
        
};

class Gun
{
    private:
        string name = "";
        int damage;
        int price;
    public:
        Gun(string name = "" , int damage = 0 ,int price = 0 );

};

class Player
{
    private:
        Gun gun;
    public:
        Player();
    
};

class Barrier
{
    private:
        int hit_point;
        int price;
    public:
        Barrier(int hit_point = 0 , int price = 0);
    
};
