
    int i=0, j=n-1;
    while (i<j)
    {
        int tem= myArr[i];
        myArr[i]=myArr[j];
        myArr[j]= tem;
        i++;
        j--;
    }
    for(int i=0; i<n; i++){
        printf("%d ", myArr[i]);
    }