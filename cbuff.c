#include "ringbuffer.h"
#include <stdlib.h>

// private struct, only accessible from within this file
struct ringbuffer_instance_t {
	volatile uint32_t wr_pos;
	volatile uint32_t rd_pos;
	uint8_t* data;
	uint32_t capacity;
};

ringbuffer_t ringbuffer_create(uint32_t capacity){
	ringbuffer_t inst = calloc(1, sizeof(struct ringbuffer_instance_t));
	inst->data = calloc(capacity, sizeof(uint8_t));
	inst->capacity = capacity;
	inst->wr_pos = 0;
	inst->rd_pos = 0;

	return inst;
}

uint32_t ringbuffer_capacity(ringbuffer_t instance ) {
	return instance->capacity;
}

bool ringbuffer_enqueue(ringbuffer_t instance, uint8_t item){
	// to implement
	return true;
}

bool ringbuffer_dequeue(ringbuffer_t instance, uint8_t* item){
	// to implement
	return true;
}

void ringbuffer_destroy(ringbuffer_t instance){
	if(instance) {
		if (instance->data) {
			free(instance->data);
		}

		free(instance);
	}
}
