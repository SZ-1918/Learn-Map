#include<iostream>
#include <map>
using namespace std;

int main() 
{   
    //MultiMap : Storing multiple keys differs multimap from map 
    //everything is same as map just we use insert()/emplace() function instead 
    //of [] square brackets
    multimap<string,int>my_map; //using multimap not map 

    //adding key-value pairs to map
    // my_map["Banana"] = 10;
    // my_map["Apple"] = 10;
    // my_map["Mango"] = 20;
    // my_map["Cherry"] = 30;

    //Instead 
    my_map.emplace("Apple", 15);
    my_map.emplace("Apple", 15);
    my_map.emplace("Apple", 20);
    my_map.emplace("Mango", 30);
    
    //----------erase function on multimap-----------------
    //erasing a key on multimap erases all the same keys
    //to avoid this (remove one single instant)we will pass
    //the iterator (using find function)
    
    my_map.erase(my_map.find("Apple"));

    for(auto val : my_map) {
        cout << "Key= " << val.first << ", Value= " << val.second << endl;
    }
    //just one instant removed
} 

