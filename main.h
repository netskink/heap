#define DEBUG
#if defined(DEBUG)
#define Debug 1
#else
#define Debug 0
#endif
#define DBGPRINT(x...) do{if(Debug){fprintf(stderr, "%s [%d]:",__FILE__, __LINE__); fprintf(stderr, x);}} while(0)
// then use  DBGPRINT("testing %s\n", "foo");


