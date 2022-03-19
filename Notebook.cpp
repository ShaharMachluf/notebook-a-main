#include <iostream>
#include "Direction.hpp"
#include "Notebook.hpp"

using ariel::Direction;
using namespace std;
using namespace ariel;

Notebook::Notebook(){
    cout<<this->line_size<<endl;
}

void Notebook::write(unsigned int page, unsigned int row, unsigned int column, Direction direction, string const &to_write) const{
    cout<<this->line_size<<endl;
}

string Notebook::read(unsigned int page, unsigned int row, unsigned int column, Direction direction, int to_read) const{
    cout<<this->line_size<<endl;
    return("ok");
}

void Notebook::erase(unsigned int page, unsigned int row, unsigned int column, Direction direction, int to_erase) const{
    cout<<this->line_size<<endl;
}

void Notebook::show(unsigned int page) const{
    cout<<this->line_size<<endl;
}

Notebook::~Notebook(){
    cout<<this->line_size<<endl;
}

