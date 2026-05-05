1. use-after-free in `handle__subscribe`. They took out a return at line 145.
2. stack bufferoverflow in `handle__unsubscribe`. Official fix is to switch from stack to heap and realloc as needed.
