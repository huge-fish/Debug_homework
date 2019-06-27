#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *circle_create(int n);
void count_off(Node *head, int n, int k, int m);

int main() {
    int n, k, m;
    scanf("%d%d%d", &n, &k, &m);
    Node *head = circle_create(n);
    count_off(head, n, k, m);
    return 0;
}

Node *circle_create(int n) {
    Node *temp, *new_node, *head;
    int i;

    
    temp = (Node *) malloc(sizeof(Node));
    head = temp;
    head->data = 1;

    
    for(i = 2; i <= n; i++) {
        new_node = (Node *) malloc(sizeof(Node));
        new_node->data = i;
        temp->next = new_node;
        temp = new_node;
    }

    
    temp->next = head;

    return head;
}

void count_off(Node *head, int n, int k, int m) {
   Node *temp, *pre;
    int i;
    int times = 0;
    times = 1;
    temp = head;
    pre = head;
    
    for(i = 1; i < k - 2 ; i++){
        pre = pre->next;
    }
    
    for(i = 1; i < k-1; i++){
        //pre = temp;
        temp = temp->next;
    }

    i = 1;
    
    while(times <= n){
      if(i == m + 1){
          if(m == 1){
              temp->data -= 1;
              if (temp->data == 0)
                  temp->data=n;
              printf("%d", temp->data);
          }
        else printf("%d", temp->data);
        times++;
        pre->next = pre->next->next;
        temp = pre;
        i = 1;
         if(times != 1){
             printf(" ");
         }
    }
        pre = temp;
        temp = temp->next;
        i++;
    }
    
    
    return;
}

