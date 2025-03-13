//Given a number n, return the number of positive odd numbers below n, EASY!
//
//Examples(Input->Output)
//7  -> 3 (because odd numbers below 7 are[1, 3, 5])
//15 -> 7 (because odd numbers below 15 are[1, 3, 5, 7, 9, 11, 13])


int odd_count(int n) {
    int count = 0;
    while (--n) {
        if (n % 2 != 0) count++;
    }
    return count;
}


////// best solution ////////

int odd_count(int n) {
    return n / 2;
}