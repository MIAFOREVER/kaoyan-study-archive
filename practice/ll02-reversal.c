#include <stddef.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* 助手给出的头插法修正版；不是用户原始作答。
 * 题目约定：head 指向有效头结点，输入无环且以 NULL 结束。 */
void reverse(Node *head) {
    Node *h = head;
    Node *cur = h->next;
    h->next = NULL;

    while (cur != NULL) {
        Node *next = cur->next;
        cur->next = h->next;
        h->next = cur;
        cur = next;
    }
}
