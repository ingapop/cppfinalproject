#include <iostream>

using namespace std;

class mapObject {
public:
char name;
mapObject(char n);
void printname ()
{
    cout<<"mapObject name is: "<<name;
} 



};

mapObject:: mapObject (char n)
{
name = n;
}

int main ()
{
mapObject obj1 ('A');
mapObject obj2 ('B');

obj1.printname();
obj2.printname();

}