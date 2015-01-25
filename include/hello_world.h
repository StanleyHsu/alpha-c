
#ifndef HELLO_WORLD_H_
#define HELLO_WORLD_H_

typedef struct hello_world hello_world_t;

hello_world_t * hello_world_create();
const char * hello_world_say_hello(hello_world_t *self);
void hello_world_set_hello(hello_world_t *self, const char* hello);
void hello_world_destroy(hello_world_t *self);

#endif /* HELLO_WORLD_H_ */
