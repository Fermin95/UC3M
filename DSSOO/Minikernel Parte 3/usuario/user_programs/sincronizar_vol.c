/*usuario/sincronizar_vol.c
 *
 *  Minikernel. Versión 1.0
 *
 *  Fernando Pérez Costoya
 *
 */

/*
 * Programa de usuario que sincroniza el volumen 
 */

#include <strings.h>
#include "servicios.h"

#define MAX_STRING 256  
#define TAM_BUFFER 128  

int main(){

        int ret;

        /* montar disco */
        printf("Montando el disco en la particion /FICHEROS/lectura con discoFS\n");
        ret=montar("disco", "lectura", "discoFS");
        if (0 > ret) {
                printf("sincronizar_vol: Error al montar particion lectura en disco con discoFS\n");
        }
	printf("Sincronizando el volumen montado en /FICHEROS/lectura\n");
	ret=sincronizar("lectura");
	if(0>ret){
		printf("sincronizar_vol: Error al sincronizar el volumen\n");
	}
	
	return (0);
}
