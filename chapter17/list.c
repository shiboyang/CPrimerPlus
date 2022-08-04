#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void init_list(List * plist)
{
    plist->count = 0;
    plist->head = NULL;
}

bool list_is_empty(const List * plist)
{
    if (plist->count == 0)
        return true;
    else
        return false;
}

bool list_is_full(const List * plist)
{
    Node * new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL)
        return true;
    else
    {
        free(new_node);
        return false;
    }
}

unsigned int list_item_count(const List * plist)
{
    return plist->count;
}

static void copy_item(Item * prs_item, Item * pds_item)
{
    strcpy(pds_item->title, prs_item->title);
    pds_item->rating = prs_item->rating; 
}

bool add_item(List * plist, Item item)
{
    Node * pn_node = (Node *)malloc(sizeof(Node));
    Node * current_node;

    if (pn_node == NULL)
    {
        return false;
    }
    else
    {
        
        copy_item(&item, &pn_node->item);
        if (plist->head == NULL)
        {
            plist->head = pn_node;
        }
        else
        {
            current_node = plist->head;
            while (current_node->next != NULL)
            {
                current_node = current_node->next;
            }
            current_node->next = pn_node;
        }
        pn_node->next = NULL;
        plist->count++;
        return true;
    }
}

void traverse(const List * plist, void(*pfunc)(Item))
{
    if (plist->count > 0)
    {
        Node * current_node = plist->head;
        while (current_node != NULL)
        {
            pfunc(current_node->item);
            current_node = current_node->next;
        }
    }
}

void empty_list(List * plist)
{
    if (plist->count > 0)
    {
        Node * current_pnode = plist->head;
        Node * next_pnode;
        while (current_pnode != NULL)
        {
            next_pnode = current_pnode->next;
            free(current_pnode);
            current_pnode = next_pnode;
        }
    }
}
