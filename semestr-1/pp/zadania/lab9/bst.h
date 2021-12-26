#ifndef ZADANIA_BST_H
#define ZADANIA_BST_H
#include <iostream>
#include <memory>

//zadanie1
struct BstNode {
    int value;
    std::unique_ptr<BstNode> left;
    std::unique_ptr<BstNode> right;

    BstNode() {
        left = nullptr;
        right = nullptr;
    }

    BstNode(int value) : value(value) {};
};

void addToTree(std::unique_ptr<BstNode> &bst, int value);
std::ostream &operator<<(std::ostream &output, BstNode* bst);
std::unique_ptr<BstNode> &operator<<(std::unique_ptr<BstNode> &bst, int &value);
int minimum(BstNode *root);
int maximum(BstNode *root);
bool contains(BstNode *root, int value);
unsigned int size(BstNode *root);
unsigned int sumLessThan(BstNode *root, unsigned int x);

#endif //ZADANIA_BST_H
