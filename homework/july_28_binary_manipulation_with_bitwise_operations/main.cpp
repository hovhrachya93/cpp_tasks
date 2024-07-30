#include <iostream>

// Իրականացնել ֆունկցիա, որը ստանում է թիվ և վերադարձնում է 1, եթե թիվը զույգ է։
int is_even(int number);
// Տրված թվի երկուական համակարգի ներկայացման մեջ հաշվել 1-երի քանակը։
int count_ones(int number);
// Իրականացնել ֆունկցիա,որը ստուգում է թիվը երկուսի աստիճան է թե ոչ։
int is_power_of_two(int number);
// Տպել ստացված թվի երկուական համակարգի ներկայացումը։ Օգտագործելով բիթային գործողություններ։
void print_binary_representation(int number);
// Ստուգել թվի 1 արժեքով բիթերի քանակը կենտ է, թե զույգ
int has_odd_number_of_ones(int number);
// Գրել void set(int n, int i) ֆունկցիան, որը տրված n թվի i-րդ բիթը կդարձնի 1։
void set_bit(int number, int position);
// Գրել void reset(int n, int i), որը տրված n թվի i-րդ բիթը կդարձնի 0։
void reset_bit(int number, int position);
// Իրականացնել void flip(int n, int i) ֆունկցիա, որը տրված n թվի i-րդ բիթը կշրջի, այսինքն 1-ը կդարձնի 0, 0-ն, 1:
void flip_bit(int number, int position);
// Շրջել թվի բիթերը(reverse), օրինակ՝ 11110000 -> 00001111
int reverse_bits(int number);

int main()
{
    int number = 4;
    int position = 2;
    std::cout << "is " << number << " even: " << (is_even(number) ? "Yes" : "No") << std::endl;
    std::cout << "In the binary code of " << number << ", there are " << count_ones(number) << " one(s)." << std::endl;
    std::cout << "Is " << number << " a power of two: "
              << (is_power_of_two(number) ? "Yes" : "No")
              << std::endl;
    std::cout << "Binary representation of " << number << " is: ";
    print_binary_representation(number);
    std::cout << "The number of 1 bits in " << number << " is "
              << (has_odd_number_of_ones(number) ? "odd" : "even")
              << "." << std::endl;
    set_bit(number, position);
    reset_bit(number, position);
    flip_bit(number, position);
    std::cout << number << " after reversing bits is: " << reverse_bits(number) << std::endl;

    return 0;
}

int is_even(int number)
{
    return (number & 1) == 0 ? 1 : 0;
}

int count_ones(int number)
{
    int count = 0;
    while (number != 0)
    {
        count = count + (number & 1);
        number >>= 1;
    }
    return count;
}

int is_power_of_two(int number)
{
    int count = 0;
    while (number > 0)
    {
        count += (number & 1);
        number >>= 1;
    }
    return (count == 1);
}

void print_binary_representation(int number)
{
    const int bits = 8;

    for (int i = bits - 1; i >= 0; --i)
    {
        std::cout << ((number >> i) & 1);
    }
    std::cout << std::endl;
}

int has_odd_number_of_ones(int number)
{
    int count = 0;
    while (number)
    {
        number &= (number - 1);
        count++;
    }
    return count & 1;
}

void set_bit(int number, int position)
{
    int mask = 1 << position;
    number = number | mask;
    std::cout << "After setting bit with Negation and OR: " << number << std::endl;
}

void reset_bit(int number, int position)
{
    int mask = ~(1 << position);
    number &= mask;
    std::cout << "After resetting bit: " << number << std::endl;
}

void flip_bit(int number, int position)
{
    std::cout << "Number after Flip bit: " << (number ^= 1 << position) << std::endl;
}

int reverse_bits(int number)
{
    int reversed = 0;
    const int bits = 8;

    for (int i = 0; i < bits; ++i)
    {
        int bit = (number >> i) & 1;
        reversed <<= 1;
        reversed = reversed | bit;
    }

    return reversed;
}
