# Final Progress Report


Project objective was to build an interactive command line program that simulates a small terrestrial ecosystem according to specific rules. Objective achieved partially. 

Achievements:

[classdef.hpp](cppfinalproject/classdef.hpp)This program is being built on class hierarchy. I created a pure abstract class Organism. It has children classes plant, herbivore, and omnivore. A separate structure holds data from the map in relation to the object: coordinates (row, column) and character that is on the map. 

[readmap.hpp](cppfinalproject/readmap.hpp) A rectangular map of the area that contains information of the geographic features and the living organisms (plants + animals) that populate the area. It contains a function to read the map into a vector<string>. 

[readorg.hpp](cppfinalproject/readorg.hpp) A list of species populating the ecosystem, together with their essential characteristics and inter-relationships. It reads in this list and returns a vector<unique_ptr<Organism>> of objects. This function also sets the initial characteristics (name, energy level, food chain, regrowth index) of objects according to the information in the list. 

[lookaround.hpp](cppfinalproject/lookaround.hpp) contains a function that refers to the vector<string> map and returns information (coordinates and char names) of blocks around the given coordinate (row, column). It returns a vector<point>. 

[populate.hpp](cppfinalproject/populate.hpp) has a function that takes vector<string> map and vector<unique_ptr<Organism>> of species and populates the ecosystem with organisms. Each organism in addition to their initial characteristics are assigned their coordinates at this step. 

[lifefunctions.cpp](lifefunctions.cpp) A start of definitions of friend functions for growing, moving, and mating. Regrow function is debugged and working. It also contains function eat, which is supposed to be a part of move function in the future. Mate and eat functions are in process and not fully functioning. This file also have update function that updates vector<string> map with new positions of organisms. 

Incomplete:
A coherent 'live' function that would allow to loop through the vector<unique_ptr<Organism>> and make organisms move/mate/regrow;
Map output. Need to overload cout<< operator for vector<string>;
function that takes user input for the number of iterations and starts the simulation (or it can be a part of 'live' function); 



