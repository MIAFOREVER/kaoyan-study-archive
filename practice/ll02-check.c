#include <assert.h>
#include <stdio.h>
#include "ll02-reversal.c"

/* 依据照片整理的两种 if 判读，不是原图的无歧义逐字转录。
 * anchor_at_head=0 仅用于非空表复现；=1 验证用户提出的单行修正（包含空表）。 */
static void original_model(Node *head, int inner_checks_third, int anchor_at_head) {
    Node *cur = NULL;
    Node *h = anchor_at_head ? head : head->next;
    assert(h != NULL);
    if (h->next) {
        if (inner_checks_third ? h->next->next != NULL : h->next != NULL) {
            cur = h->next->next;
            h->next->next = NULL;
        }
    }
    while (cur) {
        Node *next = cur->next;
        cur->next = h->next;
        h->next = cur;
        cur = next;
    }
}

static void setup(Node *head, Node nodes[], int n) {
    head->data = 99;
    head->next = n ? &nodes[0] : NULL;
    for (int i = 0; i < n; ++i) {
        nodes[i].data = i % 2; /* 重复数据，必须通过结点身份检验反转。 */
        nodes[i].next = i + 1 < n ? &nodes[i + 1] : NULL;
    }
}

int main(void) {
    for (int variant = 0; variant < 2; ++variant) {
        for (int n = 1; n <= 6; ++n) {
            Node head, nodes[6];
            setup(&head, nodes, n);
            original_model(&head, variant, 0);
            Node *p = head.next;
            assert(p == &nodes[0]);
            p = p->next;
            for (int i = n - 1; i >= 1; --i) {
                assert(p == &nodes[i]);
                p = p->next;
            }
            assert(p == NULL);
        }
    }
    puts("照片两种 if 判读：n=1..6 均固定首元结点，只反转其后部分；n>=2 不满足整表反转。");

    for (int variant = 0; variant < 2; ++variant) {
        for (int n = 0; n <= 6; ++n) {
            Node head, nodes[6];
            setup(&head, nodes, n);
            original_model(&head, variant, 1);
            assert(head.data == 99);
            Node *p = head.next;
            for (int i = n - 1; i >= 0; --i) {
                assert(p == &nodes[i]);
                assert(p->data == i % 2);
                p = p->next;
            }
            assert(p == NULL);
        }
    }
    puts("用户提出的仅改 h=head 版本：两种 if 判读、n=0..6 全部通过，原有空表保护生效。");

    for (int n = 0; n <= 6; ++n) {
        Node head, nodes[6];
        setup(&head, nodes, n);
        reverse(&head);
        assert(head.data == 99);
        Node *p = head.next;
        for (int i = n - 1; i >= 0; --i) {
            assert(p == &nodes[i]);
            assert(p->data == i % 2);
            p = p->next;
        }
        assert(p == NULL);
    }
    puts("助手修正版：n=0..6 全部通过；结点身份、data、逆序与 NULL 结尾检查通过。");
    return 0;
}
