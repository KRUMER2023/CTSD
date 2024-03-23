#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};


struct Complex add(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

struct Complex subtract(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real - num2.real;
    result.imaginary = num1.imaginary - num2.imaginary;
    return result;
}

struct Complex multiply(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    result.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);
    return result;
}

struct Complex divide(struct Complex num1, struct Complex num2) {
    struct Complex result;
    float denominator = num2.real * num2.real + num2.imaginary * num2.imaginary;
    result.real = (num1.real * num2.real + num1.imaginary * num2.imaginary) / denominator;
    result.imaginary = (num1.imaginary * num2.real - num1.real * num2.imaginary) / denominator;
    return result;
}

int main() {
    struct Complex num1;
    struct Complex num2, result;

    printf("Enter real and imaginary parts of first complex number: \n");
    scanf("%f %f", &num1.real, &num1.imaginary);

    printf("Enter real and imaginary parts of second complex number: \n");
    scanf("%f %f", &num2.real, &num2.imaginary);

    result = add(num1, num2);
    printf("Addition: %.2f + %.2fi\n", result.real, result.imaginary);

    result = subtract(num1, num2);
    printf("Subtraction: %.2f + %.2fi\n", result.real, result.imaginary);

    result = multiply(num1, num2);
    printf("Multiplication: %.2f + %.2fi\n", result.real, result.imaginary);

    result = divide(num1, num2);
    printf("Division: %.2f + %.2fi\n", result.real, result.imaginary);

    return 0;
}
