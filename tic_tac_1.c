#include <stdio.h>
char a[3][3];
void print_board();

void getP1()
{
    int x,y;
    while(1)
    {
    printf("\n ENTER THE P1 COORDINATES :");
    scanf("%d %d",&x,&y);
    if(a[x][y]=='-' ) 
     {
      break; 
     }
    else
     { 
         printf("\nTHE POSITION HAS BEEN OCCUPIES ALREADY"); 
     }
    }
    a[x][y]='X';
    print_board();
}

void getP2()
{
    int x,y;
    while(1)
    {
    printf("\n ENTER THE P2 COORDINATES :");
    scanf("%d %d",&x,&y);
    if(a[x][y]=='-')
     {
        break;
     }
    else
     {
        printf("\nTHE POSITION ENTERED HAS BEEN OCCUPIED ALREADY");
     }
    }
    a[x][y]='O';
    print_board();
}
   
int main() 
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]='-';
        }
    }
    print_board();
    
    getP1();
    getP2();
 
    getP1();
    getP2();
 
    getP1();
    getP2();
 
    getP1();
    getP2();
 
    getP1();
 
    return 0;
}
 void print_board()
 {
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             printf(" %c ",a[i][j]);
         }
         printf("\n");
     }
 }
