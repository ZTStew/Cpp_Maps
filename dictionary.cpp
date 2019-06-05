#include <iostream>

#include <map>

/**
Test file to explore the differnt functions found in maps in C++ and notate their uses

Started: 6/3/2019
Finished: 6/5/2019
*/

int main(){

    /// removes need to place 'std::' in front of things coming from the std directory
    using namespace std;

    /// creates a map named dict
    std::map<std::string, int> dict;
    std::pair<std::string, int> p;

    // dict["a"] = 1;
    // dict["b"] = 2;
    // dict["c"] = 3;
    // dict["d"] = 4;
    // dict["e"] = 5;
    // dict["f"] = 6;

    /// Function for directly inserting a value into map
    // dict.insert(std::pair<std::string, int>("h", 8));

    /// itterates through all the characters of the alphabet
    for(char c = 'a'; c <= 'z'; c++){
        // std::cout << c << endl;
        /// makes the key of pair 'p' equal to the letter value of c
        p.first = c;
        /// makes the value of pair 'p' equal to the ascii value of the character - 96 so that each value represents the letter's order in the alphabet
        p.second = (int)c - 96;
        /// adds the value to the map, 'dict'
        dict[p.first] = p.second;

    }

    /// Itterates through the map
    for(std::map<std::string, int>::iterator it = dict.begin(); it != dict.end(); it++){
        /// provides the key and value of the pair. The 'first' returns the key, the 'second' returns the value.
        std::cout << it->first << " => " << it->second << std::endl;
    }

    /// creates the variable 'key'
    std::string key = "c";
    /// Makes use of the 'find' function to find the key that matches the value given and makes 'it' equal to the pair
    std::map<std::string, int>::iterator it = dict.find(key);
    /// returns the value of the key with its value
    std::cout << "Key: " << key << " || " << "Value: " << it->second << endl;
    /// takes a key/value pair and removes the value from the map
    dict.erase(it);
    /// another way of removing a key/value pair
    dict.erase(dict.find("d"));


    // dict.insert(std::pair<int, int>(1,2));

    /// retrives the value associated with the key, "a"
    // std::cout << dict["b"];

    /// outputs total size of the map
    // std::cout << dict.size();
    /// outputs if the map is empty
    // std::cout << dict.empty() << endl;

    /// clears the map
    dict.clear();

    return 0;

}