#ifndef LIST_H_
#define LIST_H_

#define TITLELENS 50

typedef struct film
{
    char title[TITLELENS];
    int rating;

}Item;

struct node
{
    Item item;
    struct node * next;
};
typedef struct node Node;

// typedef Node * List;


typedef struct list
{
    Node * head;
    int count;
}List;

// 初始化链表
void init_list(List *);
// 判断列表空
bool list_is_empty(const List *);
// 判断列表满
bool list_is_full(const List *);
// 新增元素
bool add_item(List *, Item);
// 返回列表包含的数量
unsigned int list_item_count(const List *);
// 执行以item参数的函数
void traverse(const List *, void(Item));
// 释放链表
void empty_list(List *);

#endif