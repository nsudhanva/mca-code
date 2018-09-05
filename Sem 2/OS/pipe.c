#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/types.h>

#include <errno.h>

#define Max_length  1025

 

int main()

{

            char WriteMsg[Max_length];

            char ReadMsg[Max_length];

            int file_d[2];

            int result_pipe;

            pid_t child_t;

            result_pipe = pipe(file_d);

            if(result_pipe < 0)

            {

                        perror("pipe");

            }  

            child_t = fork();

            if(child_t >= 0)

            {

                        if(child_t == 0)

                        {

                                    memset (WriteMsg , 0 , sizeof(WriteMsg));

                                    printf ("Enter the Message : ");

                                    fgets (WriteMsg , sizeof(WriteMsg) , stdin);

                                    write (file_d[1] , WriteMsg , strlen(WriteMsg));

                                    exit(0);

                        }

                        else

                        {

                                    memset (ReadMsg , 0 , sizeof(ReadMsg));

                                    read (file_d[0] , ReadMsg , sizeof(ReadMsg));

                                    printf("Entered message : %s\n " , ReadMsg);

                                    exit(0);

                        }

            }

            else

            {

                        perror("fork");

                        exit(2);

            }         

            return 0;

}