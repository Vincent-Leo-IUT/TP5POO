#include "testexceptionsinmain.h"
#include <iomanip>
#include <exception>
#include "cexception.h"
#include "cstcoderr.h"
#include <iostream>

using namespace std;

using namespace nsUtil;

void testExceptionsInMain(char c)
{
    try {
        switch (c) {

        case 'A' :
            throw exeption();
            break;
        case 'B' :
            string s;
            cout << s.at(0);
            break;
        case 'C' :
            throw CException ("Surprise",150);
            break;
        case 'D' :
            throw 123;


            }
    }
}
