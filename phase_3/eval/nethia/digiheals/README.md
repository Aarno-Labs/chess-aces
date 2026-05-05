1. Failure to null terminate at date.c:76 This leads to a sprintf that leaks a stack address.
2. Heap overwrite. It occurs in knock.c:56
