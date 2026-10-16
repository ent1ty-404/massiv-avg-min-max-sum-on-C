#include <stdio.h>
int max_arr(int arr[], int n) {
    int m = arr[0];            
    for (int i = 1; i < n; i++) {  
        if (arr[i] > m) {
            m = arr[i];
        }
    }
    return m;
}
int min_arr(int arr[], int n) {
    int d = arr[0];             
    for (int i = 1; i < n; i++) { 
        if (arr[i] < d) {
            d = arr[i];
        }
    }
    return d;
}
int sum(int arr[], int n){
    int s = 0;
    for (int i = 0; i < n; i++){
        s += arr[i];
    }
    return s;
}
double avg(int arr[], int n){
    int s = 0;
    for (int i = 0; i < n; i++){
        s += arr[i];
    }
    return (double)s / n;

}
int main(){
     int a[7] = {15, 30, 28, 13, 91, 4, 10}; // any your num
    int n = 7;

    printf("Max: %d\n", max_arr(a, n));
    printf("Min: %d\n", min_arr(a, n));
    printf("Sum: %d\n", sum(a, n));
    printf("Avg: %.2f\n", avg(a, n));
    return 0;
}