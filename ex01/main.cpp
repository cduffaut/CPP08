#include "Span.hpp"

int main()
{
    try
    {
        std::cout << "-------- Main Subject Test: --------" << std::endl;
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception : " << e.what() << std::endl;
    }

    std::cout << "-------- Creating a one time 10,000 Span sized: --------" << std::endl;
    
    try
    {
        Span sp = Span(10000);

        // Create a vector with 10000 values in.
        std::vector<int> values;
        for (int i = 0; i < 10000; ++i)
        {
            values.push_back(i);
        }
        // Fill span with the vector values.
        sp.addNumber(values.begin(), values.end());

        // Display the size of the span,
        std::cout << "Size of Span: " << sp.getMaximum() << std::endl;
        // And his 10000th value.
        std::cout << "Value 10,000th: " << sp.getStock()[sp.getMaximum() - 1] << std::endl;

        // Tester la fonction shortestSpan et longestSpan
        std::cout << "Plus courte distance : " << sp.shortestSpan() << std::endl;
        std::cout << "Plus longue distance : " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception : " << e.what() << std::endl;
    }

    return 0;
}