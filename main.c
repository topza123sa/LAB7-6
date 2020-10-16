#include <stdio.h>
int main(void)
{
 int mata[6][4];
 int matb[4][ด5];
 int matc[6][5];
 int r, c, v, psum;
 int i;
 for(i=0;i<6;i++){
 for(int j=0;j<4;j++){
 printf("MatrixA[%d][%d] : ",i,j);
 scanf("%d",&mata[i][j]);
 }
 }
 int k;
 for(k=0;k<4;k++){
 for(int l=0;l<5;l++){
 printf("MatrixB[%d][%d] : ",k,l);
 scanf("%d",&matb[k][l]);
 }
 }
 for(r=0; r<6; r++)
 for(c=0; c<5; c++){
 psum = 0;
 for(v=0; v<4; v++)
 psum += mata[r][v] * matb[v][c];
 matc[r][c] = psum;
 }
 printf("The array product is : \n");
 for(r=0; r<6; r++){
 for(c=0; c<5; c++)
 printf("%5d",matc[r][c]);
 printf("\n");
 }
 return 0;
}
