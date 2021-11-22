#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char *string_value;
	int value;
} some_struct_t;

some_struct_t *some_struct_new(int value) {
	some_struct_t *some_struct = (some_struct_t *)malloc(sizeof(some_struct_t));
	some_struct->value = value;

	some_struct->string_value = (char *)malloc(18 * sizeof(char));
	sprintf(some_struct->string_value, "Value: %d", value);

	return some_struct;
}

void some_struct_destroy(some_struct_t *st) {
	free(st->string_value);
}

void some_struct_add(some_struct_t *st, int value) {
	st->value += value;
	sprintf(st->string_value, "Value: %d", st->value);
}

void some_struct_clear(some_struct_t *st) {
	st->value = 0;
	st->string_value = NULL;
}

void some_struct_log(some_struct_t *st) {
	printf("{ value = %d, string_value = \"%s\" }\n", st->value, st->string_value);
}
