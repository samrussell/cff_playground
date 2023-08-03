#include <stdio.h>

int main() {
    int code = 0x12345678;
    int secondary = 0;
    while(1){
        if (code == 0x12345678){
            printf("step 1\n");
            code = 0x45987345;
        }
        else if(code == 0x2342352) {
            printf("step 5\n");
            break;
        }
        else if(code == 0x45987345){
            printf("step 2\n");
            code = 0x4875234;
        }
        else if(code == 0x8383485) {
            printf("step 4\n");
            code = 0x2342352;
        }
        else if(code == 0x4875234) {
            printf("step 3\n");
            code = 0x8383485;
        }
    }
    printf("step 6\n");
    return 0;
}