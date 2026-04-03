#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

enum DataType {
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_CHAR
};

struct VariantData {
    union Data data;
    enum DataType type;
};

void printVariant(struct VariantData *vd) {
    switch(vd->type) {
        case TYPE_INT:
            printf("%d\n", vd->data.i);
            break;
        case TYPE_FLOAT:
            printf("%.2f\n", vd->data.f);
            break;
        case TYPE_CHAR:
            printf("%c\n", vd->data.c);
            break;
    }
}

int main(void) {
    union Data myData;
    
    myData.i = 100;
    printf("int = %d\n", myData.i);
    printf("float = %f\n", myData.f);
    printf("char = %c\n\n", myData.c);
    
    myData.f = 3.14;
    printf("int = %d\n", myData.i);
    printf("float = %f\n", myData.f);
    printf("char = %c\n\n", myData.c);
    
    myData.c = 'A';
    printf("int = %d\n", myData.i);
    printf("float = %f\n", myData.f);
    printf("char = %c\n\n", myData.c);
    
    struct VariantData v1, v2, v3;
    
    v1.data.i = 42;
    v1.type = TYPE_INT;
    
    v2.data.f = 3.14159;
    v2.type = TYPE_FLOAT;
    
    v3.data.c = 'Z';
    v3.type = TYPE_CHAR;
    
    printf("Структура с union:\n");
    printVariant(&v1);
    printVariant(&v2);
    printVariant(&v3);
    
    return 0;
}