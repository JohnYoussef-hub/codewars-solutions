//Return the Nth Even Number
//
//Example(Input-- > Output)
//
//1 -- > 0 (the first even number is 0)
//3 -- > 4 (the 3rd even number is 4 (0, 2, 4))
//100 -- > 198
//1298734 -- > 2597466



int nthEven(int n) {
    int num = 0;

    for (int i = 1; i < n; i++) {
        num += 2;
    }

    return num;
}