int maximum69Number(int num) {
    int tmp = num;
    int result = 0;
    int digit = 0;
    int i;
    int *number;

    while (tmp > 0) {
        tmp /= 10;
        digit++;
    }

    tmp = num;
    number = (int *)malloc(digit * sizeof(int));

    i = digit - 1;
    while (tmp > 0) {
        number[i] = tmp % 10;
        tmp /= 10;
        i--;
    }

    i = 0;
    while (i < digit) {
        if (number[i] == 6) {
            number[i] = 9;
            break;
        }
        i++;
    }

    i = 0;
    while (i < digit) {
        result = result * 10 + number[i];
        i++;
    }

    free(number);

    return result;
}