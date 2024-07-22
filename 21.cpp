/* This is Not Perfect but it is what younger me wanted */
#include <iostream>    //  "iostream" = include library
using namespace std; // namespace is used for same variable name use cases 
   /*
    The Print Output Part 
    "Hii" = The text that is to displayed
   */
namespace first {
    int x = 24;
 }
namespace second {
    int x = 98;
}
int main(){ // Main Function 

    std:: cout << "No one is comming to help you are on your own kid." << '\n';  // PS: All i Have is YOU, No Matter How FuckedUp.

    // std:: = STandarD   cout = Character OUT  << = Output | Left Shift Operators when used with numbers
    std:: cout << "Hello Hi" << '\n' << "Do it" << '\n';     //    '/n' = Breakline / new line 
    std:: cout << "My First Programme"  << std:: endl;     //  endl = END Line will Flush the buffer 
    
    double x;  // double stores decimal points
    x = 100.89;     // declaration & assignment  

    int u = 263;    // int stores Whole Integer 0123456789......

    double sum = x + u;
    std:: cout << sum << '\n';

    char i ='A';    // char stores single charecter in single quotes
    std:: cout << i << '\n';

    bool IstProgramme = true;  // boolean stores values either true or false
    std:: cout << IstProgramme << '\n';

    std:: string name = "Soumyojjwal";   // String stores a sequence of numbers 
    std:: string day = "Saturday";
    std:: cout << name << '\n';
    std:: cout << "Its " << day << '\n';    // the way to add a Variable to output with a string 

    const double PI = 3.1416;    // const = Constant the user/ Programmer cant chnage it 
    std:: cout << PI << '\n';       // Written in capital letters

    std:: cout << first::x << '\n'; // using 1st namespace 
    std:: cout << second:: x;  // using 2nd namespace

 


















    return 0;       // return 0 = if the programme is correct or return 1 if incorrect 
}

