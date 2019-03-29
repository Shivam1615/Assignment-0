NETID: srp218
Student: Shivam Patel
Project number: 0
Class: Systems Programming

                                                                   CS 214 Systems Programming Assignment 0 PointerSorter by Shivam R Patel


                Synopsis of pointersorter:
                I did this project into multiple parts. This assignemnt required us to read a given string from the command line and then be able to parse through the string and find only non alphabet 
                strings so that we can sort them after finding all of the strings. In this project, I created five different methods that did mutiple things to my program in the best possible way I could 
                have done it. These five methods were called PrintLinkedList(), SwapNodes(), Tokenizer(), SortLinkedlist(), and InsertNodes(). I will talk about them briefly during this report.

                Method 1 SwapNodes: This method as you would know it is a swap method that switches data bewteen nodes in my linked list when I find that one of the letters are of a higher precedence or 
                higher priotizing the strings bewteen nodes. Everytime I find a string for example like ComputerScience1889Camping, this method, assuming the strings are in the nodes, swap the two nodes 
                and it becomes Camping ComputerScience when printing it out.

                Method 2 PrintLinkedList: This method is just simplying printing out the linked list after breaking down the strings by nodes and then sorting them. It also checks if it is empty, in which 
                case it would then skip a node until it finds out that it is not empty and prints out the list in the sorted order.

                Method 3 InsertNodes: This method takes into account of creating nodes first and then being able to put the string, which consists only of alphabet letters, into the node that was created. 
                It keeps on doing this until it finds the last string to put the string into the node and then it stops after that. This method is called within the method of tokenizer, which breaks down 
                the string from the command line, argv[1] argument.

                Method 4 Tokenizer: This is one of the most important methods as it is able to break down the string into something we like to call tokens. These individual tokens are able to be stored 
                into a data structure that I liked to use for this project called Linked List. These Linked lists have nodes that are created everytime I find out the end of each token. The only way I 
                find out the end the of each token is to see if it is not alpha(string) and then I copy the concatenated string using memcpy and store it into another char pointer word. I request the 
                the length of the token in the malloc function when I create a node and then I create a node and copy the string into the node in order to be sorted later on. After this, I find out that 
                once all of the strings are stored into the nodes, I call the SortLinkedList() method and also the PrintLinkedList() method once I finish sorting the Linked List using bubble sorting algorithm.

                Method 5 SortLinkedList: This method takes into an effect only after it finishes breaking down strings and tokenizing them and storing them into each nodes of the linked list. This method 
                is called within the Tokenizing method and it sorts the nodes into LinkedList using the bubble sorting algorithm. It priotizes the strings into a few categories: capitalizations, 
                lowercases, and empty or too many arguments. When I find that a lowercase is before uppercase, then swap it and then iterate it to find the next node. Also if I find a capital letter 
                after lowercase, then it would skip and move the ptr to the next node. I used a LinkedList overall in my program because it helped to store the data and I only had to worry about changing 
                the pointers. This not the most efficient way, but its one of the easiest of storing the strings into the nodes and then I used bubble sort to swap n passes until the whole LinkedList is 
                finished sorting. This algorithm also checks if the string is greater in length and priotizes that over the strings that are not in length. The priotizing order is Uppercase, length of the 
                string, and the lowercase values at last. The order I sorted them in this LinkedList is in decending order using ASCII codes, where greater than 90 is lowercase and less than or equal to 90 is uppercase.
                                                                                                                                                                                                         
