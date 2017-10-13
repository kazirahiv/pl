/* This script is for downloading youtube video with the help of youtube-dl.
    Usage: Install youtube-dl on your Linux/Unix based system, make sure it 
    is available via bash/terminal.Then compile it an run the binary of it, 
    by typing ./zack in the current directory in terminal and voila ! 
*/
#include<stdio.h>
int main(){
    printf("Press (1) For Video Download and\n      (2) For Mp3 Download.\n      (3) For a Entire Playlist Download\n      (4) For installing youtube-dl on your system\n");
    int button;
    scanf("%d", &button);
    if(button==1){
        char ydlv[50]="youtube-dl ";
        char link[50];
        printf("Enter link-> ");
        scanf("%s", link);
        strcat(ydlv, link);
        printf("Downloading Video....\n");
        system(ydlv);
        }
    if(button==2){
        char ydlc[50]="youtube-dl --extract-audio --audio-format mp3 ";
        char link[50];
        printf("Enter link-> ");
        scanf("%s", link);
        strcat(ydlc, link);
        printf("Downloading Mp3....\n");
        system(ydlc);
        }
    if(button==3){
        char ydlp[100]="youtube-dl -t ";
        char link[100];
        printf("Enter link-> ");
        scanf("%s", link);
        strcat(ydlp, link);
        printf("Downloading Playlist....\n");
        system(ydlp);
        }
    if(button==4){
        system("sudo apt-get install youtube-dl");
    }


    }
