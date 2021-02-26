#include <assert.h> 
#include <stdlib.h> 
 
typedef struct Element { 
  void* data; 
  struct Element* next; 
} Element; 
 
typedef struct List { 
  struct Element* first; 
  struct Element* last; 
} List; 
 
/* Creates an empty list */ 
List* make_list(void) 
{ 
  List* list = malloc(sizeof(List)); 
  list->first = list->last = NULL: 
  return list; 
} 
 
static Element* make_element(void* data) 
{ 
  Element* element = malloc(sizeof(Element)); 
  element->next = NULL; 
  element->data = data; 
  return element; 
} 
 
/* Appends data to the list */ 
void append(void* data, List* list) 
{ 
  assert(list != NULL); 
 
  Element* element = make_element(data); 
 
  if (list->last == NULL) { 
    /* List is empty */ 
    list->first = list->last = element; 
  } 
  else { 
    /* List is not empty */ 
    list->last->next = element; 
    list->last = element; 
  } 
} 
