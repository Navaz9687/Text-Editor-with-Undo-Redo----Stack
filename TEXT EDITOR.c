/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX 100

char text[MAX][100];
char undoStack[MAX][100];
char redoStack[MAX][100];

int undoTop = -1;
int redoTop = -1;

char currentText[100] = "";

void push(char stack[MAX][100], int *top, char str[]) {
    if (*top < MAX - 1) {
        strcpy(stack[++(*top)], str);
    }
}

void undo() {
    if (undoTop == -1) {
        printf("Nothing to undo!\n");
        return;
    }

    push(redoStack, &redoTop, currentText);
    strcpy(currentText, undoStack[undoTop--]);

    printf("Undo successful!\n");
}

void redo() {
    if (redoTop == -1) {
        printf("Nothing to redo!\n");
        return;
    }

    push(undoStack, &undoTop, currentText);
    strcpy(currentText, redoStack[redoTop--]);

    printf("Redo successful!\n");
}

int main() {
    int choice;

    char newText[100];

    while (1) {
        printf("\n--- TEXT EDITOR ---\n");
        printf("1. Type text\n");
        printf("2. Undo\n");
        printf("3. Redo\n");
        printf("4. Display text\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                push(undoStack, &undoTop, currentText);
                redoTop = -1;

                printf("Enter new text: ");
                fgets(newText, sizeof(newText), stdin);
                newText[strcspn(newText, "\n")] = '\0';

                strcpy(currentText, newText);
                break;

            case 2:
                undo();
                break;

            case 3:
                redo();
                break;

            case 4:
                printf("Current text: %s\n", currentText);
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
