#include "ll_cycle.h"

bool ll_has_cycle(node *head) {
	node *turtle =  head;
	node *hare = head->next;
	try {
		while(turtle != hare){
			hare->next->next;
			turtle->next;
		}
		return true;
	}
	catch{
		return false;
	}  
	return true;
}
