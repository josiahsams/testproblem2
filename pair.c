#include <stdio.h>

main()
{
    // int a[4] = { 1, 2 ,3 ,4 };
     int a[3] = { 4, 1, 2 };
    //int a[3] = { 4, 15, 2 };
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int maxSum = 0;
    int sum = 0;
    int len = sizeof(a)/sizeof(a[0]);
    int pair1 = -1;
    int pair2 = -1;

    for (i = 0; i< len; i++)
        printf("%d \n", a[i]);

    for (i=0; i< len; i++) {
        if (i+1 == len-1 && a[i] > maxSum) {
            maxSum = a[i];
            pair1 = a[i];
            pair2 = -1;
        }
        for (j = i+2; j < len; j++) {
            sum = a[i] + a[j];
            if (sum > maxSum) {
                pair1 = a[i];
                pair2 = a[j];
                maxSum = sum;
            }
        }
    }
    
    if (pair1 != -1 && pair2 != -1)
    printf("Selected subset: {%d,%d} maxSum = %d \n", pair1, pair2, maxSum);
    else if (pair1 != -1)
    printf("Selected subset: {%d} maxSum = %d \n", pair1, maxSum);
    else
    printf("There is some problem \n");

}
