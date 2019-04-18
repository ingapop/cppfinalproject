#include "classdef.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include <memory>
using namespace std;



std::unique_ptr<Organism> read_plant(istream& input){
char n;
int r, e ;
   input >> n >> r >> e;
    
    if (! (input>>n>>r>>e))
        throw std::runtime_error ("Can't read parameters for plant");

   return unique_ptr<Organism>{new plant ( n, r, e)};     
};



vector<char> get_foodchain (istream& input, vector<char> chain){

char n;
while (getline(input, n))&&(n!=']')
{
chain.push_back(n);
};
};

std::unique_ptr<Organism> read_omnivore(istream& input){
char n, lbrac, rbrac;
string chain;
int e;
vector<char> ch;
input>>n>>lbrac;
if (lbrac = '[')  //not sure about this part
    get_foodchain(input, ch ); //and this 
input>> rbrac>>e;    //and this 

return unique_ptr<Organism>{new omnivore( n,  ch,  e)};
};






std::unique_ptr<Organism> read_herbivore(istream& input){





};


std::unique_ptr<Organism> read_org( std::istream& input ) 
{
    string org;
    input >> org;
    if( ! (input>>org))
        throw std::runtime_error ("Can't read Organism name");

    if ( org == "plant" ) return read_plant( input );
    if (org =="herbivore") return read_herbivore(input);
    if (org == "omnivore") return read_omnivore (input);
}







int main (){

vector< unique_ptr<Organism> > read_from_file( std::string const& filename )
{
    std::ifstream input( filename );
    return read_org( input );
};



vector< unique_ptr<Organism> > read_org( std::istream& in )
{    
    vector< unique_ptr<Organism> > result;
    std::string line;
    while ( std::getline( in, line ) )
        if ( !line.empty() )
        {
            std::istringstream ss( line );    
            result.push_back( read_org( ss ) );
        }

    return result;
};


}



