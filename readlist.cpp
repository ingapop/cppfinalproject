#include "classdef.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>	
#include <boost>
using namespace std;

// auto readList(string filename) {
// string line;
// vector<string> text;
// ifstream input (filename);
// if (!input) 
// {
//     cout<<"File failed to open. Check if the list is in the folder." << endl;  //if fails to open 
// }

// while (getline (input, line))
// {
// text.push_back (line);
// };
// return text;
// };

// void CreateOrg (vector<string> text){
//  for (int i = 0; i < text.size(); i++)
//   {
//   auto  found = text[i].find("plant");
//     if (found!=std::string::npos)
//         //parse to find other elements 
//         istream& operator >> (istream& text[i], plant& result)
//         {
//             //?????
//         };
//        // cout<<"plant in line"<<i<<endl; } 
// }









int main (){
vector<string> test;
   test =  readList("species.txt");
   cout<<"text size: " << test.size() << endl;

CreateOrg(test);
   
}





/* if plant in the string:
create class plant with parameters char n ,  int r, int e
if not:
    get [a,b,c] --> vector<char> foodchain
    if herbivore in the string:
         create class herbivore with parameters char n, foodchain, int e
        else:
            create class omnivore with parametes char n, foodchain, int e

*/ 
