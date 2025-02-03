#include <iostream>
using namespace std;
#include "person.h"
#include "employe.h"
#include "senioremploye.h"

int main()
{
    employe e("Pallavi",23,123456,5.6f,10,25000.00);
    employe e1("likitha",26,123456,5.6f,11,35000.00);
    senioremploye s("darshini",25,123654,3.5f,56,30000.00);
    senioremploye s1("varshini",26,369852,5.6f,9,63000.00);
    return 0;
}
