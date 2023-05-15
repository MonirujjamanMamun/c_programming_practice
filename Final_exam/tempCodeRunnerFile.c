int middle1, middle2;
    if (n % 2 == 0) {
        middle1 = n/2 - 1;
        middle2 = n/2;
        printf("%d %d\n", myArr[middle1], myArr[middle2]);
    } else {
        middle1 = (n+1)/2 - 1;
        printf("%d\n", myArr[middle1]);
    }