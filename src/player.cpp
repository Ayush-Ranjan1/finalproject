#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
    int health, damage;
    bool haskey1;
    bool haskey2;
    bool hassword;
    bool isdead;
  public:
    void set_values (int,int);
} ;

// int main()
// {
// 	int randomnumber;
//   srand(time(0));
// 	randomnumber = rand() % 100 + 1;
// }

int health = 100;
int damage = 10;
// int damage = int randomnumber;