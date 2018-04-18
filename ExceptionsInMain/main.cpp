#include <iostream>
#include "testexceptionsinmain.cpp"
using namespace std;
using namespace nsUtil;
int main()
{
    try
    {
         char ch = GetChoix();
         testExceptionsInMain(ch);
         return KNoExc;
    }
    catch (const CException e)
    {
        cerr << "libelle : " << e.GetLibelle() << '\n' << " Code : " << e.GetLibelle() << '\n';
        return e.GetCodErr();
    }
    catch (const out_of_range & e)
    {
        cerr << "exc hors limite " << e.what() << '\n';
        return KExcStd;
    }

}



