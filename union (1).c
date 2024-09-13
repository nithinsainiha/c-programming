#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

typedef struct {
    union Data data;
    enum { INT, FLOAT, CHAR } type;
} DataContainer;

void printData(DataContainer *container);
void setIntData(DataContainer *container, int value);
void setFloatData(DataContainer *container, float value);
void setCharData(DataContainer *container, char value);

int main() {
    DataContainer container;

    setIntData(&container, 10);
    printData(&container);

    setFloatData(&container, 3.14f);
    printData(&container);

    setCharData(&container, 'A');
    printData(&container);

    return 0;
}

void printData(DataContainer *container) {
    switch (container->type) {
        case INT:
            printf("Integer data: %d\n", container->data.i);
            break;
        case FLOAT:
            printf("Float data: %.2f\n", container->data.f);
            break;
        case CHAR:
            printf("Char data: %c\n", container->data.c);
            break;
        default:
            printf("Unknown data type\n");
    }
}

void setIntData(DataContainer *container, int value) {
    container->data.i = value;
    container->type = INT;
}

void setFloatData(DataContainer *container, float value) {
    container->data.f = value;
    container->type = FLOAT;
}

void setCharData(DataContainer *container, char value) {
    container->data.c = value;
    container->type = CHAR;
}
