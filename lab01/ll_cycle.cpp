#include "ll_cycle.h"
#include <stddef.h>

bool ll_has_cycle(node *head) {
	node *turtle = head;
	node *hare = head;
	while (hare != NULL && hare->next != NULL) {
		turtle = turtle->next;
		hare = hare->next->next;
		if (turtle == hare)
			return true;

	}
	return false;
}
