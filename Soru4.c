#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node* front;
    struct Node* rear;
};

void initializeQueue(struct Queue* queue) {
    queue->front = NULL;
    queue->rear = NULL;
}

void enqueue(struct Queue* queue, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    
    if (queue->rear == NULL) {
        queue->front = newNode;
        queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
    
    printf("Deger basariyla eklendi\n");
}

void dequeue(struct Queue* queue) {
    if (queue->front == NULL) {
        printf("Kuyruk bos.\n");
        return;
    }
    
    struct Node* temp = queue->front;
    queue->front = queue->front->next;
    
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    
    free(temp);
    printf("Deger basariyla silindi\n");
}

void displayQueue(struct Queue* queue) {
    if (queue->front == NULL) {
        printf("Kuyruk bos\n");
        return;
    }
    
    struct Node* current = queue->front;
    
    printf("Kuyruk: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Queue queue;
    initializeQueue(&queue);
    
    int choice, value;
    
    do {
        printf("Lutfen asagýdaki seceneklerden birini seciniz:\n");
        printf("1. Ekleme\n");
        printf("2. Silme\n");
        printf("3. Goruntuleme\n");
        printf("4. Cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Eklemek istediðiniz degeri girin: ");
                scanf("%d", &value);
                enqueue(&queue, value);
                break;
            case 2:
                dequeue(&queue);
                break;
            case 3:
                displayQueue(&queue);
                break;
            case 4:
                printf("Programdan cikiliyor...\n");
                break;
            default:
                printf("Gecersiz secenek. Tekrar deneyin.\n");
        }
        
        printf("\n");
        
    } while (choice != 4);
    
    return 0;
}

