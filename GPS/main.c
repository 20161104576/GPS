//
//  main.c
//  GPS
//
//  Created by 范佳慧 on 2017/6/22.
//  Copyright © 2017年 范佳慧. All rights reserved.
//

#include <stdio.h>
int main(int argc,const char * argv[]){
    FILE *fp;
    char a[80],latitude[9],longitude[10],time[7],speed[6],date[7],azi[6];
    char b[80],altitude[5];
    
    int i;
    fp=fopen("//Users//20161104576fjh//Desktop//GPS170510.log","r+");
    fscanf(fp,"%s%s",a,b);
    printf("结果:%s\n%s\n",a,b);
    for(i=0;i<8;i++)
    {
        latitude[i]=a[i+16];
    }
    printf("纬度:%s\n",latitude);
    for(i=0;i<9;i++)
    {
        longitude[i]=a[i+27];
    }
    printf("经度:%s\n",longitude);
    for(i=0;i<6;i++)
    {
        time[i]=a[i+7];
    }
    printf("时间:%s\n",time);
    for(i=0;i<5;i++)
    {
        speed[i]=a[i+39];
    }
    printf("地面速率:%s\n",speed);
    for(i=0;i<6;i++)
    {
        date[i]=a[i+51];
    }
    printf("日期:%s\n",date);
    for(i=0;i<5;i++)
    {
        azi[i]=a[i+45];
    }
    printf("航向:%s\n",azi);
    for(i=0;i<4;i++)
    {
        altitude[i]=b[i+43];
    }
    printf("高度:%sft\n",altitude);
    
        fclose(fp);
    return 0;
    
}
