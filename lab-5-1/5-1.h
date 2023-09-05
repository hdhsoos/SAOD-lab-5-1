#pragma once
#include <iostream>
#include <string>
#include <ctime>
typedef struct TreeNode {
	int data{};
	int count{ 0 };
	TreeNode* parent{ nullptr };
	TreeNode* right{ nullptr };
	TreeNode* left{ nullptr };
};


void find(TreeNode*& curr, int key);
void menu();
void in_order(const TreeNode* root, int level);
void post_order(const TreeNode* root, int level);
void pre_order(const TreeNode* root, int level);
void destroy(TreeNode*& root);
void build_tree(TreeNode*& root, int n);
int get_number();
void pre_order_count(const TreeNode* root);
void remove(TreeNode*& root, int del_data);

void iter_add_node(TreeNode*& root, int data);
void rec_add_node(TreeNode*& root, int data);