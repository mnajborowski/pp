#include "bst.h"

void in_order(std::ostream &output, BstNode *start) {
    if (start->left!=NULL) in_order(output, start->left.get());
    output<<start->value<<std::endl;
    if (start->right!=NULL) in_order(output, start->right.get());
}

//zadanie3
void addToTree(std::unique_ptr<BstNode> &bst, int value) {
    if (bst) {
        if (bst->value > value) addToTree(bst->left, value);
        if (bst->value <= value) addToTree(bst->right, value);
    }
    else bst = std::make_unique<BstNode>(value);
}

//zadanie2
std::ostream &operator<<(std::ostream &output, BstNode *bst) {
    in_order(output, bst);
    return output;
}

//zadanie4
std::unique_ptr<BstNode> &operator<<(std::unique_ptr<BstNode> &bst, int &value) {
    addToTree(bst, value);
    return bst;
}

//zadanie5
int minimum(BstNode *root) {
    if (root->left!=nullptr) minimum(root->left.get());
    else return root->value;
}
int maximum(BstNode *root) {
    if (root->right!=nullptr) maximum(root->right.get());
    else return root->value;
}

//zadanie6
bool contains(BstNode *root, int value) {
    if (root) {
        if (root->value == value) return true;
        else if (value < root->value && root->left != nullptr) return contains(root->left.get(), value);
        else if (value >= root->value && root->right != nullptr) return contains(root->right.get(), value);
        return false;
    }
}

//zadanie7
unsigned int size(BstNode *root) {
    unsigned int i=0;
    if (root==nullptr) return 0;
    else {
        i++;
        if (root->left!=nullptr) i = i + size(root->left.get());
        if (root->right!=nullptr) i = i + size(root->right.get());
    }
    return i;
}

//zadanie_z_egzaminu_aiz
unsigned int sumLessThan(BstNode *root, unsigned int x) {
    unsigned int i=0;
    if (root==nullptr) return 0;
    else if (root->value<x) {
        i = root->value;
        if (root->left!=nullptr) i = i + sumLessThan(root->left.get(), x);
        if (root->right!=nullptr) i = i + sumLessThan(root->right.get(), x);
    }
    return i;
}