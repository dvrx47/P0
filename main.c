#include <stdio.h>
#include <pthread.h>

void* funkcjaWatek(void* dane){
	printf("%s", (char*)dane );
	return NULL;
}

int main(){
	pthread_t watek1, watek2;
	pthread_create(&watek1, NULL, funkcjaWatek, "napis z watku potomnego nr 1\n");
	pthread_create(&watek2, NULL, funkcjaWatek, "napis z watku potomnego nr 2\n");

	pthread_join(watek1, NULL);
	pthread_join(watek2, NULL);

	printf("napis z watku glownego\n");
	return 0;
}
