//
//  main.c
//  notes
//
//  Created by Andrew Braunstein on 2/20/11.
//  Copyright 2011 UPenn. All rights reserved.
//
//  Command line utility designed to allow users to make quick notes.
//  Users able to change location of where the notes are stored.
//  Features a utility to read the notes
//  All notes date/time stamped.
//  test comment

#include <stdio.h>
#include <sys/stat.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>

struct stat st;


void openAllNotes(){
  
}


void makeNote(char *string){
  
}



int main (int argc, char * argv[])
{
  char *p = getenv("HOME");
  char *loc = "/Library/Application Support/MyNotes";
  strcat(p, loc);
  if(stat(p,&st) != 0)
  {
    printf("directory does not exist\n");
    int k;
    k = mkdir(p,S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
    printf("%d\n", k);
  }
  
  if (argc==1){
    openAllNotes();
  }
  else{
    if(strcmp(argv[1],"-n")==0){
      makeNote(argv[argc-1]);
    }
  }
  return 0;  
  
}

