# include "hello_world.h"

# include <stdlib.h>
# include <string.h>

struct hello_world {
   char _hello[128];
};

hello_world_t * hello_world_create()
{
   hello_world_t * ahello = malloc(sizeof(struct hello_world));
   memset(ahello->_hello, 0, sizeof(char[128]));
   hello_world_set_hello(ahello, "Hello World!");
   return ahello;
}
const char * hello_world_say_hello(hello_world_t *self)
{
   return self->_hello;
}

void hello_world_set_hello(hello_world_t *self, const char* hello)
{
   strncpy(self->_hello, hello, sizeof(char[128]));
}
void hello_world_destroy(hello_world_t *self)
{
   if (self != 0) free(self);
}
