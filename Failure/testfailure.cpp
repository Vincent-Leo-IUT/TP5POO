/**
 *
 * \file   : SqueletteMain.cpp
 *
 * \author :
 *
 * \date   :
 *
**/

#include <iostream>
#include <exception>

#include "CstCodErr.h"
#include "CException.h"

using namespace std;
using namespace nsUtil;

namespace
{
    void testFailure (void)
    {
        try
        {
        cin.exceptions (ios_base::failbit | ios_base::eofbit) ;
        for (int i ; ;)
        {
            cout << "Entrer un entier : " ;
            cin >> i ;
        }
}
        catch (ios_base::failure & e)
        {
            if (cin.eof())
                cerr << "Ereur de fin de fichier \n" ;
            else if (cin.fail())
                cerr << "Ereur de lecture \n" ;
            cerr << e.what() << "\n" ;
            throw ;
        }

    } // TestFailure  ()

} // namespace

int main (void)
{
    try
    {
        testFailure ();

        return KNoExc;
    }
    catch (const CException & e)
    {
        cerr << "Erreur        : " << e.getLibelle () << '\n'
             << "Code d'erreur = " << e.getCodErr ()  << '\n';
        return e.getCodErr();
    }
    catch (const exception & e)
    {
        cerr << "Exception standard : " << e.what () << '\n';
        return KExcStd;
    }
    catch (...)
    {
        cerr << "Exception inconnue\n";
        return KExcInconnue;
    }

} // main()
