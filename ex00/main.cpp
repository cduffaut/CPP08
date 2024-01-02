#include "easyfind.hpp"
#include <vector>

int main()
{
    // Creation of a container type "vector"
    std::vector<int> vec;
    
    // add value to the end of the vec like a linked list
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    std::cout << "---- TEST ONE: Success in occurence finding ----" << std::endl;
    try
    {
        std::vector<int>::iterator it = easyfind(vec, 5);
        std::cout << "Occurrence found at index: " << std::distance(vec.begin(), it) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "---- TEST TWO: Failure in occurence finding ----" << std::endl;
    try
    {
        std::vector<int>::iterator it = easyfind(vec, 110);
        std::cout << "Occurrence found at index: " << std::distance(vec.begin(), it) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
