#include <stdio.h>
#include <stdlib.h>
struct Task {
    int priority;
    char description[100];
    char assignee[50];
    struct Task* next;
};
struct PriorityQueue {
    struct Task* front;
    struct Task* rear;
};
struct LinkedList {
    struct Task* head;
};
struct Task* createTask(int priority, const char* description, const char* assignee) {
    struct Task* newTask = (struct Task*)malloc(sizeof(struct Task));
    newTask->priority = priority;
    snprintf(newTask->description, sizeof(newTask->description), "%s", description);
    snprintf(newTask->assignee, sizeof(newTask->assignee), "%s", assignee);
    newTask->next = NULL;
    return newTask;
}
struct PriorityQueue* createPriorityQueue() {
    struct PriorityQueue* priorityQueue = (struct PriorityQueue*)malloc(sizeof(struct PriorityQueue));
    priorityQueue->front = priorityQueue->rear = NULL;
    return priorityQueue;
}
struct LinkedList* createLinkedList() {
    struct LinkedList* linkedList = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    linkedList->head = NULL;
    return linkedList;
}
void enqueueUrgent(struct PriorityQueue* priorityQueue, 
                    int priority, const char* description, const char* assignee) {
    struct Task* newTask = createTask(priority, description, assignee);
    if (priorityQueue->rear == NULL) {
        priorityQueue->front = priorityQueue->rear = newTask;
    } else {
        priorityQueue->rear->next = newTask;
        priorityQueue->rear = newTask;
    }
}
struct Task* dequeueUrgent(struct PriorityQueue* priorityQueue) {
    if (priorityQueue->front == NULL) {
        return NULL; 
    }
    struct Task* dequeuedTask = priorityQueue->front;
    priorityQueue->front = priorityQueue->front->next;
    if (priorityQueue->front == NULL) {
        priorityQueue->rear = NULL;
    }
    return dequeuedTask;
}
void addToHistory(struct LinkedList* linkedList, struct Task* completedTask) {
    completedTask->next = linkedList->head;
    linkedList->head = completedTask;
}
void displayHistory(struct LinkedList* linkedList) {
    printf("Task History:\n");
    struct Task* current = linkedList->head;
    while (current != NULL) {
        printf("Priority: %d, Description: %s, Assignee: %s\n", current->priority, current->description, current->assignee);
        current = current->next;
    }
}

int main() {
    struct PriorityQueue* urgentQueue = createPriorityQueue();
    struct LinkedList* taskHistory = createLinkedList();
    enqueueUrgent(urgentQueue, 1, "Fix critical bug", "Nisha Kotecha");
    enqueueUrgent(urgentQueue, 2, "Deploy security patch", "Raghav Jain");
    enqueueUrgent(urgentQueue, 3, "Address server outage", "Siya Rathi");
    struct Task* urgentTask = dequeueUrgent(urgentQueue);
    if (urgentTask != NULL) {
        printf("\nProcessing Urgent Task - Priority: %d, Description: %s, Assignee: %s\n",
                            urgentTask->priority, urgentTask->description, urgentTask->assignee);
        addToHistory(taskHistory, urgentTask);
    }
    printf("\nCurrent Task History:\n");
    displayHistory(taskHistory);
    free(urgentQueue);
    free(taskHistory);
    return 0;
}
