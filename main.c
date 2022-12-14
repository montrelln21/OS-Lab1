#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  int p;
  printf("Tests for linked list implementation\n");

  list_t* myList = (list_t*)list_alloc();
  
  list_print(myList);
  list_add_to_front(myList, 3);
  list_add_to_front(myList, 7);
  list_add_to_front(myList, 4);
  list_print(myList);
  list_length(myList);

  list_add_to_back(myList, 8);
  list_add_to_back(myList, 9);
  list_print(myList);

  list_add_at_index(myList, 6, 2);
  list_add_at_index(myList, 1, 4);
  list_print(myList);

  
  list_remove_from_back(myList);
  list_remove_from_back(myList);
  list_print(myList);

  list_remove_from_front(myList);
  list_print(myList);

  list_remove_at_index(myList, 2);
  list_print(myList);
  list_remove_at_index(myList, 1);
  list_print(myList);

  p = list_is_in(myList, 7);
  printf("Is the element 7 is in the list? %d.\n", p);
  p = list_is_in(myList, 0);
  printf("Is the element 0 is in the list? %d.\n", p);

  p = list_get_elem_at(myList, 0);
  printf("What is the element at index 0? %d.\n", p);
  p = list_get_index_of(myList, 1);
  printf("What is the index of element 1? %d.\n", p);
  p = list_get_index_of(myList, 0);
  printf("What is the index of element 0? %d.\n", p);

  list_free(myList);
  list_print(myList);
  return 0;
}
