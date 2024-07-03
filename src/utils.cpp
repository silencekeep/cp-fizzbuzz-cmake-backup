#include "utils.h"

string fizzBuzz(int value){
    if(value == 3)
        return "Fizz";
    if(value == 5)
        return "Buzz";
    return to_string(value);
}