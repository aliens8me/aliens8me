#include <iostream>
#include <cmath>

using namespace std;

// function for addition
int addition(int a , int b)
{
    int sum = a + b ;
    return sum ;
}

// function for subtraction
int subtraction(int a , int b)
{
    int subtct = a - b ;
    return subtct ;
}

//function for multiplication
float multiplication( float a , float b )
{
    float mult = a * b ;
    return mult ;
}

// function for division
float division(float a , float b)
{
    float div = a / b ;
    return div ;
}

// function for square
int square(int a )
{
    int squareA = a * a ;
    return squareA ;
}

// function for cube
int cube(int a )
{
    int cubeA = a * a * a;
    return cubeA ;
}

// function for cube Root
float cubeRoot(int a )
{
    float cubeRtA = cbrt( a ) ;
    return cubeRtA ;
}

// function for square root
float squareRoot(float a )
{
   float squareRtA = sqrt( a ) ;
   return squareRtA ;
}

// function for quadratic equation
int quadratic( int a , int b , int c )
{
   int X1 = (-b + ( sqrt(( b * b ) - (4 * ( a * c ))))) / (2 * a) ;
   return X1 ;
}
int quadratic2( int a , int b , int c )
{
   int X2 = (-b - ( sqrt(( b * b ) - (4 * ( a * c ))))) / (2 * a) ;
   return X2 ;
}

// function for square root
float freeForm()
{
}

