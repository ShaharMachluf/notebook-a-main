#include <iostream>
#include "Direction.hpp"

using ariel::Direction;
using namespace std;

namespace ariel{
    class Notebook{
        int line_sise = 100;
        public:
        Notebook();
        void write(unsigned int, unsigned int, unsigned int, Direction, string);
        string read(unsigned int, unsigned int, unsigned int, Direction, int);
        void erase(unsigned int, unsigned int, unsigned int, Direction, int);
        void show(unsigned int);
        ~Notebook();
    };
};