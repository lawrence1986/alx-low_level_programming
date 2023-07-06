## 0x1A. C - Hash tables

## Resources
# Read or watch:
•	What is a HashTable Data Structure - Introduction to Hash Tables , Part 0
•	Hash function
•	Hash table
•	All about hash tables
•	why hash tables and not arrays

# General
•	Allowed editors: vi, vim, emacs
•	All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
•	All your files should end with a new line
•	A README.md file, at the root of the folder of the project is mandatory
•	Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
•	You are not allowed to use global variables
•	No more than 5 functions per file
•	You are allowed to use the C standard library
•	The prototypes of all your functions should be included in your header file called hash_tables.h
•	Don’t forget to push your header file
•	All your header files should be include guarded
•	Code by: Lawrence Maduabuchi
•	Date: July 6th 2023

## Data Structures
# Please use these data structures for this project:

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;


 
## Files
All of the following files are programs written in C:

| Filename | Description |
| -------- | ----------- |
| ` 0-hash_table_create.c` |0. >>> ht = {}.|
| ` 1-djb2.c` | 1. djb2.|
| ` 2-key_index.c` | 2. key -> index|
| ` 3-hash_table_set.c` | 3. >>> ht['betty'] = 'cool'|
| ` 4-hash_table_get.c` | 4. >>> ht['betty'].|
| ` 5-hash_table_print.c` | 5. >>> print(ht)|
| ` 6-hash_table_delete.c` | 6. >>> del ht.|
| ` 100-sorted_hash_table.c` | 7. $ht['Betty'] = 'Cool'|
