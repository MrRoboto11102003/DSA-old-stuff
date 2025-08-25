#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int largestRectangleArea(int heights[], int n) {
    int stack[MAX_SIZE], top = -1;
    int i, area, maxArea = 0,h=0,w=0;

    for (i = 0; i <= n; i++) {
        while (top != -1 && (i == n || heights[i] < heights[stack[top]])) {
            h = heights[stack[top--]];
            w = (top == -1) ? i : i - stack[top] - 1;
            area = h * w;
            maxArea = max(maxArea, area);
        printf("%d*%d,%d-- ",h,w,i);
        }
        stack[++top] = i;
    }

    return maxArea;
}

int main() {
    int n, i, heights[MAX_SIZE];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &heights[i]);
    }

    printf("%d\n", largestRectangleArea(heights, n));

    return 0;
}





