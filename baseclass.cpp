#include <iostream>
#include <vector>
using namespace std;
/* need to create objects by reading in a text file and populating it from there. 
Input for organisms
plant a 1 5      
plant b 3 10
herbivore A [a, b] 20
herbivore B [b] 15
omnivore C [A, D] 40
omnivore D [A, B, C] 30 

plant <one-letter id> <regrowth coefficient> <energy points>
herbivore <one-letter id> [ <food chain> ] <max energy level>
omnivore <one-letter id> [ <food chain> ] <max energy level>

Input for obstacles: type (char)-->name
*/

// base class for mapObjects 

class mapObject {
public:
char name;
mapObject(char n);
virtual void printname ()
{
    cout<<"mapObject name is: "<<name<<endl;
} ;


};

mapObject:: mapObject (char n)
{
name = n ; 
};

class Obstacle: public mapObject{

    public:
    Obstacle(char n);
    ~Obstacle(){};
};

Obstacle:: Obstacle (char n)
          :mapObject(n)   {};

class Organism : public mapObject {
     public:
     Organism(char n);
     Organism(char n, int e);
     ~Organism(){};
     int energy ;
     virtual void printenergy (){
           cout<<"Organism has this much energy: "<< energy <<endl;
     };
     virtual void live (){};
    
};


 Organism:: Organism (char n)
     : mapObject(n) {}; //constructing base object 


Organism:: Organism (char n, int e)  
          : mapObject(n) {
              energy = e;
          }  ;


class plant : public Organism {
    public:
    plant (char n, int r, int e );
    ~plant(){};
    int regrowth;
    void printregrowth() {
        cout<<"plant has this much regrowth: "<< regrowth <<endl;
    }
};

plant:: plant (char n, int r, int e)
        : Organism (n, e) {
            regrowth = r;
        };



class animal: public Organism {
public:
animal (char n, vector<char> ch, int e);
~animal(){};
vector<char> foodchain;
void printchain(){
 /// print the value of vector 
        for (int i = 0; i < foodchain.size(); i++) 
            cout << foodchain[i] << endl;
};

};


animal:: animal (char n, vector <char> ch, int e)
        : Organism (n, e){
            foodchain = ch;
        };

//test 




class herbivore : public animal {
    public:
    herbivore (char n, vector<char> ch, int e);
    ~herbivore() {};
};

herbivore:: herbivore(char n, vector<char> ch, int e)
            : animal ( n, ch,  e) {};


class 

int main ()
{
Organism obj1 ('A');
Organism obj2 ('B');
Organism obj3 ('c', 4);
Obstacle obj4 ('~');
plant obj6 ('f', 3, 4);
herbivore obj7 ('a', {'c', 'h'}, 30);

obj1.printname();
obj2.printname();
obj3.printenergy();
obj4.printname();
obj6.printenergy();
obj6.printregrowth();
obj7.printchain();
obj7.printenergy();
}