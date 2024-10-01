#include "Array.h"
#include "ArrayNew.h"

int main() {
    {
        Array array1(2);
        Array array2(array1); // Testing copy constructor for Array
    } // array1 and array2 go out of scope here

    {
        ArrayNew arrayNew1(2);
        ArrayNew arrayNew2(arrayNew1); // Testing copy constructor for ArrayNew
    } // arrayNew1 and arrayNew2 go out of scope here

    return 0;
}
