Dynamic memory allocation in C/C++ refers to performing memory allocation manually by a programmer.
Dynamically allocated memory is allocated on Heap, and non-static and local variables get memory allocated on Stack.
  
What are applications? 

1.One use of dynamically allocated memory is to allocate memory of variable size, 
which is not possible with compiler allocated memory except for variable-length arrays.
  
2.The most important use is the flexibility provided to programmers. We are free to allocate
and deallocate memory whenever we need it and whenever we don’t need it anymore. 
There are many cases where this flexibility helps. Examples of such cases are Linked List, Tree, etc

C uses: malloc,calloc, free() 
C++: new, delete
Syntax to use new operator
pointer-variable = new data-type;
// Combine declaration of pointer 
// and their assignment
int *p = new int; 

int* p = new int(25);
float* q = new float(75.25);

Allocate a block of memory: a new operator is also used to allocate a block(an array) of memory of type data type. 

pointer-variable = new data-type[size];
int *p = new int[10];

// Request block of memory of size n
    int n = 5;
    int *q = new(nothrow) int[n];
 
    if (!q)
        cout << "allocation of memory failed\n";

// In c:

1.
  // Dynamically allocate memory using malloc()
  int *  ptr = (int*)malloc(n * sizeof(int));

2.
    // Dynamically allocate memory using calloc()
    ptr = (int*)calloc(n, sizeof(int));

 // Free the memory
        free(ptr1);

3.  
    // Dynamically allocate memory using calloc()
    int *ptr = (int*)calloc(n, sizeof(int)); // if memory is not sufficient then realloc 
  // Dynamically re-allocate memory using realloc()
        ptr = realloc(ptr, n * sizeof(int));
 
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }


// In java:
//declaring array  
int array[];  
//initialize an array  
array= new int[6];  
