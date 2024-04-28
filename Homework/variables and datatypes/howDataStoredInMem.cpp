// How data are stored in memory?
// Data is stored in memory in a binary format, which means that it is represented by a series of
//  0s and 1s. Each 0 or 1 is called a bit, and a group of bits is called a byte. The number of bits
//   in a byte can vary, but most modern computers use 8 bits per byte.

// How positive and negative numbers are stored in memory?

// Two's complement is used in computing as a form of signed binary representation.

// One bit is saved for that purpose. So a positive number and a negative one are stored exactly the same in memory, just a bit indicates if it is positive or not.

// Positive 127 in memory: 127 -> 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1

// Negative 127 in memory: -127 -> 1 1 1 1 1 1 1 1 1 0 0 0 0 0 1

// As you can see if the MSB (Most Significant Byte) contains 1 it means it is negative, all the bytes are inverted and the whole number is incremented in one.





// How the negative numbers are stored in memory?

// Suppose the following fragment of code, int a = -34; Now how will this be stored in memory. So here is the complete theory. Whenever a number with minus sign is encountered, the number (ignoring minus sign) is converted to its binary equivalent. Then the two’s complement of the number is calculated. That two’s complement is kept at place allocated in memory and the sign bit will be set to 1 because the binary being kept is of a negative number. Whenever it comes on accessing that value firstly the sign bit will be checked if the sign bit is 1 then the binary will be two’s complemented and converted to equivalent decimal number and will be represented with a minus sign.

// Let us take an example:
// Example –
// int a = -2056;
// Binary of 2056 will be calculated which is:

// 00000000000000000000100000001000 (32 bit representation, according of storage of int in C)
// 2’s complement of the above binary is:
// 11111111111111111111011111111000.

// So finally the above binary will be stored at memory allocated for variable a.
// When it comes on accessing the value of variable a, the above binary will be retrieved from the memory location, then its sign bit that is the left most bit will be checked as it is 1 so the binary number is of a negative number so it will be 2’s complemented and when it will be 2’s complemented will be get the binary of 2056 which is:
// 00000000000000000000100000001000

// The above binary number will be converted to its decimal equivalent which is 2056 and as the sign bit was 1 so the decimal number which is being gained from the binary number will be represented with a minus sign. In our case -2056.



// unsigned int 

// C++ unsigned int is the data types that contain integers in the form of non-negative whole
//  numbers only. Unlike C++ signed integer which can possess both negative and positive whole
//   numbers, C++ unsigned int can possess only positive integers which can range from 0-255,
//    and thus it can store 256 different values out of which half of their signed integers
//     contain negative numbers. C++ unsigned int is the best option whenever the requirement 
//     is to use positive integers as it is compatible with networking and systems to deal with 
//     optimization with respect to memory for networking and systems.