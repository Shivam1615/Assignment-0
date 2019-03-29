#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct Node{
char *data;
struct Node *next;
};

void InsertNode(struct Node *head, struct Node *variables);
void printLinkedList(struct Node *head, char *Otherword);
void Tokenizer(char *argument);
void SortingLinkedList(struct Node *ptr);
void SwapNodes(struct Node *first, struct Node *second);

int main(int argc, char**argv){
else if(argc > 2){
        printf("Insufficient Arguments. Enter the correct number of arguments.\n");
}else if(argc == 2){
        Tokenizer(argv[1]); //This calls the tokenizer method when finding only one argument.
}

return 0;
}

/*This method is a Linked List insertion method for the tokenizers when finding strings with alphabet characters.*/
void InsertNode(struct Node *head, struct Node *variables){
        struct Node *ptr = malloc(sizeof(struct Node*));
        for(ptr = head; ptr->next != NULL; ptr = ptr->next){
        ;
        }
        ptr->next = variables;
        return;
}
/*This method breaks down the string into tokens and then it inserts into the Linked List after finding each character
 * that is not any other character other than the alphabet and numbers as well.*/
void Tokenizer(char *argument){
        char word[1000];
        int tracker = 0;
        char PlaceHolder[10] = "";
        memcpy(word, argument, strlen(argument)+1);
        int length = strlen(word);
        char Otherword[1000];
        memcpy(Otherword, "", 1);
        char Another[1000];
        strcpy(Another, "");
        struct Node *ptr = malloc(sizeof(struct Node));
        ptr->data = word;
        int i;
        for(i = 0; i <= length; i++){
                if(!(isalpha(word[i]))){
                        tracker++;
                        struct Node *node = malloc(sizeof(struct Node));
                        char *character = (char*)malloc((strlen(Otherword))*sizeof(char));
                        memcpy(character, Otherword, strlen(Otherword)+1);
                        node->data = character;
                        node->next = NULL;
                        InsertNode(ptr, node);
                        memcpy(Otherword, "", 1);
                }else if(isalpha(word[i])){
                        PlaceHolder[0] = word[i];
                        memcpy(Another, PlaceHolder, strlen(PlaceHolder)+1);
                        strcat(Otherword, Another);
                        //strcat(Otherword, PlaceHolder);
                }

        }
        ptr = ptr->next;
        SortingLinkedList(ptr);
        printLinkedList(ptr, Otherword);
}
/*This method prints out the Linked List after sorting it with strings.*/
void printLinkedList(struct Node *head, char *Otherword){
struct Node *ptr = malloc(sizeof(struct Node*));
for(ptr = head; ptr != NULL; ptr = ptr->next){
        if(strcmp(ptr->data, Otherword) != 0){
                printf("%s\n", ptr->data);
        }else{              
              continue;
        }
}
return;
}
/*This method swaps the two nodes when finding the next node with string greater than the string from the previous node.*/
void SwapNodes(struct Node *first, struct Node *second){
        char *temp = first->data;
        first->data = second->data;
        second->data = temp;
}

/* This method sorts the Linked list in decending order with Capitalization Alphabets with priority over lowercase Alphabets*/
void SortingLinkedList(struct Node *head){
        struct Node *ptr;
        struct Node *Last = NULL;
        int checker = 0;
        do{
                checker = 0;
                ptr = head;
                while(ptr->next != Last){
                        if(ptr->data[0] > 90 && ptr->next->data[0] <= 90){
                                SwapNodes(ptr, ptr->next);
                                checker = 1;
                        }else if(ptr->data[0] < 90 && ptr->next->data[0] > 90){
                                ptr = ptr->next;
                                continue;
                        }else if(ptr->data[0] < ptr->next->data[0]){
                                SwapNodes(ptr, ptr->next);
                                checker = 1;
                        }else if(ptr->data[0] == ptr->next->data[0]){
                                int i;
                                for(i = 1; i < strlen(ptr->data); i++){
                                        if(ptr->data[i] > 90 && ptr->next->data[i] < 91){ /*This loop checks when the chars from the first letter are the same*/
                                                SwapNodes(ptr, ptr->next);
                                                checker = 1;
                                                break;
                                        }else if(ptr->data[i] < 91 && ptr->next->data[i] > 90){
                                                break;
                                        }
                                        else if(ptr->data[i] < ptr->next->data[i]){
                                                SwapNodes(ptr, ptr->next);
                                                checker = 1;
                                                break;
                                        }else if(ptr->data[i] > ptr->next->data[i]){
                                                break;
                                        }
                                        else if(ptr->data[i] == ptr->next->data[i]){
                                                continue;
                                        }
                                }
                                if(i == strlen(ptr->data) && strlen(ptr->data) < strlen(ptr->next->data)){
                                     SwapNodes(ptr, ptr->next);
                                     checker = 1;
                                }
                        }
                        ptr = ptr->next;
                }
                Last = ptr;
        }
        while(checker == 1);
}
