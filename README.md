# Holberton Binary Trees

This repository contains the implementation of various operations on Binary Trees as part of the Holberton School curriculum.

## Quick Links

- [Synopsis](#synopsis)
- [File Descriptions](#file-descriptions)
- [Usage](#usage)
- [Authors](#authors)

## Synopsis

The repository includes the following files:

- `0-binary_tree_node.c`: [Creates a binary tree node](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/0-binary_tree_node.c)
- `1-binary_tree_insert_left.c`: [Inserts a node as the left-child of another node](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/1-binary_tree_insert_left.c)
- `2-binary_tree_insert_right.c`: [Inserts a node as the right-child of another node in a binary tree.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/2-binary_tree_insert_right.c)
- `3-binary_tree_delete.c`: [Deletes an entire binary tree.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/3-binary_tree_delete.c)
- `4-binary_tree_is_leaf.c`: [Checks if a node is a leaf of a binary tree.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/4-binary_tree_is_leaf.c)
- `5-binary_tree_is_root.c`: [Checks if a given node is the root of a binary tree.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/5-binary_tree_is_root.c)
- `6-binary_tree_preorder.c`: [Goes through a binary tree using pre-order traversal.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/6-binary_tree_preorder.c)
- `7-binary_tree_inorder.c`: [Goes through a binary tree using in-order traversal.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/7-binary_tree_inorder.c)
- `8-binary_tree_postorder.c`: [Goes through a binary tree using post-order traversal.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/8-binary_tree_postorder.c)
- `9-binary_tree_height.c`: [Measures the height of a binary tree.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/9-binary_tree_height.c)
- `10-binary_tree_depth.c`: [Measures the depth of a node in a binary tree.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/10-binary_tree_depth.c)
- `11-binary_tree_size.c`: [Measures the size of a binary tree.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/11-binary_tree_size.c)
- `12-binary_tree_leaves.c`: [Counts the leaves in a binary tree.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/12-binary_tree_leaves.c)
- `13-binary_tree_nodes.c`: [Counts the nodes with at least 1 child in a binary tree.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/13-binary_tree_nodes.c)
- `14-binary_tree_balance.c`: [Measures the balance factor of a binary tree.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/14-binary_tree_balance.c)
- `15-binary_tree_is_full.c`: [Checks if a binary tree is full.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/15-binary_tree_is_full.c)
- `16-binary_tree_is_perfect.c`: [Checks if a binary tree is perfect.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/16-binary_tree_is_perfect.c)
- `17-binary_tree_sibling.c`: [Finds the sibling of a node in a binary tree.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/17-binary_tree_sibling.c)
- `18-binary_tree_uncle.c`: [Finds the uncle of a node in a binary tree.](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/18-binary_tree_uncle.c)
- `binary_trees.h`: [Header file containing the definition of the `binary_tree_t` type and all function prototypes](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/binary_trees.h)

## File Descriptions

- `0-binary_tree_node.c`: This file contains a function that creates a binary tree node. The function takes a pointer to the parent node and an integer value to store in the new node. It returns a pointer to the new node, or `NULL` on failure.

- `1-binary_tree_insert_left.c`: This file contains a function that inserts a node as the left-child of another node. The function takes a pointer to the parent node and an integer value to store in the new node. If the parent node already has a left child, the new node must take its place, and the old left child must be set as the left child of the new node.

- '2-binary_tree_insert_right.c': This file contains a function that inserts a node as the right-child of another node. The function takes a pointer to the parent node and an integer value to store in the new node. If the parent node already has a right child, the new node must take its place, and the old right child must be set as the right child of the new node.

- '3-binary_tree_delete.c': This file contains a function that deletes an entire binary tree. It frees each node in the tree using a post-order traversal.

- '4-binary_tree_is_leaf.c': This file contains a function that checks if a node is a leaf of a binary tree. A node is a leaf if it has no children.

- '5-binary_tree_is_root.c': This file contains a function that checks if a given node is the root of a binary tree. A node is a root if it has no parent.

- '6-binary_tree_preorder.c': This file contains a function that goes through a binary tree using pre-order traversal. It visits the root node first, then the left subtree, and finally the right subtree.

- '7-binary_tree_inorder.c': This file contains a function that goes through a binary tree using in-order traversal. It visits the left subtree first, then the root node, and finally the right subtree.

- '8-binary_tree_postorder.c': This file contains a function that goes through a binary tree using post-order traversal. It visits the left subtree first, then the right subtree, and finally the root node.

- '9-binary_tree_height.c': This file contains a function that measures the height of a binary tree. The height is the maximum distance from the root node to any leaf.

- '10-binary_tree_depth.c': This file contains a function that measures the depth of a node in a binary tree. The depth is the distance from the root node to the given node.

- '11-binary_tree_size.c': This file contains a function that measures the size of a binary tree. The size is the total number of nodes in the tree.

- '12-binary_tree_leaves.c': This file contains a function that counts the leaves in a binary tree. A leaf is a node with no children.

- '13-binary_tree_nodes.c': This file contains a function that counts the nodes with at least 1 child in a binary tree.

- '14-binary_tree_balance.c': This file contains a function that measures the balance factor of a binary tree. The balance factor is the difference between the heights of the left and right subtrees.

- '15-binary_tree_is_full.c': This file contains a function that checks if a binary tree is full. A binary tree is full if every node has either 0 or 2 children.

- '16-binary_tree_is_perfect.c': This file contains a function that checks if a binary tree is perfect. A binary tree is perfect if all its levels are completely filled.

- '17-binary_tree_sibling.c': This file contains a function that finds the sibling of a node in a binary tree. The sibling is the other child of the node's parent.

- '18-binary_tree_uncle.c': This file contains a function that finds the uncle of a node in a binary tree. The uncle is the sibling of the node's parent.

- `binary_trees.h`: This is the header file. It includes the definition of the `binary_tree_t` type, which is used to represent a binary tree node. It also includes the prototypes for all functions implemented in this project.

## Usage

To use the functions implemented in this project, you need to include the `binary_trees.h` header file in your source code.

```c
#include "binary_trees.h"
```

Then, you can call the functions as needed. For example, to create a new binary tree node:

```c
binary_tree_t *node = binary_tree_node(parent, value);
```

## Authors

Chris Stamper - [ZeroDayPoke](https://github.com/ZeroDayPoke)
