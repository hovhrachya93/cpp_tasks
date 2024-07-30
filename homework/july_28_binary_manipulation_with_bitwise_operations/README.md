# Bitwise Operations in C++

This project demonstrates various bitwise operations in C++. The program includes functions for checking if a number is even, counting the number of 1s in its binary representation, checking if it is a power of two, printing its binary representation, and more.

## Functions

### `int is_even(int number)`

Checks if a number is even.

**Returns:**
- `1` if the number is even
- `0` otherwise

### `int count_ones(int number)`

Counts the number of 1 bits in the binary representation of a number.

**Returns:**
- The count of 1 bits

### `int is_power_of_two(int number)`

Checks if a number is a power of two.

**Returns:**
- `1` if the number is a power of two
- `0` otherwise

### `void print_binary_representation(int number)`

Prints the binary representation of a number. This implementation uses an 8-bit representation.

### `int has_odd_number_of_ones(int number)`

Determines if the number of 1 bits in the binary representation of a number is odd.

**Returns:**
- `1` if the count of 1 bits is odd
- `0` otherwise

### `void set_bit(int number, int position)`

Sets the bit at the specified position to 1. The position is zero-indexed, starting from the least significant bit.

**Note:** This function modifies a local copy of the number and prints the result.

### `void reset_bit(int number, int position)`

Resets the bit at the specified position to 0. The position is zero-indexed, starting from the least significant bit.

**Note:** This function modifies a local copy of the number and prints the result.

### `void flip_bit(int number, int position)`

Flips the bit at the specified position. The position is zero-indexed, starting from the least significant bit.

**Note:** This function modifies a local copy of the number and prints the result.

### `int reverse_bits(int number)`

Reverses the bits of the number. For an 8-bit number, this function will reverse the order of the bits.

**Returns:**
- The number with its bits reversed