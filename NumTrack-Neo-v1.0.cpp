#include <iostream>
#include <vector> // gru reference??? also this is basically changable array
#include <algorithm>



int main() {
    int vector_size;
    std::cout<< "\n";
    std::cout << "NumTrack Neo v1.0 \n";
    std::cout << "How much numbers will you enter??? ";
    std::cin >> vector_size;
    

    std::cout << "Size of vector selected: " << vector_size;
    std::vector<std::pair<double, int>> numbers; //number and index
    std::cout << "\n";
    std::cout<< "\n";

  
    std::cout << "Enter your numbers \n";
    

    for (int vector_index = 0; vector_index < vector_size; vector_index++){
        double vector_input;
        std::cout<< "Number " << (vector_index + 1) << ": ";
        std::cin >> vector_input;
        numbers.push_back({vector_input,vector_index}); //adds numbers and index to the vector

    }    

    //sorting
    std::sort(numbers.begin(), numbers.end()); //basically sorts them from start to end
    std::cout<<"\n";
    std::cout<< "Sorted numbers: \n";
    
    for (auto &current_element : numbers){
        std::cout << current_element.first << ", N"<<current_element.second + 1<<"\n";
    }
    std::cout << "Numbers loaded successfully...\n";
    std::cout << "\n";
    return 0;
    







}
