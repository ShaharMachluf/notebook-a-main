#include <iostream>
#include "Direction.hpp"

using ariel::Direction;
using namespace std;

namespace ariel{
    class Notebook{
        int line_size = 100;
        public:
        Notebook();
        void write(unsigned int, unsigned int, unsigned int, Direction, string const &) const;
        string read(unsigned int, unsigned int, unsigned int, Direction, int) const;
        void erase(unsigned int, unsigned int, unsigned int, Direction, int) const;
        void show(unsigned int) const;
        ~Notebook();
    };
};