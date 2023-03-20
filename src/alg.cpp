// Copyright 2021 NNTU-CS
// arr - адрес первого элемента массива, size - размер массива в элементах, value - искомое значение
int cbinsearch(int *arr, int size, int value) {
    int left = 0;
    int right = size - 1;
    int found = 0;
    while (right >= left) {
        int middle = (right + left) / 2;
        if (*(arr + middle) == value) {
            found += 1;
            int newmiddle = middle;
            while ((*(arr + middle + 1)) == value) {
                found += 1;
                middle += 1;
            }
            while ((*(arr + newmiddle - 1)) == value) {
                found += 1;
                newmiddle -= 1;
            }
            return found;
        }
        else if (*(arr + middle) > value) {
            right = middle - 1;
        }
        else {
            left = middle + 1;
        }
    }
    return found;
}
