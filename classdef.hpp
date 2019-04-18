#ifndef CLASS_DEFS
#define CLASS_DEFS

#include <iostream>
#include <vector>
using namespace std;


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




class herbivore : public animal {
    public:
    herbivore (char n, vector<char> ch, int e);
    ~herbivore() {};
};

herbivore:: herbivore(char n, vector<char> ch, int e)
            : animal ( n, ch,  e) {};


class omnivore : public animal {
    public:
  omnivore (char n, vector<char> ch, int e);
    ~omnivore() {};
};

omnivore:: omnivore(char n, vector<char> ch, int e)
            : animal ( n, ch,  e) {};

#endif  