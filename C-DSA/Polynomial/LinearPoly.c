#include <stdio.h>
#include <stdlib.h>

struct Term {
    int coefficient;
    int exponent;
    struct Term* next;
};

struct Term* createTerm(int coefficient, int exponent) {
    struct Term* newTerm = (struct Term*)malloc(sizeof(struct Term));
    newTerm->coefficient = coefficient;
    newTerm->exponent = exponent;
    newTerm->next = NULL;
    return newTerm;
}

void insertTerm(struct Term** polynomial, struct Term* term) {
    if (*polynomial == NULL || term->exponent > (*polynomial)->exponent) {
        term->next = *polynomial;
        *polynomial = term;
    } else {
        struct Term* current = *polynomial;
        while (current->next != NULL && term->exponent < current->next->exponent) {
            current = current->next;
        }
        term->next = current->next;
        current->next = term;
    }
}

void displayPolynomial(struct Term* polynomial) {
    if (polynomial == NULL) {
        printf("0");
        return;
    }
    
    while (polynomial != NULL) {
        printf("%dx^%d", polynomial->coefficient, polynomial->exponent);
        if (polynomial->next != NULL) {
            printf(" + ");
        }
        polynomial = polynomial->next;
    }
}

struct Term* addPolynomials(struct Term* poly1, struct Term* poly2) {
    struct Term* result = NULL;

    while (poly1 != NULL || poly2 != NULL) {
        struct Term* term = NULL;

        if (poly1 != NULL && (poly2 == NULL || poly1->exponent >= poly2->exponent)) {
            term = createTerm(poly1->coefficient, poly1->exponent);
            poly1 = poly1->next;
        } else if (poly2 != NULL) {
            term = createTerm(poly2->coefficient, poly2->exponent);
            poly2 = poly2->next;
        }

        insertTerm(&result, term);
    }

    return result;
}

int main() {
    // 3x^2 + 2x^1 + 1x^0
    struct Term* polynomial1 = NULL;
    insertTerm(&polynomial1, createTerm(3, 2));
    insertTerm(&polynomial1, createTerm(2, 1));
    insertTerm(&polynomial1, createTerm(1, 0));
    
    printf("Polynomial 1: ");
    displayPolynomial(polynomial1);
    printf("\n");

    // 1x^2 + 2x^1 + 3x^0
    struct Term* polynomial2 = NULL;
    insertTerm(&polynomial2, createTerm(1, 2));
    insertTerm(&polynomial2, createTerm(2, 1));
    insertTerm(&polynomial2, createTerm(3, 0));
    
    printf("Polynomial 2: ");
    displayPolynomial(polynomial2);
    printf("\n");

    struct Term* sum = addPolynomials(polynomial1, polynomial2);
    printf("Sum of Polynomials: ");
    displayPolynomial(sum);
    printf("\n");

    while (polynomial1 != NULL) {
        struct Term* temp = polynomial1;
        polynomial1 = polynomial1->next;
        free(temp);
    }
    while (polynomial2 != NULL) {
        struct Term* temp = polynomial2;
        polynomial2 = polynomial2->next;
        free(temp);
    }
    while (sum != NULL) {
        struct Term* temp = sum;
        sum = sum->next;
        free(temp);
    }

    return 0;
}
