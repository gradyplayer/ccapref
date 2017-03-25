//
//  fifo.h
//  ccapref
//
//  Created by Grady Player on 3/25/17.
//  Copyright © 2017 Grady Player. All rights reserved.
//

#ifndef fifo_h
#define fifo_h


typedef struct ccFifoOptions{
}ccFifoOptions;


int cc_OpenFifo_fd(int fd);
int cc_OpenFifo(const char * abspath);

int cc_StartFifo(int fd, ccFifoOptions * options);

#endif /* fifo_h */
