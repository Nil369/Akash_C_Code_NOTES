### Basic Tree Terminologies

<img src ="https://cdn.hashnode.com/res/hashnode/image/upload/v1629652895949/ACPJhdM3T.png" width ="350" align = "right">


1. **Node**: A basic unit of a tree that contains data and links to other nodes. For example, a node in a tree could contain a number (like 5) and links to other nodes.

2. **Root**: The top node of the tree. It’s like the starting point. If a tree is a family tree, the root is the ancestor.

3. **Parent**: A node that has links to other nodes. For example, in a tree representing a family, a parent node links to child nodes.

4. **Child**: A node that is connected to a parent node. For example, the nodes representing the children in a family tree are child nodes.

5. **Leaf**: A node that has no children, i.e., it’s at the end of the tree. Think of it as a tree leaf with no further branches.

6. **Sibling**: Nodes that share the same parent. For example, siblings in a family tree share the same parent node.

7. **Height of Tree**: The number of edges from the root to the farthest leaf. It tells us how tall the tree is.

8. **Depth of Node**: The number of edges from the root to that specific node. It shows how deep the node is in the tree.

9. **Subtree**: A smaller tree within the main tree. For example, if you cut off a branch of a tree, that branch can be seen as a subtree.

### Different Types of Trees

1. **Binary Tree**
   <img src ="https://miro.medium.com/v2/resize:fit:942/1*5LIURkrDDbz_S9paZ9EdZw.png" width ="200" height="150" align = "right">

   - A binary tree is a tree where each node has at most two children, usually called the left child and the right child.
   - Example: A tree that represents a decision-making process where each decision has two outcomes.
   - 
2. **Binary Search Tree (BST)**
    <img src =" https://media.geeksforgeeks.org/wp-content/uploads/20230304161652/Untitled.png" width ="200" height="150" align = "right">
   
   - A binary search tree is a binary tree where each node’s left child contains values smaller than the node’s value, and the right child contains values greater than the node’s value.
   - Example: Think of a phone book. The names are arranged in alphabetical order, and you can quickly find a name by following the order.

3. **AVL Tree**
   
   <img src =" https://www.programiz.com/sites/tutorial2program/files/avl-tree_update-bf.png" width ="200" height="150" align = "right">
   
   - An AVL tree is a self-balancing binary search tree. The difference in height between the left and right subtrees of any node is at most one. This ensures the tree remains balanced and operations like search, insertion, and deletion are efficient.
   - Example: It’s like a balanced scale that keeps adjusting itself so that it doesn’t tip too much to one side.
  
4. **Threaded Binary Tree**
   
 <img src =" https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/07/threadedBT.png" width ="200" height="150" align = "right">
  
   - A threaded binary tree is a type of binary tree where `NULL` pointers are replaced with pointers to the in-order predecessor or successor, making it easier to traverse without recursion or a stack.
   - Example: It’s like adding shortcuts in a family tree, so you can quickly find the next or previous member.
  

5. **B-Tree**
   
 

   - A B-Tree is a self-balancing tree data structure that allows nodes to have more than two children and can store multiple keys in a single node. It’s used in databases and file systems.
   - Example: Think of a B-Tree as a filing cabinet where each drawer can hold multiple files, and you can quickly find a file by opening the right drawer.

6. **B+ Tree**
   - A B+ Tree is an extension of the B-Tree where all the actual data is stored at the leaf nodes, and internal nodes only store keys for navigation. It’s commonly used in databases to efficiently retrieve ranges of data.
   - Example: It’s like a library catalog where the shelves only hold references to books, and the actual books are stored at the end of the aisle.


  <img src =" https://cdn.educba.com/academy/wp-content/uploads/2021/05/B-Tree-vs-B-Tree.jpg" >
