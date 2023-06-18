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
- `binary_trees.h`: [Header file containing the definition of the `binary_tree_t` type and all function prototypes](https://github.com/ZeroDayPoke/holbertonschool-binary_trees/blob/master/binary_trees.h)

## File Descriptions

- `0-binary_tree_node.c`: This file contains a function that creates a binary tree node. The function takes a pointer to the parent node and an integer value to store in the new node. It returns a pointer to the new node, or `NULL` on failure.

- `1-binary_tree_insert_left.c`: This file contains a function that inserts a node as the left-child of another node. The function takes a pointer to the parent node and an integer value to store in the new node. If the parent node already has a left child, the new node must take its place, and the old left child must be set as the left child of the new node.

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
