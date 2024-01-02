# include "Span.hpp"

Span::Span()
{
    maximum = 0;
}

Span::Span(unsigned int N)
{
    maximum = N;
    // Reserve N space for the vector.
    stock.reserve(N);
}

Span::~Span(){}

void Span::addNumber(int number)
{
    if (stock.size() < maximum)
    {
        // STL func that allows us to add an element at the end
        stock.push_back(number);
    }
    else
        throw std::out_of_range("Error: Maximum stockage capcity has been reached.");
}

unsigned int Span::shortestSpan() const
{
    if (stock.size() < 2)
    {
        throw std::logic_error("Span should have at least two elements to calcul the shortestSpan.");
    }
    std::vector<int> sortedStock = stock;
    // STL Function allows us to sort the vector.
    std::sort(sortedStock.begin(), sortedStock.end());

    unsigned int shortest = sortedStock[1] - sortedStock[0];
    for (int i = 2; i < stock.size(); i++)
    {
        if ((stock[i] - stock[i - 1]) < shortest)
        {
            shortest = (stock[i] - stock[i - 1]);
        }
    }

    return (shortest);
}

unsigned int Span::longestSpan() const
{
    if (stock.size() < 2)
    {
        throw std::logic_error("Span should have at least two elements to calcul the longestSpan.");
    }
    // Creation of a copy of stock
    std::vector<int> sortedStock = stock;
    // STL Function allows us to sort the vector.
    std::sort(sortedStock.begin(), sortedStock.end());

    unsigned int longest = sortedStock[sortedStock.size() - 1] - sortedStock[0];

    return (longest);
}

unsigned int Span::getMaximum() const
{
    return (maximum);
}

std::vector<int> Span::getStock() const
{
    return (stock);
}
