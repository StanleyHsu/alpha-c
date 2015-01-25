#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <sys/time.h>

#include <log4c.h>
#include "hello_world.h"

int main(int argc, char** argv){
  int rc = 0;
  log4c_category_t* mycat = NULL;

  if (log4c_init()){
    printf("log4c_init() failed");
    rc = 1;
  }else{
      mycat = log4c_category_get("log4c.examples.helloworld");

      hello_world_t * ahello = hello_world_create();
      hello_world_set_hello(ahello, "Hello World Again!");

      log4c_category_log(mycat, LOG4C_PRIORITY_ERROR, hello_world_say_hello(ahello));


      double sec;
      struct timeval tv;

      gettimeofday(&tv, NULL);
      sec = tv.tv_sec;
      sec += tv.tv_usec / 1000000.0;

      log4c_category_log(mycat, LOG4C_PRIORITY_INFO, "Current Sec is %f\n", sec);

    /* Explicitly call the log4c cleanup routine */
    if ( log4c_fini()){
      printf("log4c_fini() failed");
    }
  }
  return rc;
}
