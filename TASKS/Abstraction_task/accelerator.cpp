#include "accelerator.h"
#include <iostream>
using namespace std;

Accelerator::Accelerator()
{
    cout<<"accelerator constructor called"<<endl;
}

Accelerator::~Accelerator()
{
    cout<<"accelerator destructor called"<<endl;
}

void Accelerator::speedup()
{
    cout<<"Acceletrator speed incresed and car moved"<<endl;
}

// void Accelerator::speeddown()
// {
//     cout<<"Accelerator speed decreased"<<endl;
// }
