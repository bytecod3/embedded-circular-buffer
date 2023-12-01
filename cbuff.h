#pragma once

#include <stdint.h>
#include <stdbool.h>

// opaque pointer to represent a ringbuffer instance
typedef struct ringbuffer_instance_t* ringbuffer_t;

// functions that operate on an instance
ringbuffer_t ringbuffer_create(uint32_t capacity);
uint32_t ringbuffer_capacity(ringbuffer_t instance);
bool ringbuffer_enqueue(ringbuffer_t instance, uint8_t item);
bool ringbuffer_dequeue(ringbuffer_t instance, uint8_t* item);
void ringbuffer_destroy(ringbuffer_t instance);


