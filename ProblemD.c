#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int w;
	scanf("%d", &w);
	
	printf("%s", ((w % 2 == 0 && w > 2) ? "YES" : "NO"));
	
  return(0);
}