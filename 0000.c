// #include <stdio.h>

// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }

#include <stdio.h>
int main() {
    // 變數就是一個記憶體空間，可以放資料
    // 變數要先宣告，再儲存資料，再使用

    // 1.宣告
    int a;
    //2. 儲存
    a = 123;
    //3. 使用
    a = 123 + 123;
    printf("%d", a);
}

float get_avg_score() {
    return 3.14f;
}