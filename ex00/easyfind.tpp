#include "easyfind.hpp"

// Creation of a func template
template <typename T>
typename T::iterator easyfind(T &container, int nbr)
{
    // iterator that go through the container until he reach the end.
    // Type name T allows it to be compatible with different container type.
    typename T::iterator it = std::find(container.begin(), container.end(), nbr);
        if (*it == nbr)
            return (it);
    throw std::runtime_error("Occurrence not found");
}