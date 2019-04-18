// 1. read in map 

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


void readMap (string filename) {
string line;
vector<string> areamap;
ifstream input (filename);
if (!input) 
{
    cout<<"File failed to open. Check if the map is in the folder." << endl;  //if fails to open 
}

while (getline (input, line))
{
areamap.push_back (line);
cout<<line<<endl;
};
cout<<"map size"<<areamap.size()<<endl;

cout<<"map line 4" << areamap[3]<<endl;

}



int main () {

    readMap("map.txt");
}