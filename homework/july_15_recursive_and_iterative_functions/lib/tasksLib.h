// Իրականացնել ֆակտորիալի հաշվարկումը ռեկուրսիվ տարբերակով։
int factorial_recursive(int n);
int factorial_iterative(int n);

// Գրել ֆունկցիա, որը որպես արգումենտ ստանում է num
// ամբողջ տիպի փոփոխականը եւ տպում է num-ից մինչեւ 0 արժեքները։
// Ֆունկցիան իրականացնել ռեկուրսիվ և իտերատիվ տարբերակով։
void print_down_recursive(unsigned int num);
void print_down_iterative(unsigned int num);

// Գրել Ֆիբոնաչիի n-րդ թիվը հաշվող ֆունկցիա ռեկուրսիվ և իտերատիվ տարբերակով։
unsigned int fibonacci_recursive(unsigned int num);
unsigned int fibonacci_iterative(unsigned int num);

// Գրել ֆունկցիա, որը ստանում է զանգված եւ տպում է զանգվածի տարրերը էկրանին ռեկուրսիվ տարբերակով։
void print_array_recursive(int arr[], int size);

// Գրել ֆունկցիա, որը հաշվում է, թե քանի անգամ է տրված տարրը հանդիպում զանգվածում ռեկուրսիվ եղանակով։
int count_occurrences(int arr[], int size, int target);

// Գրել ֆունկցիա, որը գտնում է տրված զանգվածի առավելագույն արժեքը ռեկուրսիվ եղանակով։
int find_max_value(int arr[], int size);

// Գրել ֆունկցիա, որը հաշվում է տրված զանգվածում զույգ թվերի քանակը ռեկուրսիվ եղանակով։
int count_even_numbers(int arr[], int size);

// Գրել ֆունկցիա, որը ստուգում է, արդյոք տրված տողը պալինդրոմ է ռեկուրսիվ եղանակով։
bool is_palindrome(const char* str, int start, int end);
