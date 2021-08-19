/* Modify the values in memory so that a  contains their sum and b contains their absoluted difference. */


#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int sum = *a + *b;
    int absDiff = *a - *b > 0 ? *a - *b : -(*a - *b); // if (a-b)>0 then reurn (a-b) else return -(a-b).
    *a = sum;
    *b = absDiff;
         
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


/*
Sample Input

4
5
Sample Output

9
1

*/
