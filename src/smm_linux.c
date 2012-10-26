#include <sys/ipc.h>
#include <sys/shm.h>
#include "ssm.h"
#include "libssm.h"
#include "smm.h"

int smm_create(int size){
    return shmget( SHM_TIME_KEY, size, IPC_CREAT | 0666 );
}

void *smm_attach(int id){
    return shmat( id, 0, 0 );
}

int smm_destroy(int id){
    return shmctl( id, IPC_RMID, 0 );
}

int smm_dettach(int id){
    return shmdt( id );
}
