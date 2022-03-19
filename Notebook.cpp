#include <iostream>
#include "Direction.hpp"
#include "Notebook.hpp"

using ariel::Direction;
using namespace std;
using namespace ariel;

Notebook::Notebook(){
    return;
}

void Notebook::write(unsigned int page, unsigned int row, unsigned int column, Direction direction, string to_write){
    return;
}

string Notebook::read(unsigned int page, unsigned int row, unsigned int column, Direction direction, int to_read){
    return("ok");
}

void Notebook::erase(unsigned int page, unsigned int row, unsigned int column, Direction direction, int to_erase){
    return;
}

void Notebook::show(unsigned int page){
    return;
}

Notebook::~Notebook(){
    return;
}

