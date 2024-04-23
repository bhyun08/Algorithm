int main() {
    int min = 100000, max = 0, mid = 0;
    int arr[3];
    for(int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    for(int i = 0; i < 3; i++) {
        if (arr[i] != min && arr[i] != max) {
            mid = arr[i];
            break;
        }
    }
    printf("%d", mid);
    return 0;
}