int main()
{
    float a , b , c ;
    int i ;

    int operation ;

    cout << '\n'
         << '\t'
         << " . . . . . . HARTS CALCULATOR . . . . . . "
         << '\n'
         << '\n'
         << "From the list below , INPUT the NUMBER of the operation you wish to perform "
         << '\n'
         << '\n'
         << " 1 . ADDITION ( 1 )"
         << '\t'
         << '\t'
         << " 2 . SUBTRACTION ( 2 )"
         << '\t'
         << '\t'
         << " 3 . MULTIPLICATION ( 3 )"
         << '\n'
         << '\n'
         << " 4 . DIVISION ( 4 )"
         << '\t'
         << '\t'
         << " 5 . SQUARE ROOT ( 5 )"
         << '\t'
         << '\t'
         << " 6 . SQUARE ( 6 )"
         << '\n'
         << '\n'
         << " 7 . QUADRATIC EQUATION - aX1 + bX2 + c : ( 7 )"
          << '\n'
         << '\n'
         << " 8 . CUBE ( 8 )"
         << '\t'
         << '\t'
         << " 9 . CUBE ROOT ( 9 )"
         << '\n'
         << '\n'
         << "    Enter the your operation of choice :   " ;

     cin >> operation ;

         int add = addition( a , b ) ;
         int subtract = subtraction( a , b ) ;
         float divide = division( a , b ) ;
         int multiply = multiplication( a , b ) ;
         int squareRootOf = squareRoot( a ) ;
         int squareOf = square( a ) ;
         int quadraticEq = quadratic( a , b , c ) ;

         if( operation == 1 )
         {
             cout << '\n'
                  << '\t'
                  <<  " 1 . ADDITION "
                  << endl
                  << endl
                  << " please Enter your values  a , b"
                  << '\n'
                  << " a = " ;
             cin >> a ;
            cout << " b = " ;
             cin >> b ;

             cout << " Addition : "
                  << a
                  << " + "
                  << b
                  << " = " ;
             cout << addition( a , b ) ;
             cout << endl
                  << endl ;
         }
         else if( operation !=1 && operation == 2 )
         {
              cout << '\n'
                  << '\t'
                  <<  " 2 . SUBTRACTION "
                  << endl
                  << endl
                  << " please Enter your values a , b  "
                  << '\n'
                  << " a = " ;
             cin >> a ;
            cout << " b = " ;
             cin >> b ;

             cout << " Subtraction : "
                  << a
                  << " - "
                  << b
                  << " = " ;
             cout << subtraction( a , b ) ;
             cout << endl
                  << endl ;
         }
         else if( operation != 2 && operation == 3 )
         {
                cout << '\n'
                  << '\t'
                  <<  " 3 . MULTIPLICATION "
                  << endl
                  << endl
                  << " please Enter your values a , b "
                  << '\n'
                  << " a = " ;
             cin >> a ;
            cout << " b = " ;
             cin >> b ;

             cout << " multiply : "
                  << a
                  << " x "
                  << b
                  << " = " ;
             cout << multiplication( a , b ) ;
             cout << endl
                  << endl ;
         }
          else if( operation != 3 && operation == 4 )
         {
                cout << '\n'
                  << '\t'
                  <<  " 4 . DIVISION "
                  << endl
                  << endl
                  << " please Enter your values  "
                  << '\n'
                  << " a = " ;
             cin >> a ;
            cout << " b = " ;
             cin >> b ;

             cout << " divide : "
                  << a
                  << " / "
                  << b
                  << " = " ;
             cout << division( a , b ) ;
             cout << endl
                  << endl ;
         }
         else if( operation != 4 && operation == 5 )
         {
             cout << '\n'
                  << '\t'
                  <<  " 5 . SQUARE ROOT "
                  << endl
                  << endl
                  << " please Enter your values  "
                  << '\n'
                  << " a = " ;
             cin >> a ;
             cout << " square : "
                  << a
                  << " ^ "
                  << "0.5"
                  << " = " ;
             cout << squareRoot( a ) ;
             cout << endl
                  << endl ;
         }
          else if( operation != 5 && operation == 6 )
         {
                cout << '\n'
                  << '\t'
                  <<  " 4 . SQUARE "
                  << endl
                  << endl
                  << " please Enter your values  "
                  << '\n'
                  << " a = " ;
             cin >> a ;
             cout << " Square : "
                  << a
                  << " * "
                  << a
                  << " = "
                  << square( a ) ;
             cout << endl
                  << endl ;
         }

                   else if( operation != 6 && operation == 7 )
         {
                cout << '\n'
                  << '\t'
                  <<  " 7 . QUADRATIC EQUTIOINS WITH 3 UNKNOWNS "
                  << endl
                  << endl
                  << " please Enter your values for a , b and c in ( ax1 + bx2 + c ) "
                  << '\n'
                  << " a = " ;
             cin >> a ;
            cout << " b = " ;
             cin >> b ;
            cout << " c = " ;
             cin >> c ;
             cout << '\n'
                  << '\t'
                  << " x = "
                  << quadratic( a , b , c )
                  << '\n'
                  << '\t'
                  << " or "
                  << '\n'
                  << '\t'
                  << " x = "
                  << quadratic2( a , b , c );
             cout << endl ;
         }
          else if( operation != 7 && operation == 8 )
         {
             cout << '\n'
                  << '\t'
                  <<  " 8 . CUBE "
                  << endl
                  << endl
                  << " please Enter your values  "
                  << '\n'
                  << " a = " ;
             cin >> a ;
             cout << " CUBE : "
                  << a
                  << " * "
                  << a
                  << " * "
                  << a
                  << " = " ;
             cout << cube( a ) ;
             cout << endl
                  << endl ;
         }
           else if( operation != 8 && operation == 9 )
         {
             cout << '\n'
                  << '\t'
                  <<  " 9 . CUBE ROOT "
                  << endl
                  << endl
                  << " please Enter your values  "
                  << '\n'
                  << " a = " ;
             cin >> a ;
             cout << " CUBE ROOT : "
                  << a
                  << " * "
                  << "0.3 "
                  << " = " ;
             cout << cubeRoot( a ) ;
             cout << endl
                  << endl ;
         }

     // RATING SYSTEM OF THE CALCULATOR

         int rating ;
         cout << " On a scale of 1 - 5 , what rating will you give my calculator : " ;
         cin >> rating ;

         if( rating >= 0 && rating <= 2 )
         {
             cout << '\n'
                  << '\t'
                  << " RATING : "
                  << rating
                  << " / 5 "
                  << '\t'
                  << " JUST OK ! "
                  << endl ;
         }
         else if( rating == 3 )
         {
             cout << '\n'
                  << '\t'
                  << " RATING : "
                  << rating
                  << " / 5 "
                  << '\t'
                  << " FAIR ! "
                  << endl ;
         }
         else
         {
             cout << '\n'
                  << '\t'
                  << " RATING : "
                  << rating
                  << " / 5 "
                  << '\t'
                  << " GOOD ! "
                  << endl ;
         }

   // END OF RATING SYSTEM

   cout << endl
       << '\t'
        << " . . . . . . . . . RE-LAUNCH code to perform another operation , THANK YOU ! . . . . . . . . .  "
        << endl
        << endl ;

 return 0 ;
}
