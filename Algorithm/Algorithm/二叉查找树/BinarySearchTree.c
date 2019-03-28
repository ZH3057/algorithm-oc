//
//  BinarySearchTree.c
//  Algorithm
//
//  Created by Jun Zhou on 2019/3/28.
//  Copyright © 2019 Jun Zhou. All rights reserved.
//

#include "BinarySearchTree.h"

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} Node;

static Node *root = NULL;

// MARK: 插入
void bst_insert(int data) {
    if (root == NULL) {
        root = &((Node){data, NULL, NULL});
    }
    
    Node *p = root;
    while (p != NULL) {
        if (data > p->data) { // 插入右子树
            if (p->right == NULL) {
                p->right = &((Node){data, NULL, NULL});
                return;
            }
            p = p->right;
        } else { // 插入左子树
            if (p->left == NULL) {
                p->left = &((Node){data, NULL, NULL});
                return;
            }
            p = p->left;
        }
    }
}

// MARK: 查询

Node * bst_find(int data) {
    Node *p = root;
    while (p != NULL) {
        if (data < p->data) {
            p = p->left;
        } else if (data > p->data) {
            p = p->right;
        } else {
            return p;
        }
    }
    return NULL;
}

// MARK: 删除

void bst_delete(int data) {
    Node *p = root; // p 指向要删除的节点，初始化指向根节点
    Node *pp = NULL; // // pp 记录的是 p 的父节点
    while (p != NULL && p->data != data) {
        pp = p;
        if (data > p->data) {
            p = p->right;
        } else {
            p = p->left;
        }
    }
    if (p == NULL) return; // 没有找到
    
    // 要删除的节点有两个子节点
    if (p->left != NULL && p->right != NULL) { // // 查找右子树中最小节点
        Node *minP = p->right;
        Node *minPP = p; // minPP 表示 minP 的父节点
        while (minP->left != NULL) {
            minPP = minP;
            minP = minP->left;
        }
        
        // FIXME: 没明白
        p->data = minP->data;
        p = minP;
        pp = minPP;
    }
    
    // 删除节点是叶子节点或者仅有一个子节点
    Node *child;
    if (p->left != NULL) {
        child = p->left;
    } else if (p->right != NULL) {
        child = p->right;
    } else {
        child = NULL;
    }
    
    if (pp == NULL) {
        root = child;
    } else if (pp->left == p) {
        pp->left = child;
    } else {
        pp->right = child;
    }
}
