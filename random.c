#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"
char randchar(){
 
char x;
x= 'A' + rand()%26;
return x;

}