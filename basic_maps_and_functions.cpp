#include<iostream>
#include <map>
using namespace std;

int main() 
{   
    //Map : an associative container that stores a key-value (Keys are unique)
    //pairs in a sorted manner(Only keys are sorted)  
    
    //Declaring a map
    map<string,int>my_map; 

    //adding key-value pairs to map
    my_map["Banana"] = 10;
    my_map["Apple"] = 10;
    my_map["Mango"] = 20;
    my_map["Cherry"] = 30;

    

    //Some important functions of map

    //1) insert()/emplace() => to add key-value pairs in it's correct position in sorted manner
    //insert adds or moves a pre existing key-value pair to the map
    //while emplace takes raw arguments to construct a new key-value pair inside the map's memory
    //Example: 
    my_map.insert({"Grapes", 40}); //insert
    my_map.emplace("Pineapple", 50); //emplace 
    //Only difference is emplace don't use {}
    
    

    //2) count() => check the existence of any key 
    //returns 0 -> don't exist
    //returns 1 -> exist
    
    cout << my_map.count("Blueberry") << endl;
    // 0 cause blueberry doesn't exist in the map


    //3) erase() => erase the value of key from the map
    my_map.erase("Mango");
    //Mango removed from the map


    //4) find() => returns the iterator where the key is found otherwise it returns map_name.end()
    //but we can't directly print the iterator so, instead we use condition
     if(my_map.find("Strawberry") != my_map.end()) {
        cout << "found\n";
     } else {
        cout << "not found\n";
     }
    //5) size() => returns the number of pairs
    cout << my_map.size() << endl;

    //6) empty() => return true empty and false otherwie 
    cout << my_map.empty() << endl;
    //returns 0 cause not empty 
    
    //printing the map
    for(auto val : my_map) {
        cout << "Key= " << val.first << ", Value= " << val.second << endl;
        //val.first => keys
        //val.second => value
    }
    //all are in sorted manner no matter in which order I added them

} 