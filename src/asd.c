#include <stdio.h>
#include <stdlib.h>
#include "user.h"

int main(void){

  FILE *fin = fopen("HOD_GR_B1024_Box1_z0.0.dat","r");
  FILE *fout = fopen("HOD_GR_B1024_Box1_z0.0.raw","wb");
  int i, np = 409392;
  realT *x_buf, *y_buf, *z_buf;
  realT x, y, z;
  fwrite(&np,sizeof(int),1,fout);

  printf("Total number of galaxies: %i\n", np);

  x_buf = (realT *)malloc(np*sizeof(realT));
  y_buf = (realT *)malloc(np*sizeof(realT));
  z_buf = (realT *)malloc(np*sizeof(realT));

  for (i=0 ; i < np; i++){
    fscanf(fin, "%lf %lf %lf", &x_buf[i], &y_buf[i], &z_buf[i]);
    printf("%lf %lf %lf\n", x_buf[i], y_buf[i], z_buf[i]);
  }

  fwrite(x_buf,sizeof(realT),np,fout);
  fwrite(y_buf,sizeof(realT),np,fout);
  fwrite(z_buf,sizeof(realT),np,fout);

  fclose(fin);
  fclose(fout);

}
