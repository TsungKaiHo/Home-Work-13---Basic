//
//  main.cpp
//  Home Work 13
//
//  Created by 何宗愷 on 2019/4/11.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int h;
    int sex;
    
    printf("我國法律規定，男女結婚最低限度的年齡則分別為 18歲及16歲\n");
    printf("男生輸入1,女生輸入2");
    printf("請輸入性別和年齡:");
    scanf("%d",&sex);
    scanf("%d",&h);
    
    if( sex==1 && h>=18)
    {
        printf("你可以結婚\n");
    }
    if( sex==1 && h<18)
    {
        printf("你不可以結婚\n");
    }
    if( sex==2 && h>=16)
    {
        printf("妳可以結婚\n");
    }
    if( sex==2 && h<16)
    {
        printf("妳不可以結婚\n");
    }
    return 0;
}
